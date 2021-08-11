//带参数的构造函数

#include <iostream>
using namespace std;
class student{
public:
    int age;
    string name;

    student(int a,string test){
        age = a;
        name = test;
    }
};

int main(void){
    int a;
    string test;
    cout<<"请输入age："<<endl;
    cin>>a;
    cout<<"请输入姓名："<<endl;
    cin>>test;

    student *stu1 = new student(a,test);  //声明一个类的指针变量，在申请内存的同时传入参数
    student stu2(a,test);  //声明一个类的普通变量，在声明的时候就给构造函数传入参数
    student &stu3 = stu2;  //声明引用stu3去引用stu2

    cout<<stu1->age<<endl;
    cout<<stu1->name<<endl;

    cout<<stu2.age<<endl;
    cout<<stu2.name<<endl;

    cout<<stu3.age<<endl;
    cout<<stu3.name<<endl;

    return 0;
}