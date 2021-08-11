//友元的理解

#include <iostream>
#include <string>
using namespace std;
void test();

//定义一个teacher类
class teacher{
private:
    string name;
    int old;
    void fun1(){
        name = "aomsir";
        old = 19;
        cout<<name<<' '<<old<<endl;
    }

    friend class student;   //给student类加友元，即加白名单
    friend void test();     //给test函数加又元，即加白名单
};

class student{
public:
    teacher tea1;   //在student类里面声明一个teacher类变量
    void fun2(){
        tea1.fun1();   //在student类里面通过tea1变量访问fun1函数
    }
};

void test(){
    teacher tea1;
    tea1.fun1();
}

int main(void){
    student stu1;
    stu1.fun2();

    test();
}