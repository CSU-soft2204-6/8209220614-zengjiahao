#include<iostream>
using std::cout;
using std::endl;
using std::cin;
void swap(double* a, double* b) {
	if (*a > *b) {
		double temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
//值传递的函数swap；
int main() {
	const int listSize = 10;
	double array[listSize];
	cout << "Please enter ten double precision numbers:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	//输入十个双精度的数据；
	for (int i = 0; i < listSize - 1; i++) {
		for (int j = 0; j < listSize - i - 1; j++) {
			swap(&array[j], &array[j + 1]);
		}
	}
	//交换这十个数据的顺序；
	for (int i = 0; i < listSize; i++) {
		cout << array[i] << "  ";
	}
	system("pause");
	return 0;
}