# Software Design and Architecture

## Introduction
The aim of this project is to create a tool to simulate material degradation in a nuclear reactor. In doing this we want to prove that computer science can be used to aid in material science research. We also want to provide our project partner (as well as other researchers) with a tool to use in studies as doing physical simulations of material degradation can take a lot of time and resources. 
Because this simulation will be rather large, the architecture of the code will need to aid in keeping runtime low. If the runtime of the simulation is too slow, the tool will prove not very useful for researchers. One of the main goals of this project is to prove that utilizing GPU calculations will be very useful for material science research. 
## Architectural Goals and Principles
* Ease of use for researchers with minimal software expertise. 
* Modularity
* Speed of the simulation
* Clear visualization of the simulation
## System Overview
![Image of our system overview](System_Overview.png?raw=true)
Our overview is fairly simple. The user will use the command line interface to kick off the script with certain parameters. This will execute compiled c++ code that performs calculations with the parameters and outputs to the GUI. The GUI will display the information back to the user. 
## Architectural Patterns
Our project does not require a web interface so most of the architectural patterns are not applicable. The pattern that seems closest to our needs is MVC architecture. The model will be the backend C++ code that runs the calculations and provides the output to the visualization library. The view will be the graphical component that displays the results of the simulation. The controller will be a command input on the command line that the user selects parameters with for the simulation. 
## Component Descriptions
* CLI: Handles user interactions, provides navigation
* Backend C++ code: Performs calculations, sends data to visualization component
* Visualization code: Takes the data and translates it into a graphical representation that the user can understand.
## Data Management
We won’t need to do any database management because our project has no database component. None of our data is stored (and if that is changed, the data will most likely be exported to CSV format).
## Interface Design
![Example of what our interface design may look like](PRDMockup.png?raw=true)
Our user will interact with the program in two different places. Firstly they will run the script with the appropriate arguments so that it can kick start the graphical element. The user will most likely need some sort of README or other documentation so that they can figure out how to run the script. Once they run the script a graphical element will show up, the only potential interaction at this point would be potentially speeding up or slowing down the simulation. 
## Considerations
### Security
Because our program will run locally on a user’s machine, we do not necessarily have many security measures. We won’t store any data about the user so we won’t have any sensitive information. 
### Performance
We have not received any strict runtime maximum’s however we do know that simulation speed is an important aspect of this project. To do this we will use CUDA to run GPU calculations. This kind of simulation has been created before, but our project is specifically focused on making the simulation faster.  
### Maintenance and Support
The future maintenance of this project is still up in the air. There is a chance one of the teams currently working on it or a future capstone team will aid in the support. The person who will take over the project after we leave is our project partner Tianyi Chen, though he has minimal coding experience. We will collect feedback through our weekly project partner meeting with Tianyi. 
### Deployment Strategy
Our program will be deployed by providing the compiled C++ code to be run as an executable. We will send the executable to our relevant stakeholders. We will also provide them instructions on how to run the script and how the output will be formatted. 
### Testing Strategy
We hope to be testing in two different phases of development. We should be testing on our feature branch frequently using unit tests that leverage our code’s modularity. We should also do pre-merge testing of the entire simulation to ensure that at a high level nothing is breaking. These tests should be included in our main repository in a separate directory called “test”. 
## Glossary
CLI: Command Line Interface, a terminal interface that the user can interact with. 
GPU Calculations: Calculations that utilize the GPU to do memory intensive work very quickly. 
GUI: Graphical User Interface, this is the part of the code that the user interacts with and makes adjustments to. 
MVC: Model View Controller, a style of design pattern that can be separated into three elements, model, view, and controller. These three elements interact with each other and the user. The model is purely the backend calculations. The view is the graphical representation that shows the data to the user. The controller is the thing that the user interacts with to trigger the program. 