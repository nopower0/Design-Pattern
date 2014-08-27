#ifndef __STATEMAHINE_H__
#define __STATEMAHINE_H__

#include <memory>
using namespace std;

class IATMState;

class StateMachine
{
public:
	StateMachine();

	void SetCurrentState(shared_ptr<IATMState> state);

	void Run();
private:
	shared_ptr<IATMState> m_current;
};

#endif
