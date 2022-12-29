#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>



using std::cin;
using std::cout;
using std::endl;

int main()
{
	char num[25];
	char converted_num[25];
	int base;
	int test;
	int desired_base;
	int baseten = 0;
	int i = 0;
	int j = 0;
	int remainder;

	cout << "Please enter a number: " << endl;
	cin.ignore(cin.rdbuf()->in_avail());
	cin.getline(num, 25);
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());

	cout << "Please enter its base: " << endl;
	cin >> base;

	while (base > 36 || base < 2)
	{
		cout << "Error: Invalid base \n Please enter another:" << endl;
		cin >> base;
	}
	for (int j = (strlen(num) - 1); j >= 0; j--)
	{
		while (num[j] > (base + 48))
		{
			cout << "Error: Invalid base for selected number \nPlease enter a number" << endl;
			cin.ignore(cin.rdbuf()->in_avail());
			cin.getline(num, 25);
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Please enter a base" << endl;
			cin >> base;

		}
	}
	

	cout << "Please enter desired base conversion" << endl;
	cin >> desired_base;

	for (int i = (strlen(num) - 1), x = 0; i >= 0; i--, x++)
	{
		if (num[i] >= '0' && num[i] <= '9')
			baseten += static_cast<int>((num[i] - 48) * pow(base, x));
		else
			baseten += static_cast<int>((num[i] - 55) * pow(base, x));
	}
	
	while (baseten != 0)
	{
		remainder = baseten % desired_base;
		baseten = baseten / desired_base;
		if (remainder >= 0 && remainder <= 9)
			remainder += 48;
		else
			remainder += 55;
		converted_num[i++] = remainder;
	}

	converted_num[i] = '\0';
	_strrev(converted_num);
	cout << "Your converted number to base " << desired_base << " is: " << converted_num << endl;

	return 0;
}
