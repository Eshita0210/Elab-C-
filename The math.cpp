#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0) {real = r; imag = i;}
     Complex operator+(int a) {
        Complex res;
        res.real = real + a;
        res.imag = imag;
        return res;
    }
    Complex operator+(Complex obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + " << imag <<"i"<< endl; }
};

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Complex i1(a, b);
    Complex i2 = i1 + c;
    i1.print();
    i2.print();
    (i1+i2).print();
}
