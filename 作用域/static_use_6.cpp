#include <iostream>
using namespace std;
float getAverage(const float *,int);
int main(){
    float score[20] = {78,89,90,98,90,98,88,89,87,89,77,88,77,89,67,87,89,87,99,90};
    cout<<getAverage(score,20)<<endl;
    return 0;
}

float getAverage(const float *p,int len){    //传的常指针，这样就只能访问指向的数组，而不能修改
    float score = 0;
    for(int i = 0;i < len;i++){
        score += p[i];
    }
    return score/len;
}

/*
float getAverage(const float *p,int len){    //传的常指针，这样就只能访问指向的数组，而不能修改
    float score = 0;
    for(int i = 0;i < len;i++){
        score += p[i] = 0;
    }
    return score/len;


假如写成这种形式的话，看=具体看22行，这样的话score里面的所有数据都会被修改为0，这样最后平均成绩也就为0
}*/
