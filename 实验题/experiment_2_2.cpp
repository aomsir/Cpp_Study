#include<iostream>
using namespace std;
class complex {
public:
    complex(int preal,int pempty){   //complex类的构造函数
        real = preal;
        empty = pempty;
    }
    complex add(complex a){   //这是一个返回值为复数的相加函数！！！
        real = real + a.real;  //将传进函数来的实部与该对象的实部相加
        empty = empty + a.empty;  //将传进函数来的虚部与该对象的虚部相加

        return *this;
    }
    void display() {  //输出函数
        cout << real << "为实部" << empty << "为虚部" << endl;

    }

private:
    int real;
    int empty;
    //int numreal, numempty;
};
int main() {
    complex a(1, 2);
    complex b(1,2);

    a.add(b);
    a.display();
    complex c = a.add(b);
    return 0;
}