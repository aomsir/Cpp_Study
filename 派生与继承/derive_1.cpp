#include <iostream>
#include <string>
using namespace std;

class person{
private:
    string name;
    int old;
public:
    person(){

    }

    ~person(){
        cout<<"析构结束"<<endl;
    }

    void SetPerson(string pname,int pold){
        old = pold;
        name = pname;
    }

    void printf(){
        cout<<name<<endl;
        cout<<old<<endl;
    }
};

class student:public person{
private:
    int ID;  //子类特有属性
public:
    void SetStudent(string pname,int pold,int pID){  //参数是把所有的内容传进来，然后依次给下面的基类成员函数复制，然后赋值给基类的私有
        SetPerson(pname,pold); //把对应参数的值传进基类的private成员，因为子类无法访问
        ID = pID;
    }

    void print(){  //调用这个函数的时候会依次调用基类的函数的对应函数
        printf();  //调用基类的成员函数，假如基类的成员函数名字和这个一样，功能也一样就需要加基类名::，如果不同名就直接写基类的成员函数名
        cout<<ID<<endl;
    }
};

int main(){
    student hxh;
    hxh.SetStudent("hxh",19,10101);
    hxh.print();

    return 0;
}