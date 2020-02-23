#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	while (v1 != v2) //!= means it will loop as long as v1 does not equal v2.
	{
		if (v1 > v2 + 1) //+1 is so it doesn't print v1 or v2, just the range.
		{
			--v1;
			std::cout << v1 << std::endl;
		}
		else if (v1 + 1 < v2)
		{
			++v1;
			std::cout << v1 << std::endl;
		}
	}
}
