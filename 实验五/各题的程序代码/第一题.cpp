#include<iostream>
using namespace std;
class Time
{
public:
	void input()
	{
		cout << "������ hour:";
		cin >> this->hour;
		cout << "������ minute:";
		cin >> this->minute;
		cout << "������ second:";
		cin >> this->sec;
	}
	void  output()
	{
		cout << "���ڵ�ʱ����:  " << this->hour << ":" << this->minute << ":" << this->sec 
			<< "\t" << this->hour << "ʱ" << this->minute << "��" << this->sec << "��" << endl;
	}

private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time t1;
	t1.input();
	t1.output();

	system("pause");
	return 0;
}