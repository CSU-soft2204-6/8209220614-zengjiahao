#include<iostream>
using std::cout;
using std::endl;
int main() {
	bool array[100];
	for (int i = 0; i < 100; i++) {
		array[i] = false;
	}
	//存物柜开始全都是关闭的（false）；
	for (int i = 0; i < 100; i++) {
		array[i] = true;
	}
	//第1个学生操作后存物柜全部开启（true）；
	for (int i = 1; i < 100; i++) {
		int a = i;
		do {
			if (array[a] == true) {
				array[a] = false;
			}
			else if (array[a] == false) {
				array[a] = true;
			}
			a += i + 2;
		} while (a < 100);
	}
	//第2~100个学生操作后柜子的情况；
	cout << "开着的箱子的编号为：" << endl;
	for (int i = 0; i < 100; i++) {
		if (array[i] == true) {
			cout << i + 1 << " ";
		}
	}
	//打印最后仍为开启状态的柜子的编号；
	system("pause");
	return 0;
}