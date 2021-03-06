/*
	Fazeli, Bijan
	Lauguico, Marco

	CS A200
	May 8th, 2017

	Lab 10
*/

#include "QueueAsArray.h"

// Definition of overloaded assignment operator
QueueAsArray& QueueAsArray::operator=(const QueueAsArray& rightSide)
{
	if (&rightSide != this)
	{
		if (maxQueueSize != rightSide.maxQueueSize)
		{
			delete[] queueArray;	// Release space
			queueArray = new int[rightSide.maxQueueSize];	//re-create array
			maxQueueSize = rightSide.maxQueueSize;
		}

		queueFront = rightSide.queueFront;
		queueBack = rightSide.queueBack;

		if (queueFront != queueBack)
		{
			do
			{
				queueArray[queueFront] = rightSide.queueArray[queueFront];
				queueFront = (queueFront + 1) % maxQueueSize;
			} while (queueFront != queueBack);

			queueFront = rightSide.queueFront;
		}
	}
	else
		cerr << "Attempted assignment to itself.";
	return *this;
}

// Definition of copy constructor
QueueAsArray::QueueAsArray(const QueueAsArray& otherQueue)
{
	maxQueueSize = otherQueue.maxQueueSize;
	queueArray = new int[maxQueueSize];

	queueFront = otherQueue.queueFront;
	queueBack = otherQueue.queueBack;

	if (queueFront != queueBack)
	{
		do 
		{
			queueArray[queueFront] = otherQueue.queueArray[queueFront];
			queueFront = (queueFront + 1) % maxQueueSize;
		} while (queueFront != queueBack);

		queueFront = otherQueue.queueFront;
	}
}

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
bool QueueAsArray::isEmpty() const
{
	return queueFront == queueBack;
}

// Definition function isFull
bool QueueAsArray::isFull() const
{
	return size() == maxQueueSize - 1;
}

// Definition function front
int QueueAsArray::front() const
{
	if (!isEmpty())
		return queueArray[queueFront];
	cerr << "Queue is empty." << endl;
	return -999;
}

// Definition function back
int QueueAsArray::back() const
{
	if (!isEmpty())
		return queueArray[(queueBack + maxQueueSize - 1) % maxQueueSize];
	cerr << "Queue is empty." << endl;
	return -999;
}

// Definition function enqueue
void QueueAsArray::enqueue(int value)
{
	if (!isFull())
	{
		queueArray[queueBack] = value;
		queueBack = (queueBack + 1) % maxQueueSize;
	}
	else
	{
		cerr << "Cannot add to a full queue." << endl;
	}
}


// Definition function dequeue
void QueueAsArray::dequeue()
{
	if (!isEmpty())
		queueFront = (queueFront + 1) % maxQueueSize;
	else
		cerr << "Cannot remove from an empty queue" << endl;
}

// Declaration function size
unsigned int QueueAsArray::size() const
{
	return (maxQueueSize - queueFront + queueBack) % maxQueueSize;
}

// Definition function clear
void QueueAsArray::clear()
{
	queueBack = queueFront;
}

// Definition destructor
QueueAsArray::~QueueAsArray()
{
	delete[] queueArray;
}

