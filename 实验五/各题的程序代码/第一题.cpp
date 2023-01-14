#include<iostream>
using namespace std;
class Time
{
public:
	void input()
	{
		cout << "请输入 hour:";
		cin >> this->hour;
		cout << "请输入 minute:";
		cin >> this->minute;
		cout << "请输入 second:";
		cin >> this->sec;
	}
	void  output()
	{
		cout << "现在的时间是:  " << this->hour << ":" << this->minute << ":" << this->sec 
			<< "\t" << this->hour << "时" << this->minute << "分" << this->sec << "秒" << endl;
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