#include <iostream>
using namespace std;
#include "LinkedQueue.h"
int main()
{
	LinkedQueue q(3);
	int ch = 0, x = 0;
	while (1)
	{
		cout << " ---------------------- ";
		cout << "\n 1 - Enqueue";
		cout << "\n 2 - Dequeue";
		cout << "\n 3 - isFull";
		cout << "\n 4 - isEmpty";
		cout << "\n 5 - Status";
		cout << "\n 6 - Exit \n";
		cout << "\n Enter your choice(1-6):> ";
		cin >> ch;

		switch (ch) {
		case 1: cout << "\nEnter data: ";
			cin >> x;
			if (q.enqueue(x))
			{
				cout << "Added successfully\n";
			}
			else
			{
				cout << "\n*********Queue is full*********\n";
			}
			break;

		case 2:
			q.deQueue(x);
			cout << "Dequeue value is " << x << endl;
			break;

		case 3:
			if (q.isFull())
				cout << "Queue is full\n";
			else
				cout << "Queue is not full \n";
			break;
		case 4:
			if (q.isEmpty())
				cout << "Queue is Empty\n";
			else
				cout << "Queue is not Empty \n";
			break;
		case 5:
			q.status();
			break;
		case 6:
			exit(0);
		default: cout << "\nWrong choice!!";
		}
	}

	return 0;
}