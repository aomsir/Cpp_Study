#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string name;
    int *age;

public:
    student(int *page){
        name = "aomsir";
        age = new int;
        *age = *page;
    }

    ~student(){
        delete age;
    }

    student(const student& stu){
        age = new int;
        name = stu.name;
        age = stu.age;
    }

    void print(){
        cout<<name<<' '<<*age<<endl;
    }

};
int main(){
    int ppage = 19;
    student stu1(&ppage);
    student stu2(stu1);
    stu1.print();
    stu2.print();
    cout<<&ppage<<endl;
    return 0;
}