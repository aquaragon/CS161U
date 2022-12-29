#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::left;

int main()
{
	int row = 0;
	
	for (int asc_char = 32; asc_char < 256; asc_char++)
	{
		
		cout << left <<setw(3) << asc_char << "= " << setw(2) << static_cast<char>(asc_char) << "\t";

		row++;
		if (row > 3)
		{
			row = 0;
			cout << "\n";
		}
	}
	
}