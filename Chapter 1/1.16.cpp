#include <iostream>

int main()
{
	int sum = 0, val = 0, x = 0, y = 0;
	std::cout << "Please enter numbers to be summed: " << std::endl;
	while (std::cin >> val) {
		if (x == 0) { //Prints "The sum of " on the first iteration of the while statement
			std::cout << "The sum of ";
			++x;
		}
		sum += val;
		std::cout << val << ", ";
		y = val; //val doesn't hold after the while, so it's stored in y to be used in line 16
	}
	std::cout << "\b" << "\b" << "\b" << "and " << y << " is " << sum << "." << std::endl; //"/b" backspaces cmd
}
