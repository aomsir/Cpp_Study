#include <iostream>
using namespace std;
int count_calls();

int main(){
    for(int i = 0;i < 10;++i){
        cout<<count_calls()<<endl;
    }


    return 0;
}

int count_calls(){
    /*int n;
    int m = 0;
    m = 0;*/
    static int count = 0;
    return ++count;
}