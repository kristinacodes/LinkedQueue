#include "LinkedQueue.h"
LinkedQueue::LinkedQueue(int s)
{
	back = NULL;
	size = s;
}
bool LinkedQueue::enqueue(int val)
{
	if (isFull())
	{
		return false;
	}
	Node* temp = new Node(val);
	if (back == 0)
	{
		back = temp;
		back->next = temp;
	}
	else
	{
		temp->next = back->next;
		back->next = temp;
		back = temp;
	}
	count++;
	return true;
}

bool LinkedQueue::deQueue(int& val)
{
	if (back == 0)
		return false;
	Node* curr = back->next;
	val = curr->data;
	if (back->next == curr->next)
		back = 0;
	else
		back->next = curr->next;
	delete curr;
	curr = 0;
	count--;
	return true;
}

bool LinkedQueue::isFull()
{
	if (count < size)
		return false;
	return true;
}

bool LinkedQueue::isEmpty()
{
	if (count == 0)
		return true;
	return false;
}

void LinkedQueue::status()
{
	cout << "Elements in queue are :" << count << endl;
	cout << "Max size is " << size << endl;
}

LinkedQueue::~LinkedQueue()
{
	if (back != 0)
	{
		Node* curr = back->next, * T2 = 0;
		while (curr != back)
		{
			T2 = curr->next;
			delete curr;
			curr = 0;
			curr = T2;
		}
		delete curr;
		curr = 0;
		back = 0;
	}
}