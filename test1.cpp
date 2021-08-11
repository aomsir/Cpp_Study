#include <iostream>   //这是输入和输出的头文件，知道要写就行
using namespace std;   //这是命名空间作用域，知道要写在这里就行
class A{
private:
    int a;  //这是数据成员
    float b;
public:
    void fun(){ //这是函数成员
        cout<<"我爱C++";
    }
};
class B:public A{
private:
    int aa;
public:
    void fun(){ //这是函数成员
        cout<<"我爱C";
    }
};
int main(void){
    B a;
    a.fun();
}