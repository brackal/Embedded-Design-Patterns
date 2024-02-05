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


void Controller::notify(){

	std::cout << "Controller: Incremented counter was notified!" << std::endl;
}


void Controller::setCounter(I_Counter* counter){

	bool isRegistered = false;

	mCounter = counter;
	isRegistered = mCounter->registerCallback(this);

	if (isRegistered == false) {
		std::cout << "Not registered!" << std::endl;
		//todo error handling
	}
}