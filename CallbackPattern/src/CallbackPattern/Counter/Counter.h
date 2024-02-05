///////////////////////////////////////////////////////////
//  Counter.h
//  Implementation of the Class Counter
//  Created on:      04-Feb-2024 17:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_204BB82A_6779_44cd_A4FE_46C62A6EFDAF__INCLUDED_)
#define EA_204BB82A_6779_44cd_A4FE_46C62A6EFDAF__INCLUDED_

#include "ICB_Counter.h"
#include "I_Counter.h"

class Counter : public I_Counter
{

public:
	Counter();
	virtual ~Counter();
	void incrementCounter();
	void registerCallback(ICB_Counter* callback);

private:
	int mCounter;
	ICB_Counter* mCallback;

};
#endif // !defined(EA_204BB82A_6779_44cd_A4FE_46C62A6EFDAF__INCLUDED_)
