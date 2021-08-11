#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>
#include <string.h>
/*以下是通讯录信息结构体*/
struct student{
    char name[20];
    long ID;
    int classes;
    long PhoneNum;
    char HomeAddress[30];
    struct student *next;
};

/*以下是函数声明*/
void Menu();
struct student* add(struct student *phead);
void change(struct student *phead);
struct student* Delete(struct student *phead);
void check(struct student *phead);
void echo(struct student *phead);

int main(){
    struct student *head = NULL;   //主函数内的头指针
    int InputNum; //进入系统的控制数字

    while(1) {
        Menu();       //调用菜单函数
        printf("请输入相应数字：");
        scanf("%d",&InputNum);
        switch (InputNum) {
            case 0:
                printf("欢迎下次使用\n");
                exit(1);
            case 1:
                head = add(head);
                break;
            case 2:
                head = Delete(head);
                break;
            case 3:
                change(head);
                break;
            case 4:
                check(head);
                break;
            case 5:
                echo(head);
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    }
}



void Menu(){   //菜单输出函数
    printf("------------------《 学生通讯录管理系统菜单 》---------------------\n");
    printf("-------------------输入0 退出系统-------------------------------\n");
    printf("-------------------输入1 添加联系人------------------------------\n");
    printf("-------------------输入2 删除指定联系人---------------------------\n");
    printf("-------------------输入3 修改指定联系人---------------------------\n");
    printf("-------------------输入4 查询指定联系人---------------------------\n");
    printf("-------------------输入5 输出通讯录------------------------------\n");
}

struct student* add(struct student *phead){
    int StudentCount,i= 1; //学生人数及循环控制变量
    printf("请输入学生个数：");
    scanf("%d",&StudentCount);

    struct student *tail,*start;  //定义循环节点
    phead = tail = (struct student*)malloc(sizeof(struct student));  //为phead和tail申请同一块动态空间

    printf("请依次输入第%d个学生的姓名: ",i);
    scanf("%s",phead->name);

    printf("请依次输入第%d个学生的学号: ",i);
    scanf("%ld",&phead->ID);

    printf("请依次输入第%d个学生的班级: ",i);
    scanf("%d",&phead->classes);

    printf("请依次输入第%d个学生的电话号码: ",i);
    scanf("%ld",&phead->PhoneNum);

    printf("请依次输入第%d个学生的所在地址: ",i);
    scanf("%s",phead->HomeAddress);

    for(i = 2;i <= StudentCount;i++){
        start = (struct student*)malloc(sizeof(struct student));
        printf("请依次输入第%d个学生的姓名: ",i);
        scanf("%s",start->name);

        printf("请依次输入第%d个学生的学号: ",i);
        scanf("%ld",&start->ID);

        printf("请依次输入第%d个学生的班级: ",i);
        scanf("%d",&start->classes);

        printf("请依次输入第%d个学生的电话号码: ",i);
        scanf("%ld",&start->PhoneNum);

        printf("请依次输入第%d个学生的所在地址: ",i);
        scanf("%s",start->HomeAddress);
        tail->next = start;
        tail = start;
    }
    tail->next = NULL;

    return phead;
}

void change(struct student *phead) {
    long num;
    if (phead != NULL){
        printf("请输入想要修改的同学的学号:");
        scanf("%ld",&num);
        while (phead != NULL) {
            if (num == phead->ID) {
                printf("查询到该学生啦，请依次修改，如若保持不变请将原数据重新输入\n");
                printf("请修改该学生的姓名为:");
                scanf("%s",phead->name);
                printf("请修改该学生的学号为:");
                scanf("%ld",&phead->ID);
                printf("请修改该学生的电话为:");
                scanf("%ld",&phead->PhoneNum);
                printf("请修改该学生的班级为:");
                scanf("%d",&phead->classes);
                printf("请修改该学生的寝室地址为:");
                scanf("%s",phead->HomeAddress);
                printf("修改成功\n");
                break;
            }
            if(phead->next == NULL){
                printf("未查到此人，请退出重新查询\n");
            }
            phead = phead->next;
        }
    }
}

struct student* Delete(struct student *phead){        //删除函数
        long DelID;
        struct student *p3 = NULL;
        struct student *p1 = NULL, *p2 = NULL;
        if (phead != NULL) {
            printf("请输入想要删除的学生学号:");
           scanf("%ld",&DelID);
            p1 = phead;    //将p1指针指向链表头指针
            while (DelID != p1->ID && p1->next != NULL) {
                p2 = p1;
                p1 = p1->next;
            }
            if (DelID == p1->ID)
            {
                if (p1 == phead)
                {
                    p3 = p1->next;
                }
                else
                {
                    p2->next = p1->next;
                    p3 = phead;
                }
                printf("删除编号：%ld成功",DelID);
                free(p1);
            }
            else {
                p3 = phead;
                printf("查无此人\n");
            }

        } else {
            printf("通讯录中没有数据\n");
        }
        return p3;
}

void check(struct student *phead){
    long CheckID;
    int CheckClasses;
    int methodID;
    printf("请输入您要查询的方式[输入1使用学号，输入2使用班级]:");
    scanf("%d",&methodID);
    switch (methodID) {
        case 1:
            printf("请输入该生学号：");
            while(phead != NULL){
                scanf("%ld",&CheckID);
                if(CheckID == phead->ID){
                    printf("该学生信息如下");
                    printf("姓名: %s\n",phead->name);
                    printf("学号: %ld\n",phead->ID);
                    printf("班级: %d\n",phead->classes);
                    printf("电话号码: %ld\n",phead->PhoneNum);
                    printf("寝室地址: %s\n",phead->HomeAddress);
                }
                phead = phead->next;
            }
            break;
        case 2:
            printf("请输入该生班级：");
            while(phead != NULL){
                scanf("%d",&CheckClasses);
                if(CheckClasses == phead->classes){
                    printf("该学生信息如下");
                    printf("姓名: %s",phead->name);
                    printf("学号: %ld",phead->ID);
                    printf("班级: %d",phead->classes);
                    printf("电话号码: %ld",phead->PhoneNum);
                    printf("寝室地址: %s",phead->HomeAddress);
                }
                phead = phead->next;
            }
        default:
            printf("查无此人\n");
    }
}

void echo(struct student *phead){
    printf("通讯录如下\n");
    printf("姓名 学号 班级 手机号 地址 \n");
    while(phead != NULL){
        printf("%s %ld %d %ld %s\n",phead->name,phead->ID,phead->classes,phead->PhoneNum,phead->HomeAddress);
        phead = phead->next;
    }
}