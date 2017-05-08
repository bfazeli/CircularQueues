#include "QueueAsArray.h"

// Definition default constructor
QueueAsArray::QueueAsArray()
{
	queueArray = new int[MAX_SIZE]();
	maxQueueSize = MAX_SIZE;
	queueFront = 0;
	queueBack = 0;
}

// Definition overloaded constructor
QueueAsArray::QueueAsArray(int capacity)
{
	maxQueueSize = capacity;
	queueArray = new int[maxQueueSize]();
	queueFront = 0;
	queueBack = 0;
}


// Definition function isEmpty


// Definition function isFull


// Definition function front


// Definition function back


// Definition function enqueue


// Definition function dequeue


// Declaration function size


// Definition function clear


// Definition destructor


