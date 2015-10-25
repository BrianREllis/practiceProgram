#pragma once
#include <iostream>
#include "Functions.h"

//Solutions to the variable exercises

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
			int a = 0;
			int b = 0;
			int tempInt = 0;

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
			int i = 0;
			float f = 0;
			char ch = 'a';
			std::cin >> i >> ch >> f;
			std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
			break;
		case 6:
			int a, b, c, d, e;
			std::cout << "please Input 5 Numbers:" << std::endl;
			std::cin >> a >> b >> c >> d >> e;

			std::cout << (a + b + c + d + e) / 5 << std::endl;
			break;
		case 7:
			char a, b;
			char median;
			std::cout << "Input two letters" << std::endl;
			std::cin >> a >> b;
			
			if (a >= 91)
			{
				a -= 32;
			}
			if (b >= 91)
			{
				b -= 32;
			}

			if (b > a)
			{
				std::cout << (b - a) / 2 << std::endl;
			}
			else 
			{
				std::cout << (a - b) / 2 << std::endl;
			}
			break;
		default:
		break;
	}
}
