/*
Module 3 Assignment

Diana Guerrero
Professor Zhao
BCS 370
9/22/20

Partner: Patrick Adams
*/

#include <iostream>

class CuteRobot
{
private:

	// X-Axis Position
	int position;

public:

	// 1. Initialize Default Constructor
	CuteRobot(int position = 0)
	{
		this-> position = position;
	}

	/* Previous Work (this can possibly work but the work above is shorter and more efficient code)
	// Default Constructor
	CuteRobot() 
    {
       position = 0;
    }
	
	//Constructor Argument (passing value to position constructor)
	CuteRobot(int position)
	{
		this->position = position;
	}
	*/

	// 2. Get Position (Getter)
	int getPosition()
	{
		return position;
	}

	// 3. Function Chaining (positive number = forward motion & negative number = backward motion)
	CuteRobot& move(int steps)
	{
		this-> position = position + steps;
		return *this;
	}

	// 4. Pointer Parameter (calculates steps value when the CuteRobot object meets this object & and use move() function to bring CuteRobot object to this object position)
	void meet(CuteRobot * CR)
	{
		int steps = (this -> position - CR-> position);
		std::cout << "CuteRobot Moved This Many Steps: " << steps << "\n" ;
		move(steps);
	}
};