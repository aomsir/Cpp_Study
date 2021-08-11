#include <stdio.h>
void menu();
void save(int score[10][3]);
void scoreave(int score[10][3]);
void paixu(int score[10][3]);
int main(void){
    int score[10][3];
    int i,j;
    int inputnum;
    for(i=0;i<9;i++){
        for(j=0;j<2;j++){
            printf("请输入第%d个学生的第%d项成绩:",i+1,j+1);
            scanf("%d",score[i][j]);
        }
    }
    menu();
    scanf("%d",&inputnum);
    switch (inputnum) {
        case 1:
            save(score[10][3]);
            break;
        case 2:
            scoreave(score[10][3]);
            break;
        case 3:
            paixu(score[10][3]);
            break;
    }
}


void menu(){
    printf("-----学生成绩管理系统-----\n");
    printf("-----1.输出每个学生的平均分-----\n");
    printf("-----2.输出每门课的平均分-----\n");
    printf("-----3.按学生平均成绩降序输出信息-----\n");
    printf("请输入数字进行下一步操作:");
}

void save(int score[10][3]){   //求学生的平均成绩
    int i,j;
    int sum[10] = {0};
    float ave[10];
    for(i=0;i<9;i++){  //求每个学生的成绩总和
        for(j=0;j<2;j++){
            sum[i]+=score[i][j];
        }
    }

    for(i=0;i++;i<9){
        ave[i] = sum[i] / 3;
    }

    for(i=0;i<9;i++){
        printf("第i个学生的平均成绩是：%f",i,ave[i]);
    }
}

void scoreave(int score[10][3]){
    int i,j;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    float ave1,ave2,ave3;
    for(i=0;i<9;i++){
        sum1 += score[i][1];
    }
    for(i=0;i<9;i++){
        sum2 += score[i][2];
    }
    for(i=0;i<9;i++){
        sum3 += score[i][3];
    }
    ave1 = sum1/10;
    ave1 = sum2/10;
    ave1 = sum3/10;

    printf("第1门的班级平均分为：%f",ave1);
    printf("第2门的班级平均分为：%f",ave2);
    printf("第3门的班级平均分为：%f",ave3);
}

void paixu(int score[10][3]){
    int i,j;
    int sum[10] = {0};
    float temp;
    float ave[10];
    for(i=0;i<9;i++){  //求每个学生的成绩总和
        for(j=0;j<2;j++){
            sum[i]+=score[i][j];
        }
    }

    for(i=0;i++;i<9){
        ave[i] = sum[i] / 3;
    }

    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(ave[j]<ave[j+1]){
                temp = ave[j];
                ave[j] = ave[j+1];
                ave[j+1] = ave[j];
            }
        }
    }

    for(i=0;i<9;i++){
        printf("第%d名的平均分是%i",i+1,ave[i]);
    }
}


