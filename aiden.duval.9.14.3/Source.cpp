#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float Rect(float width, float height);
float Circle(float radius);
float RTri(float base, float height);
float Cylin(float radius, float height);
float Sphere(float radius);

int main()
{
	int menu_choice;
	float volume = 0.0F;
	float area = 0.0F;
	float radius = 0.0F;
	cout << "-- Main Menu --" << '\n'
		 << "1) Calculate Area" << '\n'
		 << "2) Calculate Volume" << '\n' << '\n'
		 << "Enter menu choice: " << endl;
	cin  >> menu_choice;

	switch (menu_choice)
	{
		case (1):
		{
			char area_menu;
			cout << "-- Area Menu --" << '\n'
				<< "a) Rectangle" << '\n'
				<< "b) Circle" << '\n'
				<< "c) Right Triangle" << '\n' << '\n'
				<< "Enter menu choice: " << endl;
			cin >> area_menu;
			area_menu = tolower(area_menu);

			switch (area_menu)
			{
				case ('a'):
				{
					float width = 0.0F;
					float height = 0.0F;

					cout << "Please enter height: " << endl;
					cin >> height;

					cout << "Please enter width: " << endl;
					cin >> width;

					area = Rect(width, height);
					cout << "Your area for a rectangle is: " << area << " units squared" << endl;
					break;
				}
				case ('b'):
				{
					float radius = 0.0F;

					cout << "Please enter radius amount: " << endl;
					cin >> radius;

					area = Circle(radius);
					cout << "Your area for a circle is: " << area << " units squared" << endl;
					break;
				}
				case ('c'):
				{
					float base = 0.0F;
					float height = 0.0F;

					cout << "Please enter base: " << endl;
					cin >> base;

					cout << "Please enter height: " << endl;
					cin >> height;

					area = RTri(base, height);
					cout << "Your area for a right triangle is: " << area << " units squared" << endl;
					break;
				}
				default:
					cout << "Incorrect menu choice, please try again" << endl;
					break;
				
			}
			break;
		}
		case (2):
		{
			char volume_menu;
			cout << "-- Volume Menu --" << '\n'
				<< "a) Cylinder" << '\n'
				<< "b) Sphere" << '\n' << '\n'
				<< "Enter menu choice: " << endl;
			cin >> volume_menu;
			volume_menu = tolower(volume_menu);

			switch (volume_menu)
			{
				case ('a'):
				{
					float radius = 0.0F;
					float height = 0.0F;

					cout << "Please enter height: " << endl;
					cin >> height;

					cout << "Please enter radius: " << endl;
					cin >> radius;

					volume = Cylin(radius, height);
					cout << "Your volume for a cylinder is: " << volume << " units cubed" << endl;
					break;
				}
				case ('b'):
				{
					float radius = 0.0F;

					cout << "Please enter radius: " << endl;
					cin >> radius;

					volume = Sphere(radius);
					cout << "Your volume for a sphere is: " << volume << " units cubed" << endl;
					break;
				}
				default:
					cout << "Incorrect menu choice, please try again" << endl;
			}
			break;
		}
		default:
			cout << "Incorrect menu choice, please try again" << endl;
	}
}
float Rect(float width, float height)
{
	float area;
	area = width * height;
	return area;
}
float Circle(float radius)
{
	float area;
	area = 3.14 * (radius * radius);
	return area;
}
float RTri(float base, float height)
{
	float area;
	area = .5 * base * height;
	return area;
}
float Cylin(float radius, float height)
{
	float volume;
	volume = 3.14 * (radius * radius) * height;
	return volume;
}
float Sphere(float radius)
{
	float volume;
	volume = (4 / 3) * 3.14 * (radius * radius * radius);
	return volume;
}