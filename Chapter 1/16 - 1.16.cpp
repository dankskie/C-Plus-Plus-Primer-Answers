#include <iostream>

int main()
{
	int sum = 0, val = 0, x = 0, y = 0, z = 0;
	std::cout << "Please enter numbers to be summed: " << std::endl;
	while (std::cin >> val) {
		if (x == 0) { //Runs only if it's the first iteration of the while loop
			std::cout << "The sum of ";
			++x; //x is used to see if it's the first iteration the of the while loop or not
		}
		sum += val;
		std::cout << val << ", ";
		y = val; //val isn't stored after the while is done, so it's stored in y instead
		++z; //z is used to see how many times the while loop has executed
	}
	if (z > 1) { //If the while loop has executed more than once (user typed more than one numbers)
		std::cout << "\b" << "\b" << "\b" << "and " << y << " is " << sum << "." << std::endl;
	}
	else if (z == 1) { //If the while loop has executed once (user typed one number)
		std::cout << "\b" << "\b" << " and 0 is 0" << std::endl;
	}
	else { //If the while loop has not executed (user typed no integers)
		std::cout << "The sum of 0 and 0 is 0." << std::endl;
	}
}
