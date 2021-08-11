#include <iostream>
#include <string>
using namespace std;
void change(char *p);

int main(){
    char b[30];

    cout<<"请输入您的字符：";

    cin>>b;

    change(b);

    cout<<b;
}

void change(char *p){
    int i;
    //int temp1,temp2;
    //char temp3;
    for(i=0;i<30;i++)
    {
        if (*(p + i) >= 48 && *(p + i) <= 57) {
            *(p+i) = (57-*(p+i)) + 48;  //57-*(p+i)代表该字符(数字)的十进制由9-x，然后再在十进制的基础上加48(数字0代表的AsCII十进制)
        }

        else if(*(p + i) >= 65 && *(p + i) <= 90)
        {
            *(p+i) = *(p+i) + 32;
        }

        else if(*(p + i) >= 97 && *(p + i) <= 122)
        {
            *(p+i) = *(p + i) - 32;
        }
    }
}

