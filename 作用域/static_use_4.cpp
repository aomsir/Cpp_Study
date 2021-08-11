#include <iostream>
using namespace std;


class test{
private:
    static int count;
public:
    test(){
        count++;
    }

    static void print(){
        cout<<count<<endl;
    }
};

int test::count = 0; //给类中数据成员进行初始化

int main(){
   /* test a;
    a.print(); //这里输出1
    test b;
    b.print();  //这里输出2*/
    test::print();
    return 0;
}