#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item value1, value2;
	while (std::cin >> value1)
	{
		value2 += value1;
	}
	std::cout << value2 << std::endl;
}
