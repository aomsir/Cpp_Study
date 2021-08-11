#include <iostream>
using namespace std;
class A{
public:
    int a;
    void fun0(){
        cout<<"A function is called"<<endl;
    }
    A(){
        cout<<"construct A"<<endl;
    }
    ~A(){
        cout<<"destruct A"<<endl;
    }
};

class B1: virtual public A{
public:
    int b1;
    B1(){
        cout<<"construct B1"<<endl;
    }
    ~B1(){
        cout<<"destruct B1"<<endl;
    }
};

class B2: virtual public A{
public:
    int b1;
    B2(){
        cout<<"construct B2"<<endl;
    }
    ~B2(){
        cout<<"destruct B2"<<endl;
    }
};

class C: public B1,public B2{
public:
    int c;
    void fun(){
        cout<<"C function is called"<<endl;
    }
    C(){
        cout<<"construct C"<<endl;
    }
    ~C(){
        cout<<"destruct C"<<endl;
    }
};
int main(){
    C c;
    //c.B1::a = 10;
    c.B1::fun0();
    //c.B2::a = 20;
    c.B2::fun0();

    return 0;
}