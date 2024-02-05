///////////////////////////////////////////////////////////
//  ICB_Counter.h
//  Implementation of the Interface ICB_Counter
//  Created on:      04-Feb-2024 17:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_7C858EB4_BD64_4f55_A5D2_B0302F13CA76__INCLUDED_)
#define EA_7C858EB4_BD64_4f55_A5D2_B0302F13CA76__INCLUDED_

class ICB_Counter
{

public:
	ICB_Counter(){

	}
	virtual ~ICB_Counter(){

	}
	virtual void notify() =0;

};
#endif // !defined(EA_7C858EB4_BD64_4f55_A5D2_B0302F13CA76__INCLUDED_)
