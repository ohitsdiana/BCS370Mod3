/*
Module 3 Assignment

Diana Guerrero
Professor Zhao
BCS 370
9/22/20

Partner: Patrick Adams
*/

#include "CuteRobot.cpp"
#include<iostream>

using namespace std;

int main()
{
	// Array of 5 CuteRobot Objects
		CuteRobot * CR_Array;
		CR_Array = new CuteRobot[5];

		CuteRobot CR[5] = 
		{CR_Array[0] = CuteRobot(0), 
		 CR_Array[1] = CuteRobot(1), 
		 CR_Array[2] = CuteRobot(2), 
		 CR_Array[3] = CuteRobot(3), 
		 CR_Array[4] = CuteRobot(4)};

		int *size_ptr;

	// Pointer Arithemtic
	for (int i = 0; i <= 5; i++)
	{
		//cout << size_ptr << endl;
		(CR_Array + i)->meet(CR);
	}

	/*
	These two lines of code:

	delete[] CR_Array;
	return 0;

	created a pop-up error that said "Debug Error! 
	HEAP CORRUPTION DETECTED: after Normal block (#152) at 0x00ED6040. 
	CRT detected that the application wrote to memory after end of heap buffer. 
	When executed my last number goes to -33686019 rather than going back to 0
	*/
}