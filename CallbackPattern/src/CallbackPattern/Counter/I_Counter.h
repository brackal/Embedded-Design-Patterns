///////////////////////////////////////////////////////////
//  I_Counter.h
//  Implementation of the Interface I_Counter
//  Created on:      04-Feb-2024 17:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_3CA74383_438F_4d59_812A_9168C9F8E4F3__INCLUDED_)
#define EA_3CA74383_438F_4d59_812A_9168C9F8E4F3__INCLUDED_
#include "ICB_Counter.h"

class I_Counter
{

public:
	I_Counter(){

	}
	virtual ~I_Counter(){

	}
	virtual void registerCallback(ICB_Counter* callback) =0;

};
#endif // !defined(EA_3CA74383_438F_4d59_812A_9168C9F8E4F3__INCLUDED_)
