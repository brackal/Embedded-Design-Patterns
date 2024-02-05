///////////////////////////////////////////////////////////
//  Counter.cpp
//  Implementation of the Class Counter
//  Created on:      04-Feb-2024 17:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Counter.h"




Counter::Counter(){

}


Counter::~Counter(){

}


void Counter::incrementCounter(){

}


void Counter::registerCallback(ICB_Counter* callback){

	mCallback = callback;

}