#include <iostream>
using namespace std;

class Complex{
protected:
    double real,image;
public:
    Complex(double px,double py):real(px),image(py){};
    Complex operator+(Complex c){
        return Complex(real+c.real,image+c.image);
    }
    Complex operator-(Complex d){
        return Complex(real-d.real,image-d.image);
    }
    void print(){
        if(image < 0.0){
            cout<<"("<<real<<image<<"i"<<")"<<endl;
        }
        else
            cout<<"("<<real<<"+"<<image<<"i"<<")"<<endl;
    }
};

int main(){
    Complex a(1.8,-2.4);
    Complex b(4.3,4.7);
    Complex c = a+b;
    Complex d = a-b;
    c.print();
    d.print();

    return 0;
}