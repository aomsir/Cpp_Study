#include <stdio.h>

int my_strlen1(const char *str){

    assert(str);

    int count = 0;

    while(*str++){

        count++;

    }

    return count;

}

int main(void){

}