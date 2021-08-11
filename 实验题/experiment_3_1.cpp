#include <iostream>
using namespace std;

class A{
private:
    int i1;
protected:
    int j1;
public:
    void f1();
    A(){
        cout<<"A constructor"<<endl;
        i1 = 10;
        j1 = i1;
        cout<<"i1="<<i1<<" j1="<<j1<<endl;
    }

    ~A(){
        cout<<"A Destructor"<<endl;
    }
};

class B:private A{
private:
    int i2;
protected:
    int j2;
public:
    void f2();
    B(){
        cout<<"B Constructor"<<endl;
        i2 = 20;
        j2 = 21;
        cout<<"i2="<<i2<<" j2="<<j2<<endl;
    }

    ~B(){
        cout<<"B Destructor"<<endl;
    }
};

class C: public B{
private:
    int i3;
protected:
    int j3;
public:
    void f3();
    C(){
        cout<<"C Constructor"<<endl;
        i3 = 20;
        j3 = 21;
        cout<<"i3="<<i3<<" j3="<<j3<<endl;
    }

    ~C(){
        cout<<"C Destructor"<<endl;
    }
};

int main(){
    A a;
    B b;
    C c;
}