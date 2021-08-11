//证明结构体是特殊的类，结构体默认的访问修饰符是public，当修改为private后就无法在主函数内进行成员访问
#include <iostream>
#include <string>
using namespace std;

struct stu{
private:
    string name;
    int year;
};

int main(void){
    struct stu stu1;
    stu1.name = "aomsir";
    cout<<stu1.name<<endl;

    return 0;
}