#include <iostream>
#include <string>
using namespace std;
#include "MessageQueue.h"
#include "IMessage.h"

class PrintMessage : public IMessage
{
public:
	PrintMessage(string message)
	{
		m_message = message;
	}

	void Do()
	{
		cout << m_message << endl;
	}
private:
	string m_message;
};

int main()
{
	cout << "hello" << endl;
	for (int i = 0; i < 5; ++i)
	{
		shared_ptr<IMessage> message(new PrintMessage(to_string(i)));
		MessageQueue::Queue.Enqueue(message);
	}

	int counter = 0;
	while (!MessageQueue::Queue.Empty())
	{
		MessageQueue::Queue.Dequeue()->Do();
	}
}
