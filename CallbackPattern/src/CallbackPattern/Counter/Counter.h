///////////////////////////////////////////////////////////
//  Counter.h
//  Implementation of the Class Counter
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_DB6A4B20_03B7_4436_B7D0_1E6618776B05__INCLUDED_)
#define EA_DB6A4B20_03B7_4436_B7D0_1E6618776B05__INCLUDED_

#include<array>

#include "ICB_Counter.h"
#include "I_Counter.h"

class Counter : public I_Counter
{

public:
	Counter();
	virtual ~Counter();
	void incrementCounter();
	virtual bool registerCallback(ICB_Counter* callback) override;
	virtual void unregisterCallback(ICB_Counter* callback) override;

private:
	int mCounter;
	static const int mCallbackArraySize = 10;
	std::array<ICB_Counter*, mCallbackArraySize> mCallbackArray;

};
#endif // !defined(EA_DB6A4B20_03B7_4436_B7D0_1E6618776B05__INCLUDED_)
