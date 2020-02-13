#include <iostream>

int main()
{
	{
		int sum = 0;
		for (int val = 50; val <= 100; ++val)
			sum += val;
		std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	}
}

//

#include <iostream>

int main()
{
	{
		for (int val = 10; val >= 0; --val)
			std::cout << val << std::endl;
	}
}

//

#include <iostream>

int main()
{
		std::cout << "Please enter two numbers:" << std::endl;
		int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
		std::cin >> v1 >> v2;
		for (; v1 > v2; --v1) {
			1 == v3 ? v1 + 0 : --v1; //If 1 equals v3 add 0 to v1, otherwise subtract 1 from v1.
			std::cout << v1 << std::endl;
			v3 != 1 ? v3 = 1 : v3 + 0; //If v3 doesn't equal 1, add 1 to v3. Otherwise add 0 to v3.
		}
		for (; v1 < v2; ++v1) {
			1 == v4 ? v1 + 0 : ++v1; //If 1 equals v4 add 0 to v1, otherwise add 1 to v1.
			std::cout << v1 << std::endl;
			v4 != 1 ? v4 = 1 : v4 + 0; //If v4 doesn't equal 1, add 1 to v4. Otherwise ass 0 to v4.
		}
}

//Lines 35, 37, 40, and 42 are there to make it so it only prints the range between v1 and v2, but dosen't print v1 or v2.
//The lines are so it either subtracts or adds to v1 on the first pass, then does nothing on subsequent runs.
//v3 and v4 are being used as markers as to weather or not the for statement has been ran or not.
//Probally a much better way to do this, and probally a way that would actually be feasible with the material taught so far.
