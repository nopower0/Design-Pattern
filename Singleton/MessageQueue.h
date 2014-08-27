#ifndef __MESSAGEQUEEU_H__
#define __MESSAGEQUEEU_H__
#include <queue>
#include <mutex>
using namespace std;
#include "IMessage.h"

class MessageQueue
{
public:
	static MessageQueue Queue;

	void Enqueue(shared_ptr<IMessage> message);

	shared_ptr<IMessage> Dequeue();

	shared_ptr<IMessage> Peek();

	bool Empty();
private:
	MessageQueue();
	queue< shared_ptr<IMessage> > m_queue;
	mutex m_lock;
};
#endif
