///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


/**
 * @brief Executes the main loop of the Client, allowing user interaction to manipulate a counter.
 * 
 * This function sets up the controllers with a shared counter and enters an infinite loop
 * to process user input. The following commands are supported:
 * 
 * - Press 'm' or 'M': Increments the counter.
 * - Press 'n' or 'N': Unregisters the callback for mController from the counter.
 * - Press 'f' or 'F': Registers the callback for mController to the counter.
 * 
 * The function continuously listens for user input and performs the corresponding action.
 * It is designed to run indefinitely until terminated externally.
 */
void Client::run(){

	mController.setCounter(&mCounter);
	mController2.setCounter(&mCounter);

	std::cout << "Press 'm' or 'M' to increment a counter\n";
	while (1)
	{
		switch (getchar())
		{
		case 'm': case 'M':
			mCounter.incrementCounter();
			break;

		case 'n': case 'N':
			mCounter.unregisterCallback(&mController);
			break;

		case 'f': case 'F':
			mCounter.registerCallback(&mController);
			break;

		default:
			// nothing to do
			break;
		}
	}
}