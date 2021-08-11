#include <iostream>
using namespace std;
class Test_A{
private:
    int a;
    int b;
public:
    Test_A(){
        cout<<"请输入a："<<endl;
        cin>>a;
        cout<<"请输入b："<<endl;
        cin>>b;
        //cout<<"a的值为："<<a<<endl;
        //cout<<"b的值为："<<b<<endl;
        print();
    }
    void print();
    ~Test_A(){};
};

void Test_A::print() {
    cout<<"a的值为："<<a<<endl;
    cout<<"b的值为："<<b<<endl;
}
 Test_A fun1(){
    Test_A A;
    return A;
};

int main(void){
    Test_A a1 = fun1();
}