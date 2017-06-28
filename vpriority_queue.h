// File: vpriority_queue.h
// Started: April 14th, 2015

// Implementation was achieved by:
// 1. adding #include "sequence1.cpp" at the bottom of the header file, above the #endif
// 2. Once the sequence1.cpp was modified for template use, I removed it from the current project
// 3. Writing the source.cpp file to use template sequences and then running as usual.
// I used www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp as my source for keeping the implementation separate
// Further note as of: April 16th, 2015
// ANY attempts to separate header and implement files REQUIRE #ifndef AND #define in the header file.  Only then will above tactics work.

#ifndef V_PRIORITY_QUEUE_H
#define V_PRIORITY_QUEUE_H

#include <vector>

using namespace std;

template<typename T>
class vpriority_queue
{
public:
	// Constructor
	vpriority_queue();

	// Member Functions
	void push(const T&);
	void pop();
	T& top();
	const T& top() const;
	bool empty() const;
	int size() const;

	// Overloaded/Friend

private:
	// vector that implements the priority queue
	vector<T> pqVector;
	int maxIndex;
	bool recomputeMaxIndex;

	// Private Member Functions
	int findMaxIndex() const;	

};

#include "vpriority_queue.cpp"
#endif