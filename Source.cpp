//Lorem ipsum dolorem
#include"header.h"
Stadium::Stadium() {
	viewers_number = 0;
	name = "DefaultName";
	power = 0;
}
Stadium::Stadium(int integer_public_area, string string_public_area) {
	this->integer_public_area = integer_public_area;
	this->string_public_area = string_public_area;


}

Stadium::Stadium(int viewers_number, string name, int power) {
	this->viewers_number = viewers_number;
	this->name = name;
	this->power = power;
}

Stadium::Stadium(int protected_area1, int protected_area2) {
	this->protected_area1 = protected_area1;
	this->protected_area2 = protected_area2;

}
Stadium::Stadium(int protected_area1, int protected_area2, int viewers_number, string name, int power, int integer_public_area, string string_public_area) {
	this->integer_public_area = integer_public_area;
	this->string_public_area = string_public_area;
	this->viewers_number = viewers_number;
	this->name = name;
	this->power = power;
	this->protected_area1 = protected_area1;
	this->protected_area2 = protected_area2;

}

int Stadium::GetViewersNumber() {

	return viewers_number;

}

string Stadium::GetName() {
	return name;
}

int Stadium::GetPower() {

	return power;
}
int Stadium::GetProtectedArea1() {
	return protected_area1;
}
int Stadium::GetProtectedArea2() {
	return protected_area2;
}

Stadium::~Stadium() {


	cout << "Destructor is done" << endl;
	system("pause");
}

void Stadium::ShowObject() {
	cout << this->GetViewersNumber() << endl;
	cout << this->GetName() << endl;
	cout << this->GetPower() << endl;
	cout << this->GetProtectedArea1() << endl;
	cout << this->GetProtectedArea2() << endl;
	cout << this->integer_public_area << endl;
	cout << this->string_public_area << endl;

}