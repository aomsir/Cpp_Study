#include <stdio.h>
int main(){
    __unused long l1;
    __unused long l2 = 1111111121L;

    printf(sizeof(l1));
    printf(sizeof(l2));
    printf(sizeof(long));
}