#include<iostream>
using namespace std;
#include<vector>

template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2)
{
	vector<T>v;                               //����������ڴ���v1��v2�Ľ���
	bool is = false;                          //�����ж����������Ƿ��н���
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v2.size(); j++)
		{
			if (v1.at(i) == v2.at(j))
			{
				is = true;

				if (v.size() != 0)                  //�ж�v1,v2����������Ƿ��Ѵ�����v��
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
		cout << "����������û�н���!" << endl;
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
//����printStringVector����ӡstring���͵�vector����,�����˵�����


int main()
{
	cout << "�������һ��vector����������:";
	vector<string>v1;
	for (int i = 0; i < 5; i++)
	{
		string complex;
		cin >> complex;
		v1.push_back(complex);
	}

	cout << "������ڶ���vector����������:";
	vector<string>v2;
	for (int j = 0; j < 5; j++)
	{
		string complex;
		cin >> complex;
		v2.push_back(complex);
	}

	vector<string>v = intersection(v1, v2);                //��������v����v1��v2�Ľ���
	cout << "v1��v2�Ľ���Ϊ:";
	printStringVector(v);

	system("pause");
	return 0;
}