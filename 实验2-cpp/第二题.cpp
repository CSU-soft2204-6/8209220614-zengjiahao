#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "请输入x的值：" << endl;
	float x = 0;
	cin >> x;
	if (x > 0 && x < 1) {
		cout << "由表达式可知：y=" << 3 - 2 * x << endl;
	}
	else if (x >= 1 && x < 5) {
		cout << "由表达式可知：y=" << 2 / (4 * x) + 1 << endl;
	}
	else if (x >= 5 && x < 10) {
		cout << "由表达式可知：y=" << pow(x,2) << endl;
	}
	system("pause");
	return 0;
}