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