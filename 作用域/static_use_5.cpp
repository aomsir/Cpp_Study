#include <iostream>
using namespace std;

class R{
private:
    int R1,R2;
public:
    R(int r1,int r2){
        R1 = r1;
        R2 = r2;
    }
    void display(){   //display一般成员函数
        cout<<R1<<"-"<<R2<<endl;
    }
    void display() const{  //display常成员函数
        cout<<R1<<"+"<<R2<<endl;
    }
};

int main(){
    R a(10,20);   //声明R的普通对象
    a.display();

    const R b(12,24);  //声明R的常对象
    b.display();


    return 0;

}