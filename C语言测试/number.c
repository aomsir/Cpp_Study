#include <stdio.h>

int main(void){
    int number;  //这个数字
    int num_w,num_q,num_b,num_s,num_g; //分别代表万千百十个位
    printf("请输入一个五位数：");
    scanf("%d",&number);

    num_w = number / 10000 % 10; //先除10000，就只剩下万位数了，然后取余，也就是这个数字本身
    num_q = number / 1000 % 10;  //先除1000，就只剩下万位数和千位数组成的一个数字，再取余就是千位了
    num_b = number / 100 % 10;  //百位数没有什么用
    num_s = number / 10 % 10;
    num_g = number / 1 % 10;

    if(num_w == num_g && num_q == num_s) {
        printf("%d是一个回文数", number);
    }
    else{
        printf("%d是不一个回文数", number);
    }


    return 0;


}
