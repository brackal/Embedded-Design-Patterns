# MVC Pattern in Embedded Monolithic System (in progress!)
## Main Idea
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

## Controller-Model–View Interaction in Embedded Context
The Controller receives input from the user or from other systems.
In this example, inputs are generated either by a button press or by a message (telegram) received via the serial interface. Each type of input is handled by a dedicated Controller.

**Controllers** interpret incoming inputs and determine what data needs to be modified in the Model.
They have both read and write access to the Model and trigger corresponding actions as required.
In some use cases, Controllers also need to retrieve data from the Model; in such cases, they can directly access the necessary information.<br>
Controllers also have access to the Views and can instruct them to visualize or present data when needed.

The **Model** (which may consist of a single entity or, as in this example, multiple sub-models) notifies all subscribed Views whenever its data or internal state changes.

Upon receiving such a notification, each **View** — which should have read-only access to the Model — retrieves the relevant data it is interested in and presents it accordingly.<br>
In this example, the LED functions as a visual element. The transfer of information itself can be considered a form of data representation.

##### Diagram Notation and Arrow Semantics
In this diagram, arrows labeled with the stereotype << flow >> represent the information flow from the source to the sink.
They do not indicate a structural dependency. For example, a Button does not depend on the Controller.
Arrows labeled with the stereotype << use >>, on the other hand, indicate a true structural dependency.<br>
For instance, a Controller depends on the Model, which means that in the implementation, the Controller must hold a reference to the Model.

![MVC - Roles in Embedded Context](uml/MVC - Roles in Embedded Context.PNG "MVC Roles in Embedded Context")

## Layer View
![Layer](uml/Layer.PNG "Layer View")

## todo








