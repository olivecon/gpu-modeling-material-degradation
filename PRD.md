<div>Group 2 GPU-based modeling of material degradation inside of a nuclear reactor</div>
<div>Austin Nakamatsu, Connor Oliver, Kyle Werstlein, Matthew Mills</div>
<div>Senior Software Engineering Project I</div>

# Problem Description
Nuclear power is a very promising, but still emerging, field. It promises reliable, zero-emission energy that could combat global warming while still allowing luxuries that we enjoy. Unfortunately, nuclear power can be dangerous if it is not thoroughly understood. There have been many disasters that have damaged the reputation of this power source. It is important that scientists have access to models that allow them to determine how a nuclear substance will damage itself and the equipment around it while it degrades. However, current models are very challenging to run because of the processing power they consume. 

## Scope
We will create a model of a radioactive material decaying into other materials and damaging machinery around it. This model will be accurate because it will follow predictions made by rate theory and cluster dynamics. We will create graphical representations of the simulation so researchers can better understand how the model changes with time. As a stretch goal, we will implement an in-depth GUI to help users interact with our simulation.

## Use Cases
The user will want to see how a given material fares under intense irradiation.  The user will be able to select some initial conditions and manipulate them via a GUI or the source code.  The user will then be able to see a graphical representation of the degradation of the material over a certain period of time.

# Purpose and Vision
We will deliver code that produces a cluster dynamics model for radiation damage and example simulation results. Unlike our competitors, these models will run on a GPU because their parallel computing capabilities will reduce the cost of computing models and allow for breakthroughs in modeling. Currently, other models probably run exclusively on the CPU, and they use a lot of processing power as a result. 

# Stakeholders
- Nuclear scientists/researchers (likely our only direct users)
- Tianyi Chen (mentor)
- Nischal Aryal (teaching assistant and stand-up leader)
It is very important to keep Mr. Chen and Mr. Aryal updated on our progress as we develop this software. They are our most important stakeholders, and they will need the most frequent updates. This software will probably be used by Mr. Chen’s colleagues, although I do not know this for sure yet. It would be good to follow the principles of agile development and release bare-bones versions of our software for them to test. This will give us more feedback on our software, which should lead to a better product later. They could post issues with our product on our GitHub page for us to respond to. I am not sure if there are any investors that have given money for this software’s development, but if there are, they are not necessarily going to need constant updates because they will probably not have the background knowledge required to test our software.

# Preliminary Context
## Assumptions
- GPUs are an effective alternative to creating models
- Libraries used in development will work as intended and have been tested
- We have until the end of the school year to create this simulation
- Our mentor will provide us with valuable, timely feedback
- Our mentor has allocated a large enough budget for this project
- Rate theory and molecular dynamics are accurate ways to represent a radioactive substance. There will not be an advance in our understanding of radioactive decay that will cause this to become outdated soon
## Constraints
- Our product is expected to take a lot of processing power to run, but it should be an improvement on what is in the market already. Users should receive a more timely simulation than they have grown accustomed to
- Simulation should be accurate enough to make good decisions in the real world
- Our understanding of GPUs and radioactive decay is likely not great. This could lead to slowed-down delivery
- No one on my team has prior exposure to any of the concepts being used to create a simulation of radioactive materials
- We can only work on this project for the duration of the class (three quarters)
## Dependencies
- Need access to Nvidia graphics cards owned by OSU

# Market Assessment and Competition Analysis
- CRCPD is a company that produces models that could fill a similar market (https://www.crcpd.org/page/SoftwareModeling)
- Physical models of what we are creating likely already exist in better-funded labs

# Target Demographics
- Leslie is a nuclear scientist with a focus on nuclear reactors. She wants to be able to create models of nuclear radiation in a reactor that does not take hours to load, and she wants to be able to run these simulations using cheaper machinery, especially with the increasing price of computer parts.

# Requirements
## User Stories and Features
- As a nuclear power researcher, I want to be able to simulate different situations in which radioactive materials decay in a reactor so that I can predict what will happen
- As a nuclear power researcher, I want to be able to pause and resume a simulation so that I can take in more information about the current state of the simulated reactor
- As a nuclear power researcher, I want to be able to simulate materials in the reactors I have designed so I can try new ideas and get quick feedback
- As a nuclear power researcher, I want access to detailed data in the simulation so I can get a better idea of what is going on in the simulation. I often find numbers are more valuable than visuals in my line of work
## Non-Functional Requirements
- Simulation should take less than a minute to load before it can play
- Simulation should run primarily on GPU to increase potential processing power and accessibility to simulation
- Code should be well-documented and a wiki should be available
- Simulation should be accurate based on rate theory and molecular dynamics
- Should be safe to use so research is not stolen by a competitor
## Data Requirements
- Information about the radioactive substance will need to be stored in a class to make decay, mass, and other important information available
- Information about the reactor will have to be stored in a class to understand the stress that it is undertaking during nuclear fission
## Integration Requirements
- It is unknown exactly what my team will use to create this software
- Likely some 3D modeling software potentially with a built-in physics engine

## User Interaction and Design
![Alt text](PRDMockup.png?raw=true "PRD Mockup")

Features: drop-down tables to change properties of the reactor and radioactive substance, relevant information about the reactor and radioactive substance, start and stop simulation, rewind and fast-forward simulation, graphical simulation of substance

# Timeline

- Finish planning out the project – Within the next month
- Get familiar with the equation/project material – end of fall term
- Code the basics of the project – end of winter term (?)
- Set up user interface – end of winter term
- Finishing touches – end of the year

# Goals and Success Metrics

| Goal | Metric | Baseline | Target | Tracking Method
| :-- | :-- | :-- | :-- | :-- 
Increase Productivity | Simulation Load Time for a Complex Simulation | XX:XX | <10:00 | Set breakpoints in code and time them
Accurate Simulation | Deviations From Previous Simulations/Real-World Models | XX% Correct | >95% Correct | Compare simulation to simulations our mentor has access to
Good UI | Survey Rating 1-10 | X | 7 | Online Surveys, Interview Mentor’s Colleagues


# Open Questions
- What are we doing for UI?
- What are the exact methods our team will use for quality assurance? Will we review each other’s code in pull requests? How many reviewers per pull request?

# Out of Scope
- There is a chance this simulation software ends up just being a proof of concept with no use in the industry.
- It is not our job to determine if a reactor is safe within the software. We give data for researchers to make decisions on.