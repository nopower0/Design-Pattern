#include <mutex>
using namespace std;
#include "MessageQueue.h"

MessageQueue MessageQueue::Queue;

MessageQueue::MessageQueue(){}

void MessageQueue::Enqueue(shared_ptr<IMessage> message)
{
	m_lock.lock();
	m_queue.push(message);
	m_lock.unlock();
}

shared_ptr<IMessage> MessageQueue::Dequeue()
{
	m_lock.lock();
	shared_ptr<IMessage> message = m_queue.front();
	m_queue.pop();
	m_lock.unlock();
	return message;
}

shared_ptr<IMessage> MessageQueue::Peek()
{
	return m_queue.front();
}

bool MessageQueue::Empty()
{
	return m_queue.empty();
}