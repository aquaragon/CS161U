#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::pow;

int main()
{
	int FirstNumber = 0;
	cout << "Some Math Examples" << endl;
	cout << "Enter the first number:" << endl;
	cin >> FirstNumber;

	int SecondNumber = 0;
	cout << "Enter the second number:" << endl;
	cin >> SecondNumber;

	int ThirdNumber = 0;
	cout << "Enter the third number:" << endl;
	cin >> ThirdNumber;

	int NumberX = 0;
	cout << "Enter number:" << endl;
	cin >> NumberX;

	int PowerNumber = 0;
	cout << "Raise " << NumberX << " to what power:" << endl;
	cin >> PowerNumber;
	cout << "= " << pow(NumberX, PowerNumber) << endl;

	int SumOfNumbers = 0;
	SumOfNumbers = FirstNumber + SecondNumber + ThirdNumber;

	int AverageOfNumbers = 0;
	AverageOfNumbers = (SumOfNumbers / 3);

	int ProdOfNumbers = 0;
	ProdOfNumbers = FirstNumber * SecondNumber * ThirdNumber;

	float SquareRoot = 0;
	SquareRoot = sqrt(SumOfNumbers);
	
	int Remainder = 0;
	Remainder = SumOfNumbers % 3;

	cout << "Your three numbers entered were:\n" << 
		FirstNumber << '\t' << SecondNumber << '\t' << ThirdNumber << endl;

	cout << "Sum of the numbers is:\n" <<
		SumOfNumbers << endl;

	cout << "Average of the three numbers is:\n" <<
		AverageOfNumbers << endl;

	cout << "Product of the 3 numbers is:\n" <<
		ProdOfNumbers << endl;

	cout << "Square Root of the Sum of the numbers is:\n" <<
		SquareRoot << endl;

	cout << "The remainder of the sum of the numbers / 3 is:\n" <<
		Remainder << endl;

	cout << "** ALL DONE **" << endl;

	return 0;

}