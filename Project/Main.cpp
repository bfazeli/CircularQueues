#include "QueueAsArray.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	QueueAsArray intQueue (10);
	
	cout << "Insert 4 and 5...";
	intQueue.enqueue(4);
	intQueue.enqueue(5);
	cout << "\nFront of the queue: " << intQueue.front();
	cout << "\nBack of the queue: " << intQueue.back();
	cout << "\nNumber of items in the queue: " << intQueue.size();
	cout << endl;

	cout << "\nRemove all elements...";
	intQueue.clear();	
	cout << "\nNumber of items in the queue: " << intQueue.size();
	cout << endl;

	cout << "\nInsert 9, 7, 3, 2...";
	intQueue.enqueue(9);
	intQueue.enqueue(7);
	intQueue.enqueue(3);
	intQueue.enqueue(2);
	cout << "\nFront of the queue: " << intQueue.front();
	cout << "\nBack of the queue: " << intQueue.back();
	cout << "\nNumber of items in the queue: " << intQueue.size();
	cout << endl;
	cout << "\nPrint out queue elements: ";
	while(!intQueue.isEmpty())
	{
		cout << intQueue.front() << " ";
		intQueue.dequeue();		
	}	
	cout << "\nQueue is now empty...";
	cout << endl;

	cout << "\nInsert 1 through 10...";
	int element = 1;
	while (!intQueue.isFull())
		intQueue.enqueue(element++);

	cout << "\nNow that queue is full, remove half of the elements...";
	int limit = 5;
	for (int i = 0; i < limit; ++i)
		intQueue.dequeue();
	cout << "\nFront of the queue: " << intQueue.front();
	cout << "\nBack of the queue: " << intQueue.back();
	cout << "\nNumber of items in the queue: " << intQueue.size();
	cout << endl;

	cout << "\nStart pushing into the queue again...";
	// insert another three elements
	limit = 3;
	for (int i = 1; i < limit; ++i)
		intQueue.enqueue(i * 10);
	cout << "\nFront of the queue: " << intQueue.front();
	cout << "\nBack of the queue: " << intQueue.back();
	cout << "\nNumber of items in the queue: " << intQueue.size();
	cout << endl;
	cout << endl;
	system("Pause");
	return 0;
}
