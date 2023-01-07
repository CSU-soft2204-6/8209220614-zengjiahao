#include<iostream>
using namespace std;
int main() {
	float a=0, b=0, c=0, C=0;
	cin >> a >> b >> c;
	bool z = true;
	if (a < 0 || b < 0 || c < 0 || a + b <=c || a + c <=b || b + c <= a) {
		cout << "此三角形不存在！" << endl;
		z = false;
	}
	else {
		C = a + b + c;
		cout << "三角形的周长为：" << C << endl;
	};
	if (z == true) {
		if (a == b || a == c || b == c) {
			cout << "此三角形为等腰三角形！" << endl;
		}
	}

	system("pause");
	return 0;
}