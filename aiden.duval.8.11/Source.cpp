#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::left;

int menu_choice;
int number;

int main()
{
	cout << "Enter number: ";
	cin >> number;
	int digit = 1;

	while (menu_choice != 8)
	{
		cout << "\n"
			 << "1) Is the number odd or even?\n"
			 << "2) Is the number positive or negative?\n"
			 << "3) What is the square root of the number? \n" 
		     << "4) Display number of digits? \n" 
			 << "5) Display specified digit? \n"
			 << "6) Display addition table? \n"
			 << "7) Display multiplication table? \n" 
			 << "8) Exit \n\n" << endl;

		cout << "Enter a menu choice: " << endl;
		cin >> menu_choice;
		cout << "\n";

		

		switch (menu_choice)
		{
			case 1:
			{
				if ((number % 2) == 0)
					cout << "Your number is even" << endl;
				
				else if ((number % 2) == 1)
					cout << "Your number is odd" << endl;
				
				else
					cout << "Your number is zero" << endl;
				
				break;
			}
			case 2:
			{
				if (number > 0)
					cout << "Your number is positive" << endl;
				else if (number < 0)
					cout << "Your number is negative" << endl;
				else
					cout << "Your number is zero" << endl;
				
				break;
			}
		
			case 3:
			{
				cout << sqrt(number) << endl;
				
				break;
			}
			case 4:
			{
				int save_number;
				save_number = number;
				while (0 != (number / 10))
				{
					number = (number / 10);
					digit++;
				} 
				number = save_number;
				cout << "Number of digits: " << digit << endl;
				break;
			}
			case 5:
			{
				int position, save_number;
				save_number = number;
				cout << "Enter digit position: " << endl;
				cin >> position;
				
				cout << "Number at " << position << " position is: " << number;
				number = save_number;
				break;
				
			}
			case 6:
			{
				cout << left << setw(10) << "+";
				for (int row = 1; row < 13; row++)
					cout << left << setw(10) << row;
				cout << "\n" << setw(10) << number;
				for (int row = 1; row < 13; row++)
					cout << left << setw(10) << row + number;
				cout << "\n";
				break;
			}
			case 7:
			{
				cout << left << setw(12) << "*";
				for (int row = 1; row < 13; row++)
					cout << left << setw(12) << row;
				cout << "\n" << setw(12) << number;
				for (int row = 1; row < 13; row++)
					cout << left << setw(12) << row * number;
				cout << "\n";
				break;
			}
			default:
			{
				cout << "Error: Incorrect menu choice" << endl;
				break;
			}
			
		}
	}
	if (menu_choice == 8)
		cout << "Exiting program" << endl;
	return 0;

}