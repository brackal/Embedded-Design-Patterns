# MVC pattern in embedded monolithic system (in progress!)
## Main idea
How can the MVC pattern be implemented in a monolithic embedded system without a display? Which components can take the role of the Model, the View, and the Controller?

The idea of applying the MVC (Model–View–Controller) pattern to embedded systems originated from the book "Making Embedded Systems" by Alicia White. There is limited information available on the use of MVC in embedded software. However, one relevant article is "Model View Controller Architecture on Embedded Systems" by Abhishek Bajpai. A general definition of MVC can also be found in "Pattern-Oriented Software Architecture" by Frank Buschmann.

## Overview of the MVC Pattern
The MVC pattern is typically described in the context of applications with user interfaces that include visual elements, i.e., applications featuring a graphical user interface (GUI). This document demonstrates how the MVC concept can be implemented in an embedded system that does not provide a GUI.

The MVC pattern defines a separation of responsibilities among input handling, business logic, and output generation. The following sections describe the typical roles of each component in a general MVC architecture.

### Controller
**•** Receives input from the user, external sources, or system events (in embedded systems: button presses, serial interface input, timers)<br>
**•** Interprets the input and triggers corresponding actions in the Model<br>
**•** Manages the control flow and determines when specific Model actions must be executed<br>

### Model
**•** Owns and manages the system data and/or implements the core business logic<br>
**•** Ensures data integrity and correctness<br>
**•** Notifies the View component about data changes<br>
**•** Defines how data should be processed and maintained<br>

### View
**•** Presents data to the user or an external interface (in embedded systems: LEDs, serial interface output, display indicators)<br>
**•** Formats data for presentation according to system requirements<br>

### Summary
In summary, the MVC pattern enables a clear separation of concerns in software design. When applied to embedded systems, it helps isolate hardware-dependent input/output handling (Controller and View) from the core logic (Model), thereby improving modularity, maintainability, and testability.

## Class view (in progress!)

![Layer](uml/Layer.PNG "Layer")

## todo








