#include <iostream>


int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	while (v1 > v2 + 1) {
		--v1;
		std::cout << v1 << std::endl;
	}
	while (v1 + 1 < v2) {
		++v1;
		std::cout << v1 << std::endl;
	}
}
