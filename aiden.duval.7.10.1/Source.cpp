#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;
using std::abs;

int main()
{
	int numerator = 0;
	int denominator = 0;
	
	cout << "Please enter numerator: " << endl;
	cin >> numerator;

	cout << "Please enter debominator: " << endl;
	cin >> denominator;

	if (abs(numerator) > abs(denominator))
		if (numerator < 0 && denominator < 0)
			cout << abs(numerator / denominator) << ' ' << abs(numerator % denominator) << "/" << abs(denominator) << endl;

		else if (numerator < 0 ^ denominator < 0)
			cout << numerator / denominator << ' ' << abs(numerator % denominator) << "/" << abs(denominator) << endl;

		else if (numerator > 0 && (numerator % denominator) == 0)
			cout << numerator / denominator << endl;

		else if (numerator > 0 && denominator > 0)
			cout << numerator / denominator << ' ' << numerator % denominator << "/" << denominator << endl;

	if (abs(numerator) < abs(denominator))
		if (numerator < 0 && denominator < 0)
			cout << abs(numerator) << "/" << abs(denominator) << endl;

		else if (numerator < 0 ^ denominator < 0)
			cout << "-" << abs(numerator) << "/" << abs(denominator) << endl;

		else if (numerator > 0 && denominator > 0)
			cout << numerator << "/" << denominator << endl;
		
	if (abs(numerator) == abs(denominator))
		cout << (abs(numerator) / abs(denominator)) << endl;
	
	return 0;


}