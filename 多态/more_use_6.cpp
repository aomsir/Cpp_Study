#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int px = 0,int py = 0):x(px),y(py){
        //xxxx
    };
    void print();
    Point operator++();  //前缀++运算符重载
    Point operator++(int); //后缀++的运算符重载
};

void Point::print() {
    cout<<"("<<x<<","<<y<<")"<<endl;
}

Point Point::operator++() {
    x++;   //前缀++，先返回++后的值
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point old = *this;   //后缀++，返回++前的值
    x++;
    y++;
    return old;
}

int main(){
    Point a(3,4),b,c;
    cout<<"a的坐标:"<<endl;
    a.print();
    b=a++;
    cout<<"执行b=a++后:"<<endl;
    cout<<"a的坐标:"<<endl;
    a.print();
    cout<<"b的坐标:"<<endl;
    b.print();
    c=++a;
    cout<<"执行c=++a后:"<<endl;
    cout<<"a的坐标:"<<endl;
    a.print();
    cout<<"c的坐标:"<<endl;
    c.print();
    return 0;
}