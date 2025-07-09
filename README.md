# Muti-Objective-LKH3-PDPTW
LKH3-PDPTW: Flexible Multi-Objective Solver for Electric Shared Mobility
Separate the optimisation objective from the constraints (in the original PDPTW, both the optimisation objective and constraints are TW). In this method, different combinations of optimisation objectives (first matrix) can be set, and the time matrix can be entered separately as a TW constraint.

Original project: http://webhotel4.ruc.dk/~keld/research/LKH-3/

This repository extends the classic LKH-3 heuristic solver to address the Pickup and Delivery Problem with Time Windows (PDPTW) under advanced objectives and modern constraints, especially for electric vehicle (EV) fleets in urban environments.

Key Features
Flexible Objective Functions:
Solve PDPTW with user-defined optimization targets:

Travel time, Distance, Energy consumption, Combined cost (any weighted combination of the above)

Strict Time Window Constraints:
Time window feasibility is enforced as a hard constraint, independent of the primary objective function.


EV-Specific Cost Modeling:
Incorporates dynamic wireless charging (DWC) roads. The solver can optimize not just classic cost, but also the stability of State-of-Charge (SOC) — minimizing battery fluctuations over the full PDPTW route.


The results of stabilising the EV SOC are as follows:

![Picture1](https://github.com/user-attachments/assets/1f9a7ad9-aaf1-4ce0-9132-84aeab220a4c)


Getting Started
Please refer to the README for compilation, input file examples, and usage instructions.

#How to run:

For windows : cmd    "yourpath\LKH-3.exe" "yourpath\pdpdwc0.par"
Also can be edited in: Muti-Objective-LKH3-PDPTW/LKH/SRC. And then release the new exe file.

If this is helpful to you, please cite the following papers (the LKH model used in the paper is M1-PDTSP, not PDPTW):

"A Novel Deep Reinforcement Learning Framework for Shared Autonomous Vehicles Pickup, Delivery, and Charging Problem":
https://ieeexplore.ieee.org/document/11048880

"Enabling Continuous Operation of Shared Autonomous Vehicles With Dynamic Wireless Charging"
https://ieeexplore.ieee.org/document/10571776
