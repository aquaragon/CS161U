#include <iostream>
#include <fstream>
#define _CRT_SECURE_NO_WARNINGS

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;

int const NAME_LENGTH = 15;
int const PHONE_LENGTH = 13;
int const DATE_LENGTH = 11;




int ReadData(char last_name[10][NAME_LENGTH], char first_name[10][NAME_LENGTH], char phone_number[10][PHONE_LENGTH], char birth_date[10][DATE_LENGTH]);
int BinarySearch(int num_records, char last_name[10][NAME_LENGTH], char search_name[NAME_LENGTH]);
void BubbleSort(int num_records, char last_name[10][NAME_LENGTH], char first_name[10][NAME_LENGTH], char phone_number[10][PHONE_LENGTH], char birth_date[10][DATE_LENGTH]);
int main()
{
	int menu_choice;
	char first_name[10][NAME_LENGTH] = { 0 };
	char last_name[10][NAME_LENGTH] = { 0 };
	char phone_number[10][PHONE_LENGTH] = { 0 };
	char birth_date[10][DATE_LENGTH] = { 0 };
	int num_records;




	num_records = ReadData(last_name, first_name, phone_number, birth_date);  
	BubbleSort(num_records, last_name, first_name, phone_number, birth_date);
	cout << "Please enter a menu choice: \n\n"
		<< "1) Find a person's information \n"
		<< "2) Add a person to the database \n"
		<< "3) Edit a person's information \n"
		<< "4) Display all records to the screen \n"
		<< "5) Quit \n" << endl;
	cin >> menu_choice;
	while (menu_choice > 5 || menu_choice < 1)
	{
		cout << "Error: Invalid menu choice, Please try again:" << endl;
		cin >> menu_choice;
	}

	while (menu_choice != 5)
	{
		switch (menu_choice)
		{
			case 1:
			{
				//NEEDS WORK//
				int mid;
				char search_name[NAME_LENGTH];
				cout << "Please enter the last name of desired person: " << endl;
				cin >> search_name[NAME_LENGTH];
				mid = BinarySearch(num_records, last_name, search_name);
				if (mid >= 0)
				{
					cout << "Person found! \n" << last_name[mid] << ", " << first_name[mid] << " " << phone_number[mid] << " " << birth_date[mid] << endl;
				}
				else
					cout << "Sorry, no person found in records" << endl;
				break;
			}
			case 2:
			{
				cout << "Please enter following information: \n\n"
					<< "Last name: " << endl;
				cin >> last_name[num_records + 1];
	
				cout << "First name: " << endl;
				cin >> first_name[num_records + 1];

				cout << "Phone number: " << endl;
				cin >> phone_number[num_records + 1];

				cout << "Birth date: " << endl;
				cin >> birth_date[num_records + 1];
				num_records += 1;
				BubbleSort(num_records, last_name, first_name, phone_number, birth_date);
				break;
			}
			case 3:
			{
				int edit_menu;
				int piece_info;
				cout << "Choose from: " << endl;
				for (int i = 0; i < num_records; i++)
					cout << i + 1 << ")" << last_name[i] << endl;
				cin >> edit_menu;
				cout << "1)" << last_name[edit_menu - 1] << "2)" << first_name[edit_menu - 1] << "3)" << phone_number[edit_menu - 1] << "4)" << birth_date[edit_menu - 1] << '\n' << "Which piece of information? " << endl;
				cin >> piece_info;
				switch (piece_info)
				{
					case 1:
					{
						cout << "Enter last name: " << endl;
						cin >> last_name[edit_menu - 1];
						break;
					}
					case 2:
					{
						cout << "Enter first name: " << endl;
						cin >> first_name[edit_menu - 1];
						break;
					}
					case 3:
					{
						cout << "Enter phone number: " << endl;
						cin >> phone_number[edit_menu - 1];
						break;
					}
					case 4:
					{
						cout << "Enter birth date: " << endl;
						cin >> birth_date[edit_menu - 1];
						break;
					}
				}
				BubbleSort(num_records, last_name, first_name, phone_number, birth_date);
			}
			case 4:
			{
				for (int i = 0; i < num_records; i++)
					cout << last_name[i] << ", " << first_name[i] << " " << phone_number[i] << " " << birth_date[i] << endl;
				break;
			}
		}
		cout << "Please enter a menu choice: \n\n"
			<< "1) Find a person's information \n"
			<< "2) Add a person to the database \n"
			<< "3) Edit a person's information \n"
			<< "4) Display all records to the screen \n"
			<< "5) Quit \n" << endl;
		cin >> menu_choice;
		while (menu_choice > 5 || menu_choice < 1)
		{
			cout << "Error: Invalid menu choice, Please try again:" << endl;
			cin >> menu_choice;
		}
	}
	ofstream fout("Data.txt"); 
	for (int i = 0; i < num_records; i++)
		fout << last_name[i] << " " << first_name[i] << " " << phone_number[i] << " " << birth_date[i] << endl;
	fout.close();
	
	return 0;
}
int ReadData(char last_name[10][NAME_LENGTH], char first_name[10][NAME_LENGTH], char phone_number[10][PHONE_LENGTH], char birth_date[10][DATE_LENGTH])
{
	ifstream fin("Data.txt");
	int num_records = 0;
	if (fin.is_open())
	{
		fin >> last_name[num_records] >> first_name[num_records] >> phone_number[num_records] >> birth_date[num_records];

		while (!fin.eof())
		{
			num_records++;
			fin >> last_name[num_records] >> first_name[num_records] >> phone_number[num_records] >> birth_date[num_records];
		}
		fin.close();
	}
	else
		cout << "Error: Unable to open file" << endl;
	return num_records;
}
void BubbleSort(int num_records, char last_name[10][NAME_LENGTH], char first_name[10][NAME_LENGTH], char phone_number[10][PHONE_LENGTH], char birth_date[10][DATE_LENGTH])
{
	char temp[NAME_LENGTH];
	for (int i = 0; i < num_records; i++)
	{
		for (int j = 0; j < (num_records - 1); j++)
		{
			if (stricmp(last_name[j], last_name[j + 1]) > 0)
			{
				strcpy(temp, last_name[j]);
				strcpy(last_name[j], last_name[j + 1]);
				strcpy(last_name[j + 1], temp);
				
				strcpy(temp, first_name[j]);
				strcpy(first_name[j], first_name[j + 1]);
				strcpy(first_name[j + 1], temp);
				
				strcpy(temp, phone_number[j]);
				strcpy(phone_number[j], phone_number[j + 1]);
				strcpy(phone_number[j + 1], temp);
				
				strcpy(temp, birth_date[j]);
				strcpy(birth_date[j], birth_date[j + 1]);
				strcpy(birth_date[j + 1], temp);
			}
		}
	}
}
int BinarySearch(int num_records, char last_name[10][NAME_LENGTH], char search_name[NAME_LENGTH])
{
	bool found = false;
	int left = 0;
	int right = num_records - 1;
	int mid;

	while (left <= right && found != true)
	{
		mid = (left + right) / 2;
		if (strcmp(last_name[mid], search_name) == 0)
		{
			found = true;
		}
		else if (strcmp(last_name[mid], search_name) < 0)
			left = mid + 1;
		else
			right = mid - 1;
	}
	if (found == false)
		mid = -1;
	return mid;
}