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
	//构造函数访问私有成员定义长宽高
public:
	double caculate()
	{
		return this->Length * this->Width * this->Height;
	}
	//提供计算体积的方法
private:
	double Length;
	double Width;
	double Height;
};
//定义长方体类,并利用构造函数定义长宽高,而且提供计算体积的方法;

int main() {
	cout << "请输入第一个立方体的长宽高:" << endl;
	double L1 = 0, W1 = 0, H1 = 0;
	cout << "长 Length1 = ";
	cin >> L1;
	cout << "宽 Width1 = ";
	cin >> W1;
	cout << "高 Heigth1 = ";
	cin >> H1;
	Cuboid c1 = Cuboid(L1, W1, H1);
	cout << "第一个立方体的体积为:" << c1.caculate() << endl << endl;
	//计算第一个立方体的体积;

	cout << "请输入二个立方体的长宽高:" << endl;
	double L2 = 0, W2 = 0, H2 = 0;
	cout << "长 Length2 = ";
	cin >> L2;
	cout << "宽 Width2 = ";
	cin >> W2;
	cout << "高 Heigth2 = ";
	cin >> H2;
	Cuboid c2 = Cuboid(L2, W2, H2);
	cout << "第二个立方体的体积为:" << c2.caculate() << endl << endl;
	//计算第二个立方体的体积;

	cout << "请输入第三个立方体的长宽高:" << endl;
	double L3 = 0, W3 = 0, H3 = 0;
	cout << "长 Length3 = ";
	cin >> L3;
	cout << "宽 Width3 = ";
	cin >> W3;
	cout << "高 Heigth3 = ";
	cin >> H3;
	Cuboid c3 = Cuboid(L3, W3, H3);
	cout << "第三个立方体的体积为:" << c3.caculate() << endl << endl;
	//计算第三个立方体的体积;

	system("pause");
	return 0;
}