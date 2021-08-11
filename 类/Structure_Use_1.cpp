#include <iostream>
#include <string>
using namespace std;

struct stu{
    char name[20];
};

int main(void){
    struct stu stu1;
    strcpy(stu1.name,"aomsir");
    cout<<stu1.name<<endl;

    return 0;
}