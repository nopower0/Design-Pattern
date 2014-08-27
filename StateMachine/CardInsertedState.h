#ifndef __CARDINSERTEDSTATE_H__
#define __CARDINSERTEDSTATE_H__

#include <memory>
using namespace std;

#include "IATMState.h"

class CardInsertedState : public IATMState
{
public:
	CardInsertedState(StateMachine*);

	void InsertCard();

	void Withdraw();

	void Save();

	void GetCard();
};
#endif
