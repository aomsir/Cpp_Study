#include <iostream>
using namespace std;
class student{
private:
    int a;
public:
    student(){
        a = 12;
        cout<<a<<endl;
    }
};
int main(void){
    student stu1;     //这里就已经构造对象并且调用了构造函数，所以下面的引用不会再次调用构造函数进行打印内容
    student &stu2 = stu1;   //声明stu2去引用stu1



    return 0;

}