#include <iostream>
using namespace std;

class Cpeople{
public:  //访问修饰符
    int a;
    void fun(){
        cout<<a<<endl;
    }
};

int main(void){
    //声明一个类变量
    Cpeople no1;
    no1.a=12;
    no1.fun();

    //声明一个类指针
    Cpeople *no2 = new Cpeople;   //类似结构体，需要在堆区申请一块空间
    no2->a = 15;
    no2->fun();


    delete no2;

    return 0;

}