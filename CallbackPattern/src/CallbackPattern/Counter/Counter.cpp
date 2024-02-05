///////////////////////////////////////////////////////////
//  Counter.cpp
//  Implementation of the Class Counter
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Counter.h"







Counter::Counter(){

	mCallbackArray.fill(nullptr);
	mCounter = 0;
}


Counter::~Counter(){

}


void Counter::incrementCounter(){
	
	for (uint8_t i = 0; i < mCallbackArraySize; i++){
			
		if (mCallbackArray[i] != nullptr) {
			mCounter++;
			mCallbackArray[i]->notify();
		}
	}
}


bool Counter::registerCallback(ICB_Counter* callback){

	bool retVal = false;

	for (uint8_t i = 0; i < mCallbackArraySize; i++){

		if (mCallbackArray[i] != nullptr) {
			continue;
		}
		else {
			mCallbackArray[i] = callback;
			retVal = true;
			break;
		}
	}

	return retVal;
}


void Counter::unregisterCallback(ICB_Counter* callback){

	for (uint8_t i = 0; i < mCallbackArraySize; i++) {

		if (mCallbackArray[i] != callback) {
			continue;
		}
		else {
			mCallbackArray[i] = nullptr;
		}
	}
}
