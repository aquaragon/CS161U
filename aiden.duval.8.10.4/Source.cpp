#include <iostream>
using std::endl;
using std::cin;
using std::cout;

int main()
{
	int Numerator = 0;
	int Denominator = 0;
	int n = 0;
	int m = 0;
	int remainder = 0;
	
	cout << "Please enter Numerator: " << endl;
	cin >> Numerator;

	cout << "Please enter Denominator: " << endl;  
	cin >> Denominator;

	m = Numerator;
	n = Denominator;

	if (Denominator == 0)
		cout << "Invalid Denominator" << endl;
	else
	{
		do
		{
			remainder = (m % n), m = n;
			n = remainder;
		} while (n != 0);

		Numerator = (Numerator / m);
		Denominator = (Denominator / m);

		if (Denominator == 0)
			cout << "Invalid Denominator" << endl;
		else
		{
			if (Denominator == 1)
				cout << Numerator << endl;
			else if ((Denominator < 0) && (Numerator < 0))
			{
				if (abs(Numerator) > abs(Denominator))
					cout << (Numerator / Denominator) << " " << (Numerator % Denominator) << "/" << Denominator << endl;
				else
					cout << Numerator << "/" << Denominator << endl;
			}
			else if (((Denominator < 0) && (Numerator > 0)) | ((Denominator > 0) && (Numerator < 0)))
			{
				if (abs(Numerator) > abs(Denominator))
					cout << (Numerator / Denominator) << " " << (abs(Numerator) % Denominator) << "/" << abs(Denominator) << endl;
				else
					cout << (-1 * Numerator) << "/" << abs(Denominator) << endl;
			}
			else
			{
				if (Numerator > Denominator)
					cout << (Numerator / Denominator) << " " << (Numerator % Denominator) << "/" << Denominator << endl;
				else
					cout << Numerator << "/" << Denominator << endl;
			}
		}	
	}

	return 0;
}

