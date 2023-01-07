#include<iostream>
using namespace std;
int main() {
	cout << "请输入一个字符：" << endl;
	char a = '\0';
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << "大写输出为："<<(char)(a - 32) << endl;
	}
	else {
		cout << "后继字符的ASCⅡ码值为："<<a + 1 << endl;
	}

	system("pause");
	return 0;
}