#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int menu_choice;
	int number;

	cout << "Enter number: ";
	cin >> number;

	cout << "1) Is the number odd or even?\n"
		<< "2) Is the number positive or negative?\n"
		<< "3) What is the square root of the number? \n\n" << endl;

	cout << "Enter a menu choice: " << endl;
	cin >> menu_choice;

	switch (menu_choice)
	{
	case 1:
		if ((number % 2) == 0)
			cout << "Your number is even" << endl;

		else if ((number % 2) == 1)
			cout << "Your number is odd" << endl;

		else
			cout << "Your number is zero" << endl;

		break;

	case 2:
		if (number > 0)
			cout << "Your number is positive" << endl;
		else if (number < 0)
			cout << "Your number is negative" << endl;
		else
			cout << "Your number is zero" << endl;

		break;

	case 3:
		cout << sqrt(number) << endl;

		break;
	}

	return 0;





}