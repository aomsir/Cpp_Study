/*复制构造函数的使用1*/


#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string name;
    int age;

public:
    student(string pname,int page){
        name = pname;
        age = page;
    }

    void print(){
        cout<<name<<' '<<endl;
        cout<<age<<' '<<endl;
    }

    ~student(){

    };
};

int main(){
    student stu1("aomsir",18);
    student stu2(stu1);
    stu1.print();
    stu2.print();



    return 0;
}