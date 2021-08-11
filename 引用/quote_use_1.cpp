#include <iostream>
using namespace std;

int main(void){
    int a = 12;
    int &b = a;
    const int &c = 14;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}