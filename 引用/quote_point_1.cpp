//指针引用实例

#include <iostream>
using namespace std;

int main(void){
    int a = 12;
    int *point = &a;
    int *(&p) = point;

    cout<<*p<<endl;

    return 0;
}