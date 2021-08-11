#include <iostream>
#include <string>
using namespace std;

class person{
private:
    string name;
    int old;
public:
    void SetPerson(string pname,int pold){
        old = pold;
        name = pname;
    }  //类似构造函数

    string Getname(){
        return name;
    }
    int Getold(){
        return old;
    }

    void printf(){  //基类的printf函数用来输出name和old
        cout<<"姓名："<<name<<endl;
        cout<<"年龄："<<old<<endl;
    }
};

class student:private person{
private:
    int ID;
public:
    void SetStudent(string pname,int pold,int pID){   //和基类的SetPerson函数的作用一样
        SetPerson(pname,pold);                        //调用基类函数的SetPerson函数同时把SetPerson传的参数传进去
        ID = pID;                                     //给ID变量赋值
    }

    int GetID(){
        return ID;
    }
    void printf(){
        cout<<"学号："<<ID<<endl;     //派生类重写printf函数，派生类对象调用的时候就会按照重写后的来，而不会按照基类的
    }

    string Getname(){
        return person::Getname();    //派生类重写Getname函数，返回时调用基类的Getname函数的返回值，而不是通过派生类里面的Getname函数直接返回name的值，因为是不可访问，所以基类派生类的对象调用函数的时候会直接返回基类私有的的值
    }
    int Getold(){
        return person::Getold();   //与上面同理
    }
};
int main(){
    student stu1;   //定义一个派生类对象stu1
    stu1.SetStudent("hxh",19,266831);  //通过student这个派生类的
    cout<<"姓名："<<stu1.Getname()<<endl;  //通过stu1对象的Getname函数进行输出
    cout<<"年龄："<<stu1.Getold()<<endl;   //通过stu1对象的Getold函数进行输出
    stu1.printf();                        //通过调用stu1对象的printf函数
    return 0;
}