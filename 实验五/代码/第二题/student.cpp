#include"student.h"

void Student::set_value(string Num, string Name, string Sex)
{
	this->num = Num;
	this->name = Name;
	this->sex = Sex;

};
void Student::display()
{
	cout << "num: " << this->num << endl;
	cout << "name: " << this->name << endl;
	cout << "sex: " << this->sex << endl;
}