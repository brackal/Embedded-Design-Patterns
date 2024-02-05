///////////////////////////////////////////////////////////
//  Controller.h
//  Implementation of the Class Controller
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_D2D4C4CB_0046_4c4b_BC15_3B4C52B2EF36__INCLUDED_)
#define EA_D2D4C4CB_0046_4c4b_BC15_3B4C52B2EF36__INCLUDED_

#include<iostream>

#include "ICB_Counter.h"
#include "I_Counter.h"

class Controller : public ICB_Counter
{

public:
	Controller();
	virtual ~Controller();
	virtual void notify() override;
	void setCounter(I_Counter* counter);

private:
	I_Counter* mCounter;

};
#endif // !defined(EA_D2D4C4CB_0046_4c4b_BC15_3B4C52B2EF36__INCLUDED_)
