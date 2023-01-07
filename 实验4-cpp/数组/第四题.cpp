#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1 + size2; i++) {
		while (i < size1) {
			list3[i] = list1[i];
			break;
		}
		while (i >= size1) {
			list3[i] = list2[i - size1];
			break;
		}
	}
}
//将list1和list2中的元素赋值给list3;
//while是一个循环，不满足循环条件不会退出；if是判断条件，不满足也会退出；
void swap(int list3[],int size1,int size2) 
{
	for (int i = 0; i < size1+size2 - 1; i++) {
		for (int j = 0; j < size1 + size2 - i - 1; j++) {
			if (list3[j] > list3[j + 1]) {
				int temp = 0;
				temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
}
//将list3中的元素按大小排列；

int main() {
	cout << "Enter list1:";
	int size1 = 0;
	int list1[40];
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	//输入数组list1;
	cout << "Enter list2:";
	int size2 = 0;
	int list2[40];
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	//输入数组List2；
	int list3[80];
	merge(list1, size1, list2, size2, list3);
	cout << "The merge list:";
	swap(list3,size1,size2);
	//交换list3的次序；
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
	//打印List3；
	system("pause");
	return 0;
}