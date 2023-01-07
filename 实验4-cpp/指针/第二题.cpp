#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
int parseHex(const char* const hexString) 
{	
	int sum = 0;
	for (int i = 0; i < strlen(hexString); i++) 
	{
		if (hexString[strlen(hexString) - i - 1] >= '0' && hexString[strlen(hexString) - i - 1] <= '9')
		{
			sum += (int)(hexString[strlen(hexString) - i - 1] - 48) * pow(16, i);
		}
		//十六进制从0到9；
		if (hexString[strlen(hexString) - i - 1] > '9')
		{
			sum += (int)(hexString[strlen(hexString) - i - 1] - 55) * pow(16, i);
		}
		//十六进制从A到F；
	}
	return sum;
}
int main() {
	cout << "请输入一个十六进制的数字：";
	char hexString[40];
	cin >> hexString;
	cout << "该十六进制数字转化为十进制数字为："<<parseHex(hexString) << endl;
	system("pause");
	return 0;
}