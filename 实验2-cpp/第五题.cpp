//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	char str[20];
//	cin.getline(str, 20);
//	int letter = 0, blank = 0, num = 0, other = 0;
//	for (int i = 0; i < sizeof(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
//		{
//			letter++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9') {
//			num++;
//		}
//		else if (str[i] == ' ') {
//			blank++;
//		}
//		else if (str[i] == '\0') {
//			break;
//		}
//		else   {
//			other++;
//		}
//	}
//	cout << "英文字母有：" << letter << "个" << endl;
//	cout << "空格有：" << blank << "个" << endl;
//	cout << "数字有：" << num << "个" << endl;
//	cout << "其他有：" << other << "个" << endl;
//	system("pause");
//	return 0;
//}