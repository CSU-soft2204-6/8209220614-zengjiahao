#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class complex {
public:
	double real, image;
public:
	complex() {
		real = 0;
		image = 0;
	}
	complex(double real1, double image1) {
		this->real = real1;
		this->image = image1;
	}
	void display() {
		cout << this->real << '\t' << this->image << endl;
	}
	//友元
	/*
	friend complex operator +(complex A, complex B)
	{
		return complex(A.real + B.real, A.image + B.image);
	}

	friend complex operator ++(complex&A) {
		return complex(++A.real, A.image);
	}

	friend complex operator  ++(complex& A, int) {
		return complex(A.real++, A.image);
	}
	*/

	//成员函数
	complex operator +(complex A);
	complex operator ++();
	complex operator ++(int);
	complex operator =(complex A);
};


class Pcomplex {
private:
	complex* pc;
public:
	Pcomplex(complex* pc = NULL) {
		this->pc = pc;
	}
	void display() {
		cout << "pc=" << this->pc << endl;
		cout << "this pc.real=" << this->pc->real << endl;
	}
	complex* operator->() {
		if (pc != NULL) {
			return pc;
		}
		static complex nullcomplex(0, 0);
		return &nullcomplex;
	}
};


class format {
protected:
	int x, y;
public:
	virtual double area() = 0;
	virtual void show() = 0;
};


class point :public format {
private:
	int x, y;
public:
	point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
		cout << "point()被调用" << endl;
	}
	virtual double area() {
		return 0.0;
	}
	void show() {
		cout << x << '\t' << y << endl;
	}
	virtual ~point() {
		cout << "~point()被调用" << endl;
	}
};


class circle :public point {
public:
	int r;
public:
	circle(int x, int y, int r = 0) :point(x, y) {
		this->r = r;
		cout << "circle()被调用" << endl;
	}
	virtual double area() {
		return 3.14 * r * r;
	}
	void show() {
		cout << r << endl;
	}
	~circle() {
		cout << "~circle()被调用" << endl;
	}
};



class cylinder :public circle {
private:
	double height;
public:
	cylinder(int x, int y, double r, double h) :circle(x, y, r) {
		height = h;
	}
	double area()
	{
		return 2 * circle::area() + 2 * 3.14 * r * height;
	}
	void show() {
		cout << height << endl;
	}
};


complex complex::operator +(complex A)
{
	return complex(this->real + A.real, this->image + A.image);
}
complex complex::operator ++()
{
	return complex(++real, image);
}
complex complex::operator ++(int)
{
	return complex(real++, image);
}
complex complex::operator= (complex A)
{
	this->real = A.real; this->image = A.image;
	return complex(real, image);
}
int main()
{
	cylinder c(100, 200, 10, 50);
	format* p;
	p = &c;
	p->show();
	cout << "s=" << p->area() << endl;
	circle cir(5, 10, 100);
	format& r = cir;
	r.show();
	system("pause");
	return 0;
}

