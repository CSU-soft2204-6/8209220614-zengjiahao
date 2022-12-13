#include<iostream>
using namespace std;
class complex {
public:
	double real;
	double image;
public:
	complex() {
		real = 0;
		image = 0;
	}
	complex(double Real, double Image) {
		this->real = Real;
		this->image = Image;
	}
	void display() {
		cout << "real=" << this->real << "\t" << "image=" << this->image << endl;
	}

	friend complex operator +(complex A, complex B) {
		return complex(A.real + B.real, A.image + B.image);
	}//友元函数？？？？？
	
	friend complex operator ++(complex& A) {
		return complex(A.real++, A.image);
	}//只加实部不加虚部；

	friend complex operator *(complex A, complex B) {
		return complex(A.real * B.real - A.image * B.image, A.image * B.real + B.image + A.real);
	}
};

int main() {

	complex A(3.4, 6.7);
	A.display();
	complex B(9.2, 0.7);
	B.display();
	complex C = ++A;
	C.display();
	complex D = A * B;
	D.display();


	system("pause");
	return 0;
}