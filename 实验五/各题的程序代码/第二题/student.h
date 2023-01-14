#include<iostream>
using namespace std;
class Student
{
public:
	void set_value(string Num,string Name, string Sex);
	void display();
private:
	string num;
	string name;
	string sex;
};