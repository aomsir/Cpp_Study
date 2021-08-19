#include <stdio.h>
int test(int);
int main(){
    int a;
    printf(test(12));
}

int test(int a){
    return a > 12 ? a : -a;
}