#ifndef QUEUEASARRAY_H
#define QUEUEASARRAY_H

#include <iostream>
using namespace std;

const int MAX_SIZE = 50;

class QueueAsArray
{
public:
	// Declaration of oveloaded assignment operator
	QueueAsArray& operator=(const QueueAsArray& rightSide);

	// Declaration default constructor
	QueueAsArray();
	
	// Declaration overloaded constructor
	QueueAsArray(int capacity);
	
	// Declaration function isEmpty
	bool isEmpty() const;

	// Declaration function isFull
	bool isFull() const;

	// Declaration function front
	int front() const;

	// Declaration function back
	int back() const;

	// Declaration function enqueue
	void enqueue(int value);

	// Declaration function dequeue
	void dequeue();

	// Declaration function size
	int size() const;

	// Declaration function clear
	void clear();

	// Declaration destructor
	~QueueAsArray();

private:

	// Do NOT add any additional member variables
    int maxQueueSize;
    int queueFront;
    int queueBack;
    int *queueArray;  	//pointer to the array that holds 
     					//the queue elements 
};

#endif
