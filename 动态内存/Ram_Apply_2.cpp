//动态内存分配实例

#include <iostream>
using namespace std;

int main(void){
    int *p = new int[5];   //在堆区申请一块内存，int类型，并初始化为0
    int *p1 = new int(0);  //在堆区申请一块内存，整型数组类型，并申请5个元素

    *(p+0) = 1;  //给数组内各个元素赋值
    *(p+1) = 2;
    *(p+2) = 3;
    *(p+3) = 4;
    *(p+4) = 5;

    cout<<*p1<<endl;  //输出各个的值
    cout<<*(p+0)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;

    delete []p;  //释放申请的整型数组内存
    delete p1;   //释放申请的整型的内存

    return 0;
}