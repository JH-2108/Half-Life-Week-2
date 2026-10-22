
#include <Servo.h>
const int JOY1_X = A0;  
const int JOY1_Y = A1;  

const int JOY2_X = A2;  
const int JOY2_Y = A3;  

const int BUTTON_OPEN  = 2;
const int BUTTON_CLOSE = 3;

const int SERVO_BASE       = 4;
const int SERVO_ELBOW1     = 5;
const int SERVO_ELBOW2     = 6;
const int SERVO_ROTATION   = 7;
const int SERVO_GRIPPER    = 8;

Servo baseServo;
Servo elbow1Servo;
Servo elbow2Servo;
Servo rotationServo;
Servo gripperServo;

const int BASE_MIN = 0;
const int BASE_MAX = 180;

const int ELBOW1_MIN = 20;
const int ELBOW1_MAX = 160;

const int ELBOW2_MIN = 20;
const int ELBOW2_MAX = 160;

const int ROTATION_MIN = 0;
const int ROTATION_MAX = 180;

const int GRIPPER_OPEN_ANGLE = 90;
const int GRIPPER_CLOSE_ANGLE = 20;

const int JOY_CENTER = 512;
const int JOY_DEAD_ZONE = 35;

int baseAngle = 90;
int elbow1Angle = 90;
int elbow2Angle = 90;
int rotationAngle = 90;
int gripperAngle = GRIPPER_OPEN_ANGLE;

unsigned long lastMoveTime = 0;
const unsigned long MOVE_INTERVAL_MS = 15;

int joystickToAngle(
  int reading,
  int currentAngle,
  int minAngle,
  int maxAngle
) {
  int offset = reading - JOY_CENTER;

  if (abs(offset) < JOY_DEAD_ZONE) {
    return currentAngle;
  }

  int targetAngle = map(
    reading,
    0, 1023,
    minAngle, maxAngle
  );

  return constrain(targetAngle, minAngle, maxAngle);
}

void setup() {
  Serial.begin(9600);

  pinMode(BUTTON_OPEN, INPUT_PULLUP);
  pinMode(BUTTON_CLOSE, INPUT_PULLUP);

  baseServo.attach(SERVO_BASE);
  elbow1Servo.attach(SERVO_ELBOW1);
  elbow2Servo.attach(SERVO_ELBOW2);
  rotationServo.attach(SERVO_ROTATION);
  gripperServo.attach(SERVO_GRIPPER);

  baseServo.write(baseAngle);
  elbow1Servo.write(elbow1Angle);
  elbow2Servo.write(elbow2Angle);
  rotationServo.write(rotationAngle);
  gripperServo.write(gripperAngle);

  Serial.println("Mini Robotic Arm Ready!");
}

void loop() {
  int joy1X = analogRead(JOY1_X);
  int joy1Y = analogRead(JOY1_Y);
  int joy2X = analogRead(JOY2_X);
  int joy2Y = analogRead(JOY2_Y);

  if (millis() - lastMoveTime >= MOVE_INTERVAL_MS) {
    lastMoveTime = millis();

    baseAngle = joystickToAngle(
      joy1X, baseAngle, BASE_MIN, BASE_MAX
    );

    elbow1Angle = joystickToAngle(
      joy1Y, elbow1Angle, ELBOW1_MIN, ELBOW1_MAX
    );

    elbow2Angle = joystickToAngle(
      joy2Y, elbow2Angle, ELBOW2_MIN, ELBOW2_MAX
    );

    rotationAngle = joystickToAngle(
      joy2X, rotationAngle, ROTATION_MIN, ROTATION_MAX
    );

    baseServo.write(baseAngle);
    elbow1Servo.write(elbow1Angle);
    elbow2Servo.write(elbow2Angle);
    rotationServo.write(rotationAngle);
  }

  bool openPressed = (digitalRead(BUTTON_OPEN) == LOW);
  bool closePressed = (digitalRead(BUTTON_CLOSE) == LOW);

  if (openPressed && !closePressed) {
    gripperAngle = GRIPPER_OPEN_ANGLE;
    gripperServo.write(gripperAngle);
  }
  else if (closePressed && !openPressed) {
    gripperAngle = GRIPPER_CLOSE_ANGLE;
    gripperServo.write(gripperAngle);
  }

  delay(5);
}
