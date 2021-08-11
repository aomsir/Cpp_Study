#include <iostream>
using namespace std;

class test{
private:
    int a;  //私有成员
public:
    void fun(int b);  //类内进行函数声明
};

//类外进行函数的定义，注意下面的::和参数及返回值一致
void test :: fun(int b){
        cout<<b<<endl;
}
int main(void){
    int b;
    test aaa;
    cin>>b;
    aaa.fun(b); //调用类的成员函数，也只有这么调用，因为数据在私有区域


    return 0;
}