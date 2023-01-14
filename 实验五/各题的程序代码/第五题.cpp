#include<iostream>
using namespace std;
#include<vector>

template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2)
{
	vector<T>v;                               //这个向量用于储存v1和v2的交集
	bool is = false;                          //用于判断两个向量是否有交集
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v2.size(); j++)
		{
			if (v1.at(i) == v2.at(j))
			{
				is = true;

				if (v.size() != 0)                  //判断v1,v2的这个交集是否已存在于v中
				{
					for (int z = 0; z < v.size(); z++)
					{
						if (v1.at(i) == v.at(z))
						{
							break;
						}
						else
						{
							v.push_back(v1.at(i));
						}

					}
				}
				else
				{
					v.push_back(v1.at(i));
				}
			}
		}
	}

	if (is==false)
	{
		cout << "这两个向量没有交集!" << endl;
		return v;
	}
	else
	{
		return v;
	}

}

void printStringVector(vector<string>& v)
{
	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}
//函数printStringVector来打印string类型的vector向量,利用了迭代器


int main()
{
	cout << "请输入第一个vector向量的数据:";
	vector<string>v1;
	for (int i = 0; i < 5; i++)
	{
		string complex;
		cin >> complex;
		v1.push_back(complex);
	}

	cout << "请输入第二个vector向量的数据:";
	vector<string>v2;
	for (int j = 0; j < 5; j++)
	{
		string complex;
		cin >> complex;
		v2.push_back(complex);
	}

	vector<string>v = intersection(v1, v2);                //定义向量v储存v1和v2的交集
	cout << "v1和v2的交集为:";
	printStringVector(v);

	system("pause");
	return 0;
}