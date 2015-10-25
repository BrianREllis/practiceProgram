#include <iostream>
#include "Functions.h"
#include "Variables.h"

const int exerciseMin = 1;
const int exerciseMax = 3;

int isValidNumber();

int main()
{
	std::cout << "Which exercise would you like to test?" << std::endl;
	switch (isValidNumber(exerciseMin, exerciseMax))
	{
		case 1:
			testVariable();
			break;
		case 2:
			break;
		case 3: 
			break;
		default:
			break;
	}


	system("pause");
	return 0;
}