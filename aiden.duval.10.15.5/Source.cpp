#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int power, coefficient = 1;

	cout << "Enter desired power: ";
	cin >> power;

	for (int i = 0; i < power + 1; i++)
	{
		for (int space = 1; space <= power - i; space++)
			cout << "  ";

		for (int j = 0; j <= i; j++)
		{
			if (i == 0 || j == 0)
				coefficient = 1;

			else
				coefficient = coefficient * (i - j + 1) / j;
			cout << coefficient << "   ";

		}
		cout << endl;
	}
	return 0;
}