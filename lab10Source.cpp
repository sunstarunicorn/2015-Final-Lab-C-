// Name:	Katelyn Peterson
// File: lab10Source.cpp
//			Priority Queue Class
// Class: CIS 2542 - Spring 2015
// Started: April 14th, 2015

#include <iostream>
#include <vector>
#include "vpriority_queue.h"

using namespace std;

// Function: int main ()
// Parameters:  none - main
// Returns:		zero - main
int main()
{
	// 1. Variables
	int arr[] = {6, 2, 3, 5, 3};
	vpriority_queue<int> pq;
	int size = 5;		// size of array

	// 2. Input
	cout << "Initial array is: "; 
	
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << ", ";
	}
	cout << endl;
	cout << endl;

	// Array into queue	Test of push
	for (int y = 0; y < size; y++)
	{
		pq.push(arr[y]);
	}	

	// 3. Calculation
	// Test of size
	cout << "The current size of the queue is: " << pq.size() << endl;

	// Test of Top and Pop
	cout << "Top of queue is: " << pq.top() << "  " << endl;		// should be 6
	pq.pop();

	cout << "Top of queue is: " << pq.top() << "  " << endl;		// should be 5
	pq.pop();

	cout << endl;
	cout << "Adding to queue." << endl;

	pq.push(10);
	pq.push(1);	

	// 4. Output
	//Test of empty
	cout << endl;
	cout << "Initial Empty Check" << endl;
	cout << endl;

	if (!pq.empty())
	{
		cout << "Queue is not empty" << endl;
	}
	else
	{
		cout << "Queue is empty" << endl;
	}

	cout << endl;
	cout << "Emptying queue!" << endl;
	cout << endl;	

	while (!pq.empty())
	{
		cout << "Top of queue is: " << pq.top() << "  " << endl;
		pq.pop();
	}

	cout << endl;
	cout << "Secondary Empty Check" << endl;
	cout << endl;

	if (!pq.empty())
	{
		cout << "Queue is not empty" << endl;
	}
	else
	{
		cout << "Queue is empty" << endl;
	}

	return EXIT_SUCCESS;
}

//Initial array is: 6, 2, 3, 5, 3,
//
//The current size of the queue is : 5
//Top of queue is : 6
//Top of queue is : 5
//
//Adding to queue.
//
//Initial Empty Check
//
//Queue is not empty
//
//Emptying queue!
//
//Top of queue is : 10
//Top of queue is : 3
//Top of queue is : 3
//Top of queue is : 2
//Top of queue is : 1
//
//Secondary Empty Check
//
//Queue is empty
//Press any key to continue . . .