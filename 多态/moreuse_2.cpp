#include <iostream>
using namespace std;

class mybase{
private:
    int a,b;
public:
    mybase(int x,int y){
        a = x;
        b = y;
    }
    virtual void show(){
        cout<<"基类 mybase："<<endl;
        cout<<a <<" "<<b<<endl;
    }
};

class myclass: public mybase{
private:
    int c;
public:
    myclass(int x,int y,int z):mybase(x,y){
        c = z;
    }
    void show(){
        cout<<"派生类 myclass："<<endl;
        cout<<"c = "<<c<<endl;
    }
};

int main(){
    mybase mb(50,50),*mp;
    myclass mc(10,20,30);
    mp = &mb;
    mp->show();
    mp = &mc;
    mp->show();

    getchar();
    return 0;



    /*运行结果*/
    /*基类 mybase：
      50 50
      派生类 myclass：
      c = 30
    */

}