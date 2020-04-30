#include <iostream>
#include "Sales_item.h"

using namespace std;

// Uses much more code than necessary to allow non-successive entries of isbn codes

int main()
{
	Sales_item currItem, valItem, isbn1, isbn2, isbn3, isbn4, isbn5; //isbn1-5 used for checking if values match
	if (cin >> currItem)
	{
		int isbnVar1 = 0, isbnVar2 = 0, isbnVar3 = 0, isbnVar4 = 0, isbnVar5 = 0;
		isbn1 = currItem; //makes isbn1 equal the first read input
		isbnVar1 += 1; //adds one to isbnVar1 (used to store how many times each unique isbn occurs)
		while (cin >> valItem)
		{
            //checks if the isbn being currently read matches any of the stored ones. If not, it picks a free variable
            //and assigns itself to it. I'm sure there's a way to do this without making a unique variable for each unique entry,
            //but for now this way seemed to be the easiest without skipping ahead of the book.
			if (valItem != isbn1 && valItem != isbn2 && valItem != isbn3 && valItem != isbn4 && valItem != isbn5)
			{
				if (isbnVar2 == 0)
				{
					isbn2 = valItem;
				}
				else if (isbnVar3 == 0)
				{
					isbn3 = valItem;
				}
				else if (isbnVar4 == 0)
				{
					isbn4 = valItem;
				}
				else if (isbnVar5 == 0)
				{
					isbn5 = valItem;
				}
				else
				{
					cout << "This program is limited to 5 unique isbn codes." << endl;
					return 0;
				}
			}
			if (valItem == isbn1) //just adding one to isbnVar if the current item and a stored item matches
			{
				isbnVar1 += 1;
			}
			if (valItem == isbn2)
			{
				isbnVar2 += 1;
			}
			if (valItem == isbn3)
			{
				isbnVar3 += 1;
			}
			if (valItem == isbn4)
			{
				isbnVar4 += 1;
			}
			if (valItem == isbn5)
			{
				isbnVar5 += 1;
			}
		}
		if (isbnVar1 == 1)
		{
			cout << isbn1 << " occurs " << isbnVar1 << " time." << endl;
		}
		else
		{
			cout << isbn1 << " occurs " << isbnVar1 << " times." << endl;
		}
		if (isbnVar2 != 0)
		{
			if (isbnVar2 == 1)
			{
				cout << isbn2 << " occurs " << isbnVar2 << " time." << endl;
			}
			else
			{
				cout << isbn2 << " occurs " << isbnVar2 << " times." << endl;
			}
		}
		if (isbnVar3 != 0)
		{
			if (isbnVar3 == 1)
			{
				cout << isbn3 << " occurs " << isbnVar3 << " time." << endl;
			}
			else
			{
				cout << isbn3 << " occurs " << isbnVar3 << " times." << endl;
			}
		}
		if (isbnVar4 != 0)
		{
			if (isbnVar4 == 1)
			{
				cout << isbn4 << " occurs " << isbnVar4 << " time." << endl;
			}
			else
			{
				cout << isbn4 << " occurs " << isbnVar4 << " times." << endl;
			}
		}
		if (isbnVar5 != 0)
		{
			if (isbnVar5 == 1)
			{
				cout << isbn5 << " occurs " << isbnVar5 << " time." << endl;
			}
			else
			{
				cout << isbn5 << " occurs " << isbnVar5 << " times." << endl;
			}
		}
	}
	return 0;
}
