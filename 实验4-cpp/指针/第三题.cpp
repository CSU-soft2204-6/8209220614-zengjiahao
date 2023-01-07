#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void swap(int array[], int size)
{
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1])
			{
				int temp;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
//使用函数swap来给数组元素排序；
int main() {
	cout << "请输入动态数组的大小:";
	int size = 0;

	cin >> size;
	int* p = new int[size];
	int* array = p;
	cout << "请输入动态数组中的元素：";
	for (int i = 0; i < size; i++) 
	{
		cin >> array[i];
	}

	swap(array, size);

	
	cout << "从小到大输出数组元素：";
	for (int i = 0; i < size; i++)
	{
		cout << *(array + i) << " ";
	}
	cout << endl;
	//利用指针方式输出数组元素；

	cout << "观察指针以及指针指向的内容：" << endl;
	cout << "动态数组array中的第三个元素指针为：" << (array + 2) << endl;
	cout << "指针指向的内容：" << *(array + 2) << endl;

	delete [] p;
	//delete释放数组内存空间；

	system("pause");
	return 0;
}