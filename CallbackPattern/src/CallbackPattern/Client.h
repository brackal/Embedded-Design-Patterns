///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_3B70C02A_4C28_4c03_AE41_6953704E2EA9__INCLUDED_)
#define EA_3B70C02A_4C28_4c03_AE41_6953704E2EA9__INCLUDED_

#include <iostream>

#include "Controller.h"
#include "Counter.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

private:
	Controller mController;
	Controller mController2;
	Counter mCounter;

};
#endif // !defined(EA_3B70C02A_4C28_4c03_AE41_6953704E2EA9__INCLUDED_)
