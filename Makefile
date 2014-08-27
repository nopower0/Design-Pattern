all: singleton_exec

singleton_exec: Singleton/main.cpp \
	            Singleton/MessageQueue.cpp \
	            Singleton/MessageQueue.h \
	            Singleton/IMessage.h
	@g++ Singleton/main.cpp Singleton/MessageQueue.cpp -o singleton_exec

statemachine_exec: StateMachine/CardInsertedState.cpp \
	          StateMachine/CardInsertedState.h \
	          StateMachine/StartState.cpp \
	          StateMachine/StartState.h \
	          StateMachine/StateMachine.cpp \
	          StateMachine/StateMachine.h \
	          StateMachine/IATMState.cpp \
	          StateMachine/IATMState.h \
	          StateMachine/main.cpp
	@g++ StateMachine/CardInsertedState.cpp \
	     StateMachine/StartState.cpp \
	     StateMachine/StateMachine.cpp \
	     StateMachine/IATMState.cpp \
	     StateMachine/main.cpp \
	     -o statemachine_exec

clean:
	@$(RM) *_exec
	