//链表的基础使用

#include <iostream>
using namespace std;

//定义一个结构体数据类型
struct student{
    long num;
    float score;
    struct student *next;  //尾节点
};

int main(){
    int n,i;  //链表长度及循环控制变量

    cout<<"请输入链表长度"<<endl;
    cin>>n;

    struct student *head;  //定义头指针
    struct student *start,*tail;  //定义初始节点以及


    head = tail = new(struct student);
    cout<<"请输入学号 分数"<<endl;
    cin>>tail->num>>tail->score;

    for(i=2;i<=n;i++){
        start = new(struct student);
        cout<<"请输入学号 分数"<<endl;
        cin>>start->num>>start->score;
        tail->next = start;  //将头指针的尾节点指向下一结构体指针
        tail = start; //将
    }

    tail->next = NULL;  //将最后一个节点的尾指针赋值为空
    start = head;       //将start指向头指针
    while(start != NULL){
        cout<<"学号："<<start->num<<" 分数："<<start->score<<endl;
        start = start->next;   //输出结束之后就把这个指针指向里面的尾指针，即指向下一节点的首地址
    }

    return 0;
}

