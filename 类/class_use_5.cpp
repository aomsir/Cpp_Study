//无参数构造函数初解
#include <iostream>
using namespace std;

class student{
public:
    int a;
    student(){   //构造函数
        a = 13;
    }
};

int main(void){
    student stu1;  //申请普通栈区对象
    cout<<stu1.a<<endl;  //申请指针对象

    student *stu2 = new student;
    cout<<stu2->a<<endl;


    return 0;

}