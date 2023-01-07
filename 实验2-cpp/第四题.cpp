#include<iostream>
using namespace std;
int sum(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int devide(int a, int b) {
	if (b == 0) {
		return 0;
	}
	else return a / b;
}
int qumo (int a, int b) {
	if (b == 0) {
		return 0;
	}
	else return a % b;
}
int main() {
	cout << "请输入两个数进行运算：" << endl;
	int a = 0, b = 0;
	cin >> a >> b;
	cout << "a+b=" << sum(a, b) << endl;
	cout << "a-b=" << subtract(a, b) << endl;
	cout << "a*b=" << mul(a, b) << endl;
	cout << "a/b=" << devide(a, b) << endl;
	cout << "a%b=" << qumo(a, b) << endl;
	system("pause");
	return 0;
}