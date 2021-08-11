
#include <iostream>
#include <string>
using  namespace std;

class test{
private:
    int a = 12;
    string name = "aomsir";

public:
    int test1(){
        return a;
    }

    string test2(){
        return name;
    }
};

int main(void){
    test no1;
    cout<<no1.test1()<<endl;
    cout<<no1.test2()<<endl;

    return 0;
}