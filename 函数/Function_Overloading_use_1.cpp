//函数重载

#include <iostream>
using namespace std;
int Add(int a,int b);
double Add(double a,double b);

int main(void){
    cout<<Add(1,2)<<endl;
    cout<<Add(1.2,1.3)<<endl;

    return 0;
}

int Add(int a,int b){
    return a+b;
}

double Add(double a,double b){
    return a+b;
}