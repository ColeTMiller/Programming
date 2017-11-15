/******************************
   Name
   Date
   File Name template.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#include "myVector.h"

// Global variables


// Function declarations

int main()
{
	MyVector<int> intVec; 
	using size_type = MyVector<int>::size_type; 
	
	for (size_type i = 0; i < 100; i++)
		intVec.add(i); 

	for (size_type = 0; i < intVec.getSize(); i++)
	{
		cout << intVec.at(i) << " "; 
		if (i % 10 == 0) cout << endl; 

	}
	
	cout << endl
		MyVector<char> charVec;
	try
	{
		cout << charVec[10] << endl;
	}
	catch (char* e)
	{
		cout << e << endl;
	}

	cout << endl;
	MyVector<int> intVec2;
	for (size_type i = 0; i < 10; i++)
	{
		intVec2.add(i * 2); 
	}
	cout << endl; 
	MyVector<int> intVecResult = intVec + intVec2; 

	for (size_type i = 0; i < intVecResult.getSize(); i++)
	{
		cout << intVecResult.at(i) << " "; 
		if (i % 10 == 0) cout << endl; 

	}
	cout << endl;
	cout << "Try out the iterator" << endl;
	int count = 0;
	for (< yVector < int> ::iterator it = intVec.begin();
		it != intVec.end(); it++); 
	{
		cout << *it << " ";
		if (cout++ % 10 == 0) cout << endl; 
	}

	cout << endl;
	cout << "Try out range-based for loop" << endl;
	cout = 0;
	for (auto e : intVec)
	{
		cout << e << " ";
		if (count++ % 10 == 0) cout << endl; 
	}

	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	/* 
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    return 0;
}
