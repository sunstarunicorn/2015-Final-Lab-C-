// File: vpriority_queue.cpp
// Started: April 14th, 2015

#include "vpriority_queue.h"
#include <vector>

using namespace std;

// Default constructor, create an empty priority queue
template<typename T>
vpriority_queue<T>::vpriority_queue()
{
	maxIndex = 0;
	recomputeMaxIndex = false;
}


// insert item into the priority queue.
// Postcondition:   the priority queue has one more element
template<typename T>
void vpriority_queue<T>::push(const T& item)
{
	pqVector.push_back(item);
	recomputeMaxIndex = true;
}

// remove the highest priority (max) item from the
// priority queue.
// Precondition:   The priority queue is not empty.  If it is
// empty, the function throws the underflowError exception
template<typename T>
void vpriority_queue<T>::pop()
{	
	if (!empty())
	{
	
		if (recomputeMaxIndex)
		{
			maxIndex = findMaxIndex();
		}

		pqVector[maxIndex] = pqVector.back();

		pqVector.pop_back();

		recomputeMaxIndex = true;
	}
	else
	{
		throw domain_error("Queue is Empty!");
	}
}

// return the highest priority (max) item in the 
// priority queue
// Precondition:   The priority queue is not empty.  If it is
// empty, the function throws the underflowError exception
template<typename T>
T& vpriority_queue<T>::top()
{
	if (!empty())
	{
	
		if (recomputeMaxIndex)
		{
			maxIndex = findMaxIndex();
		}

		return pqVector[maxIndex];
	}
	else
	{
		throw domain_error("Queue is Empty!");
	}
}

// constant version
template<typename T>
const T& vpriority_queue<T>::top() const
{
	if (!empty())
	{
	
		if (recomputeMaxIndex)
		{
			maxIndex = findMaxIndex();
		}

		return pqVector[maxIndex];
	}
	else
	{
		throw domain_error("Queue is Empty!");
	}
}

// is the priority queue empty?
template<typename T>
bool vpriority_queue<T>::empty() const
{
	if (pqVector.size() > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template<typename T>
int vpriority_queue<T>::size() const
{
	return pqVector.size();
}

// find the index of the max value in pqVector
template<typename T>
int vpriority_queue<T>::findMaxIndex() const
{	
	int max = 0;
	
	for (int x = 0; x < pqVector.size(); x++)
	{
		if (pqVector[max] < pqVector[x])
		{
			max = x;
		}
	}

	return max;
}