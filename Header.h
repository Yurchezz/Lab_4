//Lorem ipsum dolorem
//Lorem ipsum dolorem

#include<iostream>
#include<string>
using namespace std;
class Stadium {

protected:
	int protected_area1;
	int protected_area2;

private:
	string name;
	int power;
	int viewers_number;
public:
	int integer_public_area;
	string string_public_area;


	Stadium();
	Stadium(int integer_public_area, string string_public_area);
	Stadium(int viewers_number, string name, int power);
	Stadium(int protected_area1, int protected_area2);
	Stadium(int protected_area1, int protected_area2, int viewers_number, string name, int power, int integer_public_area, string string_public_area);
	int GetViewersNumber();
	string GetName();
	int GetPower();
	int GetProtectedArea1();
	int GetProtectedArea2();
	void ShowObject();
	~Stadium();

};
