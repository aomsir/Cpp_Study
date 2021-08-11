#include <iostream>
#include <string>
using namespace std;
string change(string& p); //

int main(){
   string b;
   cin>>b;
   change(b);
   cout<<b;
   return 0;
}

string change(string& p){
    int i;

    for(i=0;i<p.size();i++)
    {
        if (p[i] >= 48 && p[i] <= 57) {
            p[i] = (57-p[i]) + 48;  //57-*(p+i)代表该字符(数字)的十进制由9-x，然后再在十进制的基础上加48(数字0代表的AsCII十进制)
        }

        else if(p[i] >= 65 && p[i] <= 90)
        {
            p[i] = p[i] + 32;
        }

        else if(p[i] >= 97 && p[i] <= 122)
        {
            p[i] = p[i] - 32;
        }
    }

    return p;
}