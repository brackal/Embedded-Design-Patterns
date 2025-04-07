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


/**
 * @brief Increments the counter and notifies all registered callbacks.
 * 
 * This method iterates through the array of registered callbacks. For each
 * non-null callback, it increments the counter and invokes the `notify` 
 * method of the callback.
 * 
 * @note The size of the callback array is determined by `mCallbackArraySize`.
 *       Ensure that the array and its size are properly initialized before
 *       calling this method to avoid undefined behavior.
 */
void Counter::incrementCounter(){
	
	for (uint8_t i = 0; i < mCallbackArraySize; i++){
			
		if (mCallbackArray[i] != nullptr) {
			mCounter++;
			mCallbackArray[i]->notify();
		}
	}
}


/**
 * @brief Registers a callback object to the Counter.
 * 
 * This function attempts to register a callback object by storing it in the
 * internal callback array. It iterates through the array to find the first
 * available (nullptr) slot and assigns the provided callback to that slot.
 * 
 * @param callback Pointer to the callback object implementing the ICB_Counter interface.
 * @return true If the callback was successfully registered.
 * @return false If the callback array is full and the registration failed.
 */
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


/**
 * @brief Unregisters a callback from the Counter.
 * 
 * This function iterates through the callback array and removes the specified
 * callback by setting its corresponding entry to nullptr. If the callback is
 * not found in the array, no changes are made.
 * 
 * @param callback Pointer to the callback object to be unregistered.
 */
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
