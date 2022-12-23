#include <iostream>
using namespace std;
class Complex {
public:
    double real;
    double image;
public:Complex() {
    real = 0;
    image = 0;
}
      Complex(double t_real, double t_image) {
          this->real = t_real;
          this->image = t_image;
      }
      void disply() {
          cout << "real=" << this->real << ";image=" << this->image << endl;
      }
      friend Complex operator +(Complex A, Complex B) {
          return Complex(A.real + B.real, A.image + B.image);
      }
      friend Complex operator ++(Complex& A) {
          return Complex(++A.real, A.image);
      }
      friend Complex operator ++(Complex& A, int) {
          return Complex(++A.real, A.image);
      }
};
int main(double sid1, double sid2, double sid3)
{
    Complex comp1;
    comp1.real = 1.0;
    comp1.image = 1.0;
    comp1.disply();

    Complex comp2(2.0, 2.0);
    comp2.disply();
    Complex comp3 = comp1 + comp2;
    comp3.disply();
    Complex comp4 = comp3++;

    comp4.disply();
    system("pause");
}