#include <iostream>
using namespace std;
class complex{
private:
    double real,image;
public:
    complex(double r=0.0,double i=0.0):real(r),image(i){};
    ~complex(){};
    friend complex operator+ (double c1,const complex & c2);
    friend complex operator- (double c1,const complex & c2);
    void print() const;
};

void complex::print() const {
    cout<<"("<<real<<","<<image<<")"<<endl;
}

complex operator+ (double c1,const complex & c2){
    return complex(c1+c2.real,c2.image);
}

complex operator- (double c1,const complex & c2){
    return complex(c1-c2.real,-c2.image);
}

int main(){
    complex c1(3,4),c2;
    c2 =4+c1;
    cout<<"4+";
    c1.print();
    cout<<"结果为:";
    c2.print();
    c2 =4-c1;
    cout<<"4-";
    c1.print();
    cout<<"结果为:";
    c2.print();

    return 0;
}