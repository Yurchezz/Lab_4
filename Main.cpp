#include"header.h"
void main() {

	Stadium default_(1, 2, 100, "Name1", 1000, 99, "-99-");
	Stadium private_(3, 4, 200, "Name2", 2000, 999, "-999-");
	Stadium protected_(5, 6, 300, "Name3", 3000, 9999, "-9999-");

	cout << "---------------1-------------" << endl;
	default_.ShowObject();
	cout << "-----------------------------------" << endl;


	cout << "---------------2-------------" << endl;
	private_.ShowObject();
	cout << "-----------------------------------" << endl;

	cout << "---------------3-------------" << endl;
	protected_.ShowObject();
	cout << "-----------------------------------" << endl;


	system("pause");
}