#include <iostream>
#include <string>
using namespace std;

//声明Book结构体
struct Book{
    string ISDN;
    string name;
    string author;
    int prime;
};

int main(){
    struct Book a[5]={
            {"98765f45"," C++"," lily",43},
            {"98783m83"," Java"," Rose",25},
            {"98784k31"," Networking"," Nancy",35},
            {"98784y11"," Operation system"," Robort",48},
            {"98784p23"," Linux"," lisa",55}

    };

    for(int i = 0;i<5;i++){
        if(a[i].prime>=40){
            cout<<"书号: "<<a[i].ISDN<<" 书名: "<<a[i].name<<" 作者: "<<a[i].author<<" 价格: "<<a[i].prime<<endl;
        }
    }

    return 0;
}