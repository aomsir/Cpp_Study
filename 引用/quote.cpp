//引用

#include <iostream>
using namespace std;

int main(void){
    int a = 12;
    int &quote = a;  //声明quote是a的引用
    cout<<a<<" "<<quote<<endl;
    quote = 30;
    cout<<a<<" "<<quote<<endl;

    cout<<&a<<" "<<&quote<<endl;
}