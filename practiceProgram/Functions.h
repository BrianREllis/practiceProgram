#pragma once
#include <iostream>

int isValidNumber(int min, int max)
{
	int pInput = 0;
	bool running = true;
	
	while (running)
	{
		std::cout << "Please input a number between " << min << " and " << max << std::endl;
		std::cin >> pInput;
		if (pInput >= min && pInput <= max)
		{
			running = false;
			return pInput;
		}
		else
		{
			std::cout << "Please enter a valid number" << std::endl;
		}
	}
}

