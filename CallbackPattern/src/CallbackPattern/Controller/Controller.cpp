///////////////////////////////////////////////////////////
//  Controller.cpp
//  Implementation of the Class Controller
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Controller.h"




Controller::Controller(){

}


Controller::~Controller(){

}


/**
 * @brief Notifies that the counter has been incremented.
 * 
 * This method outputs a message to indicate that the counter
 * has been incremented and the notification has been triggered.
 */
void Controller::notify(){

	std::cout << "Controller: Incremented counter was notified!" << std::endl;
}


/**
 * @brief Sets the counter object and registers a callback with it.
 * 
 * This function assigns the provided counter object to the controller and
 * attempts to register the controller as a callback with the counter. If the
 * registration fails, an error message is printed to the standard output.
 * 
 * @param counter Pointer to an object implementing the I_Counter interface.
 *                This object will be used by the controller to interact with
 *                the counter functionality.
 * 
 * @note If the callback registration fails, additional error handling should
 *       be implemented where indicated in the code.
 */
void Controller::setCounter(I_Counter* counter){

	bool isRegistered = false;

	mCounter = counter;
	isRegistered = mCounter->registerCallback(this);

	if (isRegistered == false) {
		std::cout << "Not registered!" << std::endl;
		//todo error handling
	}
}