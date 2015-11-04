#pragma once
#include <iostream>
#include "Variables.h"

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

void testVariable()
{
	switch (isValidNumber(1, 7))
	{
	case 1:
		std::cout << 2 / 3 + 3 / 5 << std::endl;
		std::cout << 2 % 3 + 3 % 5 << std::endl;
		std::cout << 23 % 15 % -2 << std::endl;
		std::cout << 25 * 1 / 2 << std::endl;
		std::cout << 25 * 1.0 / 2 << std::endl;
		std::cout << 25 * (1 / 2) << std::endl;
		std::cout << 235 / 8.0 + 7 << std::endl;
		std::cout << 235 / 8 + 7 << std::endl;
		std::cout << ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2 << std::endl;
		break;
	case 2:
		std::cout << "avgHeight\nupperIncome\nlowerIncome\ncostAllSteamGames" << std::endl;
		break;
	case 3:
		std::cout << "int 121" << std::endl;
		std::cout << "float 9.4" << std::endl;
		std::cout << "char r" << std::endl;
		std::cout << "int 100000" << std::endl;
		std::cout << "bool false" << std::endl;
		break;
	case 4:
		std::cout << "Input a:" << std::endl;
		std::cin >> a;
		std::cout << "Input b:" << std::endl;
		std::cin >> b;
		std::cout << a << ", " << b << std::endl;

		tempInt = a;
		a = b;
		b = tempInt;

		std::cout << a << ", " << b << std::endl;
		break;
	case 5:
		std::cin >> i >> ch >> f;
		std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
		break;
	case 6:
		std::cout << "please Input 5 Numbers:" << std::endl;
		std::cin >> a >> b >> c >> d >> e;

		std::cout << (a + b + c + d + e) / 5 << std::endl;
		break;
	case 7:
		std::cout << "Input two letters" << std::endl;
		std::cin >> a >> b;

		if (Ca >= 91)
		{
			Ca -= 32;
		}
		if (Cb >= 91)
		{
			Cb -= 32;
		}

		if (Cb > Ca)
		{
			std::cout << (Cb - Ca) / 2 << std::endl;
		}
		else
		{
			std::cout << (Ca - Cb) / 2 << std::endl;
		}
		break;
	default:
		break;
	}
}

void conditionalStatements()
{
	switch (isValidNumber(1,9))
	{
		case 1:
			std::cin >> y;
			if (y == 0)
			{
				x = 100;
			}
			std::cout << x << std::endl << y << std::endl;
			break;
		case 2:
			std::cout << "Please Input X:";
			std::cin >> x;
			std::cout << "\nPlease Input Y:";
			std::cin >> y;
			if (x > y)
			{
				std::cout << x << " is larger" << std::endl;
			}
			if (x == y)
			{
				std::cout << "They are equal!" << std::endl;
			}
			else
			{
				std::cout << y << " is larger" << std::endl;
			}
			break;
		case 3:
			std::cout << "input 5 numbers!\n";
			std::cin >> a >> b >> c >> d >> e;
			if (a + b + c + d + e == 0)
			{
				std::cout << a << b << c << d << e << std::endl;
			}
			if (a + b + c + d + e > 0)
			{
				//Maybe MAYBE actually do this one
			}
			break;
		case 4:
			std::cin >> x;
			switch (x)
			{
			case 1:
				std::cout << "1";
				break;
			case 2:
			case 3:
				std::cout << "2 or 3";
				break;
			case 4:
				std::cout << "4";
				break;
			default:
				std::cout << "INVALID";
				break;
			}
			break;
		case 5:
			std::cin >> x;
			y = (x == 0) ? 0 : 10 / x;
			break;
		case 6:
			std::cout << "\nInput two numbers: ";
			std::cin >> x >> y;
			std::cout << "\nNow input the operator you wish to use: ";
			std::cin >> ch;
			switch (ch)
			{
			case '+':
				std::cout << x + y;
				break;
			case '-':
				std::cout << x - y;
				break;
			case '/':
				std::cout << x / y;
				break;
			case '*':
				std::cout << x * y;
				break;
			case '%':
				std::cout << x % y;
				break;
			default:
				break;
			}
			break;
		case 7:
			std::cin >> x;
			switch (x)
			{
			case 1:
				std::cout << "January 31" << std::endl;
				break;
			case 2:
				std::cout << "February 28/29" << std::endl;
				break;
			case 3:
				std::cout << "March 31" << std::endl;
				break;
			case 4:
				std::cout << "April 30" << std::endl;
				break;
			case 5:
				std::cout << "May 31" << std::endl;
				break;
			case 6:
				std::cout << "June 30" << std::endl;
				break;
			case 7:
				std::cout << "July 31" << std::endl;
				break;
			case 8:
				std::cout << "August 31" << std::endl;
				break;
			case 9:
				std::cout << "September 30" << std::endl;
				break;
			case 10:
				std::cout << "October 31" << std::endl;
				break;
			case 11:
				std::cout << "November 30" << std::endl;
				break;
			case 12:
				std::cout << "December 31" << std::endl;
				break;
			default:
				std::cout << "You clearly don't even know how many months there are..." << std::endl;
				break;
			}
			break;
		case 8:

			break;
		default:
			break;
	}
}