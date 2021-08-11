//带默认参数的函数

#include <iostream>
using namespace std;
int add(int a,int b = 12);  //在函数声明的时候进行形参初始化

int main(void){
    cout<<add(3)<<endl;
    cout<<add(3,2)<<endl;
    return 0;
}

int add(int a,int b){
    return a+b ;
}