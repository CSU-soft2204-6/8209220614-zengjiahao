#include<iostream>
using namespace std;
int gongyueshu(int &a, int &b) {
	int x = (a > b ? b : a);
	int z = 0;
	for (int i = x; i>0; i--) {
		if (a % i == 0 && b % i == 0) {
			z = i;
			break;
		}
	}
	return z;
}
int gongbeishu(int &a, int &b) {
	int z = gongyueshu(a, b);
	return z * (a / z) * (b / z);
}
int main() {
	int a = 0, b = 0;
	cout << "请输入两个数据：a=" ;
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "这两个数的最大公约数为：" << gongyueshu(a, b) << endl;
	cout << "这两个数的最小公倍数为：" << gongbeishu(a, b) << endl;
	system("pause");
	return 0;
}