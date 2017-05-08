#ifndef QUEUEASARRAY_H
#define QUEUEASARRAY_H

#include <iostream>
using namespace std;

const int MAX_SIZE = 50;

class QueueAsArray
{
public:
	// Declaration default constructor
	QueueAsArray();
	
	// Declaration overloaded constructor
	QueueAsArray(int capacity);
	
	// Declaration function isEmpty

	// Declaration function isFull


	// Declaration function front


	// Declaration function back


	// Declaration function enqueue


	// Declaration function dequeue


	// Declaration function size


	// Declaration function clear


	// Declaration destructor


private:

	// Do NOT add any additional member variables
    int maxQueueSize;
    int queueFront;
    int queueBack;
    int *queueArray;  	//pointer to the array that holds 
     					//the queue elements 
};

#endif
