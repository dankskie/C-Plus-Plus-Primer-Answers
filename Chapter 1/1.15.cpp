#include <iostream>

int main()
{
	{
		for (int val = 10; val >= 0; --val)
			std::cout << val << std::endl: //The : should be a ; (Syntax error)
	}
}

//

#include <iostream>

int main()
{
	{
		for (int val = "Hello"; val >= 0; --val) //Int is for integers, not strings. (Type error)
			std::cout << val << std::endl;
	}
}

//

#include <iostream>

int main()
{
	{
		for (int val = 10; val >= 0; --val)
			cout << val << endl; //Namespace std needs to be specified. (Declaration error)
	}
}
