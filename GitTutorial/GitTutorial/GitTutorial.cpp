#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
<<<<<<< HEAD
	if (number == target) {
		std::cout << "Correct !!";
		target = -1;
		return true;
	}
	else if (number > target) std::cout << "Smaller" << std::endl;
	else if (number < target) std::cout << "Bigger" << std::endl;
return false;
>>>>>>> 6abc4f4e1ded69f238e6b4ca44a07f79de3bea48
}
int main(array<System::String ^> ^args)
{
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}