# Muti-Objective-LKH3-PDPTW
LKH3-PDPTW: Flexible Multi-Objective Solver for Electric Shared Mobility

Original project: http://webhotel4.ruc.dk/~keld/research/LKH-3/

This repository extends the classic LKH-3 heuristic solver to address the Pickup and Delivery Problem with Time Windows (PDPTW) under advanced objectives and modern constraints, especially for electric vehicle (EV) fleets in urban environments.

Key Features
Flexible Objective Functions:
Solve PDPTW with user-defined optimization targets:

Travel time

Distance

Energy consumption

Composite cost (any weighted combination of the above)

EV-Specific Cost Modeling:
Incorporates dynamic wireless charging (DWC) roads. The solver can optimize not just classic cost, but also the stability of State-of-Charge (SOC) — minimizing battery fluctuations over the full PDPTW route.

Strict Time Window Constraints:
Time window feasibility is enforced as a hard constraint, independent of the primary objective function.

Customizable for Smart Mobility Scenarios:
Especially suited for research on shared autonomous vehicles (SAVs) and electric fleet operations in urban road networks.

Example Use Cases
Optimize EV routing for cost efficiency, grid-friendliness, or battery health.

Model PDPTW for future mobility systems with on-road charging infrastructure.


![Picture1](https://github.com/user-attachments/assets/1f9a7ad9-aaf1-4ce0-9132-84aeab220a4c)

Research agent-based dispatch, RL policy evaluation, or realistic urban logistics.

Getting Started
Please refer to the README for compilation, input file examples, and usage instructions.
The codebase preserves LKH3’s performance while offering new flexibility for next-generation urban transport studies.


#How to run:

For windows : cmd    "yourpath\LKH-3.exe" "yourpath\pdpdwc0.par"
