#include"header.h"
void main() {

	Stadium classObject1(1, 2, 100, "Name1", 1000, 99, "-99-");
	Stadium classObject2(3, 4, 200, "Name2", 2000, 999, "-999-");
	Stadium classObject3(5, 6, 300, "Name3", 3000, 9999, "-9999-");

	cout << "---------------1-------------" << endl;
	classObject1.ShowObject();
	cout << "-----------------------------------" << endl;


	cout << "---------------2-------------" << endl;
	classObject2.ShowObject();
	cout << "-----------------------------------" << endl;

	cout << "---------------3-------------" << endl;
	classObject3.ShowObject();
	cout << "-----------------------------------" << endl;


	system("pause");
}