///////////////////////////////////////////////////////////
//  ICB_Counter.h
//  Implementation of the Interface ICB_Counter
//  Created on:      05-Feb-2024 11:22:58
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_03BED477_C04E_488d_A39B_DF5389AEF8AA__INCLUDED_)
#define EA_03BED477_C04E_488d_A39B_DF5389AEF8AA__INCLUDED_

class ICB_Counter
{

public:
	ICB_Counter(){

	}
	virtual ~ICB_Counter(){

	}
	virtual void notify() =0;

};
#endif // !defined(EA_03BED477_C04E_488d_A39B_DF5389AEF8AA__INCLUDED_)
