# Mini Robotic Arm 

A CAD design project for Hack Club Half Life Week 2. 

This project aims to design a compact robotic arm with motorized joints (using servo motors), allowing it to move and position small objects. The mechanical structure will be designed in CAD, with mounting points for the motors, supporting components, and electronics. 

The goal is to combine mechanical design, basic electronics, and prototyping into a functional mini robotic arm. 

# Project Overview
The mini robotic arm will use multiple motorized joints to control the movement of its links. The arm will be powered by an external battery supply and controlled using physical buttons. 

The design will prioritize a compact structure, practical assembly, and sufficient strength to move lightweight objects. 

# Key Features 
- Compact robotic arm with multiple articulated joints.
- Motorized movement for positioning the arm.
- Custom-designed links, joints, and motor mounts.
- Battery-powered operation.
- Physical buttons and levers for controlling movement.
- A gripper or end effector for handling lightweight objects.
- Modular components designed for straightforward assembly.

# How it works 
1. The battery supplies power to the elctronic system.
2. The use presses a control button or move a lever to command a movement.
3. The control electronics active the appropriate motor.
4. The motor moves a joint, changing the arm's position.
5. Multiple joints work together to position the end effector.
6. The gripper can be used to hold or release a lightweight object, if included in the final design.

The final control method and number of movement axes will depend on the selected motors and electronics, attached in the [BOM](BOM.md) 

# Mechanical Design
The CAD assembly is planned to include the following parts: 
- Base: Supports the arm and provides a stable mounting platform.
- Shoulder joint: Raises and lowers the main arm link.
- Arm links: Connect the joints and determine the arm's reach.
- Elbow joint: Changes the angle between the arm links.
- Wrist or end-effector mount: Supports the gripper or tool.
- Gripper: Holds lightweight object
- Motor mount: Secure the motors to the relevant joints.
- Electronics mounts: Provide space for the control board, battery supply, and buttons.

The design will be refined to reduce unnecessary weight, prevent mechanical interference, and provide adequate clearance for moving joints. 

| Component | Purpose | 
|---|---|
| DC geared motors | Drive the arm's joints | 
| Control board / electronics | reads button inputs and generate motor-control signals | 
| Battery pack | supplies electrical power | 
| Push buttons | Provide manual movement commands| 
| Connecting wires | connect the electronics | 
| Power switch | Turns the system on and off | 

**Safety Note**: the motor supply and control electronics must be compatible with the selected components. Motors should not be powered directly from a control board's GPIO pins. 

# Bill of Materials
| Item                                          | Qty | Supplier        | Cost/item | Total Cost | link                                                                                                                                                                                                                                                          |
|-----------------------------------------------|-----|-----------------|-----------|------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 2-axis analog joystick module                 | 2   | Shopee Malaysia | $0.82     | $1.64      | https://shopee.com.my/Dual-axis-XY-Joystick-Module-for-PS2-Joystick-Control-Lever-Sensor-KY-023-for-Arduino-i.1063532218.26168353553                                                                                                                          |
| MG90S metal-gear micro servo                  | 5   | GI Electronics  | $2.08     | $10.40     | https://www.gie.com.my/shop.php?action=robotics%2Fmotors%2Fservo_mg90s                                                                                                                                                                                        |
| M3 brass heat-set inserts, 4 mm length        | 4   | Smith3D         | $0.50     | $2.00      | https://www.smith3d.com/shop/parts-and-accessories/more-parts/others/3d-prints-copper-heat-threaded-inserts-set-inserts-embedment-nut-m3-m4-m5/                                                                                                               |
| M2.5 × 10 mm Phillips pan-head machine screws | 10  | Shopee Malaysia | $0.06     | $0.60      | https://shopee.com.my/-M2-M2.5-Phillips-Cross-Pan-Round-Head-Machine-Screw-Skru-Bolt-Philips-Stainless-Steel-304-i.327548229.22910653937                                                                                                                      |
| Push Button                                   | 2   | Shopee Malaysia | $0.65     | $1.30      | https://shopee.com.my/R13-507-Push-Button-Switch-No-Locking-Round-Momentary-Red-Green-Yellow-Blue-White-Black-i.1165814930.24490344055?extraParams=%7B%22display_model_id%22%3A148974008789%2C%22model_selection_logic%22%3A3%7D                              |
| Print Legion                                  | 1   | PrintLegion     | $9.00     | $9.00      | https://printlegion.hackclub.com                                                                                                                                                                                                                              |
| M3 x 8mm Philips pan-head machine screws      | 1   | Shopee Malaysia | $0.50     | $0.50      | https://shopee.com.my/M3-M4-M5-M6-M8-304-Stainless-Steel-Screws-Phillips-Countersunk-Flat-Head-Screw-TechMakers-Cross-Recessed-Phillip-Screw-i.55645224.12987786264?extraParams=%7B%22display_model_id%22%3A310357492388%2C%22model_selection_logic%22%3A3%7D |
| Estimated total shipping                      | 1   |                 |           | $2.95      |                                                                                                                                                                                                                                                               |
# Onshape Link
https://cad.onshape.com/documents/3c30a631e05afb6c4c8b227b/w/e09087d3c00c34fd0a42f4f2/e/1253bb27058cea8fdef033b7

# Project Images 

**CAD Design** 

<img width="382" height="666" alt="image" src="https://github.com/user-attachments/assets/fc6da9f2-cf5c-4347-8910-d5592b2e0121" />


**Electronic Connection** 

<img width="545" height="516" alt="image" src="https://github.com/user-attachments/assets/47283dc6-8404-498c-8bd5-f25ce01cc2a2" />


**Physical completed model of the robotic arm** 

A photo will be added here. 


# LICENSE
This project is under a License, click [LICENSE](LICENSE) to learn more!
