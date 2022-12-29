#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float rate = 0;
	float loan = 0;
	float interest = 0;
	int fee = 0;
	

	cout << "Enter loan amount: " << endl;
	cin >> loan;

	cout << "Enter interest rate amount: " << endl;
	cin >> rate;

	if ((rate > .18 | rate < .01) | (loan > 1000 | loan < 100))
		cout << "Error: unacceptable conditions" << endl;
		

	else if (loan < 500 && loan > 100)
		fee = 20;

	else if (loan > 500)
		fee = 25;

	interest = (loan * rate);

	if ((loan < 500 && loan > 100) | (loan > 500))
		cout << "Interest paid on loan:" << '\n' << "$" << interest << endl;
		cout << "Requested loan amount:" << '\n' << "$" << loan << endl;
		cout << "Interest rate:" << '\n' << rate << endl;
		cout << "Sum of interest and fees:" << '\n' << (fee + interest) << endl;

	return 0;

}