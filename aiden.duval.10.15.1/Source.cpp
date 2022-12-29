#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

bool isPalindrome (const char cString[]);
bool isAlphaStr (const char cString[]);
int countChar(const char cString[], char Spec_Char);

int main()
{
	char cString[25];
	char Spec_Char;
	bool palindrome;
	bool alpha;
	int rpt_number;

	cout << "Enter a word: " << endl;
	cin.ignore(cin.rdbuf()->in_avail());
	cin.getline(cString, 20);
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	
	cout << "Enter a character to be counted: " << endl;
	cin >> Spec_Char;

	palindrome = isPalindrome(cString);
	alpha = isAlphaStr(cString);
	rpt_number = countChar(cString, Spec_Char);

	cout << "Your word is a palindrome: " << endl;
	if (palindrome == 1)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	cout << "Your word has only alphabetical letters: " << endl;
	if (alpha == 1)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	cout << "Your selected character was repeated: " << rpt_number << " times" << endl;

	return 0;
}
bool isPalindrome (const char cString[])
{
	char temp[20];
	bool palindrome = false;

	strcpy(temp, cString );
	_strrev(temp);

	if (_stricmp(cString, temp) == 0)
		palindrome = true;

	return palindrome;
}
bool isAlphaStr(const char cString[])
{
	bool alpha = false;
	char i = 'a';
	int j = 0;
	
	while (i != '\0')
	{
		if (isalpha(i))
			alpha = true;
		else
			alpha = false;
		j++;
		i = cString[j];
		if (alpha == false)
			i = '\0';

	}
	return alpha;
}
int countChar(const char cString[], char Spec_Char)
{
	int rpt_number = 0;
	char i = 'a';
	int j = 0;
	while (i != '\0')
	{
		i = cString[j];
		if (Spec_Char == cString[j])
			rpt_number++;
		j++;
	}
	return rpt_number;
}

