///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      04-Feb-2024 17:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_324E22C1_4933_4664_B0AD_FD296DAE1237__INCLUDED_)
#define EA_324E22C1_4933_4664_B0AD_FD296DAE1237__INCLUDED_

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
	Counter mCounter;

};
#endif // !defined(EA_324E22C1_4933_4664_B0AD_FD296DAE1237__INCLUDED_)
