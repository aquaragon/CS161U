#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int discriminant = 0;
	int root_1 = 0;
	int root_2 = 0;

	cout << "Value of a?" << endl;
	cin >> a;

	cout << "Value of b?" << endl;
	cin >> b;

	cout << "Value of c?" << endl;
	cin >> c;

	discriminant = ((b * b) - (4 * a * c));
	root_1 = ((-b + sqrt(discriminant)) / (2 * a));
	root_2 = ((-b - sqrt(discriminant)) / (2 * a));

	if (a == 0)
		cout << "Error: a cannot equal zero" << endl;

	else if (discriminant < 0)
		cout << "Error: roots will be complex due to negative disciminate" << endl;

	else if ((discriminant > 0) && (a != 0))
		if (root_1 = root_2)
			cout << "Indentical roots:" << '\n' << root_1 << endl;
		else if (root_1 =! root_2)
			cout << "First root is:" << '\n' << root_1 << "Second root is:" << '\n' << root_2 << endl;
	
	return 0;
}
