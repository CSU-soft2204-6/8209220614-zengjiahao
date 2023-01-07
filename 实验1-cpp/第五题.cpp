#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "请输入当前的华氏温度℉：" << endl;
	float F = 0;
	cin >> F;
	float C = (F - 32) / 1.8;
	cout << "转换后当前的摄氏温度℃为：" <<setprecision(4)<< C << "℃" << endl;
	system("pause");
	return 0;
}