#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Cuboid
{
public:
	Cuboid(double length, double width, double height)
	{
		this->Length = length;
		this->Width = width;
		this->Height = height;
	}
	//���캯������˽�г�Ա���峤���
public:
	double caculate()
	{
		return this->Length * this->Width * this->Height;
	}
	//�ṩ��������ķ���
private:
	double Length;
	double Width;
	double Height;
};
//���峤������,�����ù��캯�����峤���,�����ṩ��������ķ���;

int main() {
	cout << "�������һ��������ĳ����:" << endl;
	double L1 = 0, W1 = 0, H1 = 0;
	cout << "�� Length1 = ";
	cin >> L1;
	cout << "�� Width1 = ";
	cin >> W1;
	cout << "�� Heigth1 = ";
	cin >> H1;
	Cuboid c1 = Cuboid(L1, W1, H1);
	cout << "��һ������������Ϊ:" << c1.caculate() << endl << endl;
	//�����һ������������;

	cout << "���������������ĳ����:" << endl;
	double L2 = 0, W2 = 0, H2 = 0;
	cout << "�� Length2 = ";
	cin >> L2;
	cout << "�� Width2 = ";
	cin >> W2;
	cout << "�� Heigth2 = ";
	cin >> H2;
	Cuboid c2 = Cuboid(L2, W2, H2);
	cout << "�ڶ�������������Ϊ:" << c2.caculate() << endl << endl;
	//����ڶ�������������;

	cout << "�����������������ĳ����:" << endl;
	double L3 = 0, W3 = 0, H3 = 0;
	cout << "�� Length3 = ";
	cin >> L3;
	cout << "�� Width3 = ";
	cin >> W3;
	cout << "�� Heigth3 = ";
	cin >> H3;
	Cuboid c3 = Cuboid(L3, W3, H3);
	cout << "����������������Ϊ:" << c3.caculate() << endl << endl;
	//�������������������;

	system("pause");
	return 0;
}