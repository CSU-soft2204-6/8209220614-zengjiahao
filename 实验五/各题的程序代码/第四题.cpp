#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

class Shape
{
public:
	virtual double caculate() = 0;

};
//����������Shape,�����崿�麯��caculate()���������;


class Circle : public Shape
{
public:
	Circle(double R)
	{
		this->radius = R;
	}
	//���캯����˽�пռ��ڵĳ�Ա����ֵ;

public:
	virtual double caculate()
	{
		return 3.41 * pow(this->radius, 2);
	}

private:
	double radius;
};
//����Circle

class Square : public Shape
{
public:
	Square(double L)
	{
		this->length = L;
	}

public:
	virtual double caculate()
	{
		return pow(this->length, 2);
	}

private:
	double length;
};
//����Square

class Rectangle :public Shape
{
public:
	Rectangle(double L, double W)
	{
		this->length = L;
		this->width = W;
	}

public:
	virtual double caculate()
	{
		return this->length * this->width;
	}

private:
	double length;
	double width;
};
//����Rectangle

class Trapezoid: public Shape
{
public:
	Trapezoid(double up_L, double down_L, double H)
	{
		this->up_length = up_L;
		this->down_length = down_L;
		this->height = H;
	}

public:
	virtual double caculate()
	{
		return (this->up_length + this->down_length) * this->height / 2;
	}

private:
	double up_length;
	double down_length;
	double height;
};
//����Trapezoid

class Triangle: public Shape
{
public:
	Triangle(double L1,double L2,double L3)
	{
		this->length1 = L1;
		this->length2 = L2;
		this->length3 = L3;
	}
public:
	virtual double caculate()
	{
		double p = (this->length1 + this->length2 + this->length3) / 2;
		return sqrt(p * (p - length1) * (p - length2) * (p - length3));
		//���׹�ʽ�����
	}
		
private:
	double length1;
	double length2;
	double length3;
};
//����Triangle
// 
//���ϴ���������ü̳�,��д�˴��麯��caculate(),��������Ե����

int main()
{
	Shape* array[5];
	//����Shape�Ļ���ָ������

	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	//�������������

	array[0] = &circle;
	array[1] = &square;
	array[2] = &rectangle;
	array[3] = &trapezoid;
	array[4] = &triangle;
	//ʹ���е�ÿһ��Ԫ��ָ��ָ��һ��������Ķ���

	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += array[i]->caculate();
	}
	//forѭ�������ǵ����֮��;

	cout << "���ͼ�ε��������:" << sum << endl;

	return 0;
}