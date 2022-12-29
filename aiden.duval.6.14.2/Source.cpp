#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;


int main()
{
	cout.precision(2);
	cout << left << setw(22) << "Description" << right << setw(16) << "Cost per Unit" << setw(24) << "Quantity Needed" << setw(18) << "Total Cost" << endl;
	cout << left << setw(22) << "Joists" << right << setw(16) << "75.99$" << setw(24) << "25" << setw(18) << "1,899.75$" << endl;
	cout << left << setw(22) << "2x6" << right << setw(16) << "8.90$" << setw(24) << "100" << setw(18) << "890.00$" << endl;
	cout << left << setw(22) << "2x4" << right << setw(16) << "4.95$" << setw(24) << "25" << setw(18) << "123.75$" << endl;
	cout << left << setw(22) << "4x4" << right << setw(16) << "12.95$" << setw(24) << "20" << setw(18) << "259.00$" << endl;
	cout << left << setw(22) << "4 x 8 Sheet Plywood" << right << setw(16) << "22.00$" << setw(24) << "100" << setw(18) << "2,200.00$" << endl;
	cout << endl;
	cout << "Total cost of all materials: 5,372.50$" << endl;



	return 0;
}
