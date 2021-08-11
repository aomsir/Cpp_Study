/*清理属性有指针变量*/

#include <iostream>
#include <string>
using namespace std;
class student{
private:
    string *name = new string();  //定义一个string类型的指针变量并为其申请空间
    int age;
    int ID;

public:
    student(){
        cout<<"请输入name："<<endl;
        cin>>*name;
        cout<<"请输入age："<<endl;
        cin>>age;
        cout<<"请输入ID："<<endl;
        cin>>ID;
        print();  //构造函数内调用print函数
    }

    ~student(){
        delete name;   //析构函数清理对象并清理为name申请的空间
    }
    void print();
};

void student::print(){
    cout<<"您的name是"<<*name<<endl;
    cout<<"您的age是"<<age<<endl;
    cout<<"您的ID是"<<ID<<endl;
}

int main(){
    student stu1;   //构造一个student类的对象

    return 0;
}