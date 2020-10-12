#ifndef LINKED_QUEUE
#define LINKED_QUEUE
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node(int data, Node* next = NULL)
	{
		this->data = data;
		this->next = next;
	}
};
class LinkedQueue
{
	Node* back;
	int size;
	int count = 0;
public:

	LinkedQueue(int size);
	bool enqueue(int val);
	bool deQueue(int& val);
	bool isFull();
	bool isEmpty();
	void status();
	~LinkedQueue();
};
#endif // ! LINK_LIST_H
