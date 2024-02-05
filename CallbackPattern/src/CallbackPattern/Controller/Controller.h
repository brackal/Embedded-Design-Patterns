///////////////////////////////////////////////////////////
//  Controller.h
//  Implementation of the Class Controller
//  Created on:      04-Feb-2024 17:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_38B4D516_E5CF_43a3_9236_3C8ECD5F5373__INCLUDED_)
#define EA_38B4D516_E5CF_43a3_9236_3C8ECD5F5373__INCLUDED_

#include "ICB_Counter.h"
#include "I_Counter.h"

class Controller : public ICB_Counter
{

public:
	Controller();
	virtual ~Controller();
	void notify();
	void setCounter(I_Counter* counter);

private:
	I_Counter* mCounter;

};
#endif // !defined(EA_38B4D516_E5CF_43a3_9236_3C8ECD5F5373__INCLUDED_)
