//C++内联函数写法

#include <iostream>
using namespace std;
inline float average(float a,float b,float c);  //内联函数就是在前边加上一个inline

int main(void){
    int a1,a2,a3;

    cin>>a1>>a2>>a3;
    cout<<average(a1,a2,a3)<<endl;
}

float average(float a,float b,float c){
    float average;
    average = (a+b+c)/3;
    return average;
}