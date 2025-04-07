///////////////////////////////////////////////////////////
//  I_Counter.h
//  Implementation of the Interface I_Counter
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_B5DC548E_1E06_4922_9773_37529554F457__INCLUDED_)
#define EA_B5DC548E_1E06_4922_9773_37529554F457__INCLUDED_

#include "ICB_Counter.h"

/**
 * @class I_Counter
 * @brief Interface for a counter that supports callback registration and unregistration.
 *
 * This interface defines the basic structure for a counter that allows clients
 * to register and unregister callback objects. It is intended to be implemented
 * by concrete counter classes.
 *
 * @note The class is abstract and cannot be instantiated directly.
 */
class I_Counter
{

public:
	I_Counter(){

	}
	virtual ~I_Counter(){

	}
	virtual bool registerCallback(ICB_Counter* callback) =0;
	virtual void unregisterCallback(ICB_Counter* callback) =0;

};
#endif // !defined(EA_B5DC548E_1E06_4922_9773_37529554F457__INCLUDED_)
