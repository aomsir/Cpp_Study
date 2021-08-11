#include <iostream>
#include <string>
using namespace std;
void Menu();
struct student{   //通讯录信息结构体
    string name;
    long ID;
    int classes;
    long PhoneNum;
    string HomeAddress;
    struct student *next;
};
student* add(student *phead);
void change(student *phead);
student* Delete(student *phead);
void check(student *phead);
void echo(student *phead);

int main(){
    student *head = NULL;   //主函数内的头指针
    int InputNum; //进入系统的控制数字


    while(1) {
        Menu();       //调用菜单函数
        cout<<"请输入相应数字：";
        cin>>InputNum;
        switch (InputNum) {
            case 0:
                cout << "欢迎下次使用" << endl;
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
                cout << "输入错误，请重新输入" << endl;
                break;
        }
    }
}



void Menu(){   //菜单输出函数
    cout<<"------------------《 学生通讯录管理系统菜单 》--------------------"<<endl;
    cout<<"-------------------输入0 退出系统-------------------------------"<<endl;
    cout<<"-------------------输入1 添加联系人-------------------------------"<<endl;
    cout<<"-------------------输入2 删除指定联系人---------------------------"<<endl;
    cout<<"-------------------输入3 修改指定联系人---------------------------"<<endl;
    cout<<"-------------------输入4 查询指定联系人---------------------------"<<endl;
    cout<<"-------------------输入5 输出通讯录---------------------------"<<endl;
}

student* add(student *phead){
    int StudentCount,i= 1; //学生人数及循环控制变量
    cout<<"请输入学生个数：";
    cin>>StudentCount;

    struct student *tail,*start;  //定义循环节点
    phead = tail = new (struct student);  //为phead和tail申请同一块动态空间

    cout<<"请依次输入第"<<i<<"个学生的姓名，学号，班级，电话号码，所在地址：";
    cin>>tail->name>>tail->ID>>tail->classes>>tail->PhoneNum>>tail->HomeAddress;
    for(i = 2;i <= StudentCount;i++){
        start = new (struct student);
        cout<<"请依次输入第"<<i<<"个学生的姓名，学号，班级，电话号码，所在地址：";
        cin>>start->name>>start->ID>>start->classes>>start->PhoneNum>>start->HomeAddress;
        tail->next = start;
        tail = start;
    }
    tail->next = NULL;

    return phead;
}

void change(student *phead) {
    long num;
    if (phead != NULL){
        cout << "请输入想要修改的同学的学号:";
        cin >> num;
        while (phead != NULL) {
            if (num == phead->ID) {
                cout << "查询到该学生啦，请依次修改，如若保持不变请将原数据重新输入" << endl;
                cout << "请修改该学生的姓名为:";
                cin >> phead->name;
                cout << "请修改该学生的学号为:";
                cin >> phead->ID;
                cout << "请修改该学生的电话为:";
                cin >> phead->PhoneNum;
                cout << "请修改该学生的班级为:";
                cin >> phead->classes;
                cout << "请修改该学生的寝室地址为:";
                cin >> phead->HomeAddress;
                cout << "修改成功" << endl;
                break;
            }
            if(phead->next == NULL){
                cout << "未查到此人，请退出重新查询" << endl;
            }
            phead = phead->next;
        }
    }
}

student* Delete(student *phead) {        //删除函数
    {
        long DelID;
        student *p3 = NULL;
        student *p1 = NULL, *p2 = NULL;
        if (phead != NULL) {
            cout << "请输入想要删除的学生学号:" << endl;
            cin >> DelID;
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
                cout << "删除编号：" << DelID << "成功" << endl;
                delete (p1);
            }
            else {
                p3 = phead;
                cout << "查无此人" << endl;
            }

        } else {
            cout << "通讯录中没有数据" << endl;
        }
        return p3;
    }
}

void check(student *phead){
    long CheckID;
    long CheckClasses;
    int methodID;
    cout<<"请输入您要查询的方式[输入1使用学号，输入2使用班级]:";
    cin>>methodID;
    switch (methodID) {
        case 1:
            cout<<"请输入该生学号：";
            while(phead != NULL){
                cin>>CheckID;
                if(CheckID == phead->ID){
                    cout<<"该学生信息如下"<<endl;
                    cout<<"姓名："<<phead->name<<endl;
                    cout<<"学号："<<phead->ID<<endl;
                    cout<<"班级："<<phead->classes<<endl;
                    cout<<"电话号码："<<phead->PhoneNum<<endl;
                    cout<<"寝室地址："<<phead->HomeAddress<<endl;
                }
                phead = phead->next;
            }
            break;
        case 2:
            cout<<"请输入该生班级：";
            while(phead != NULL){
                cin>>CheckClasses;
                if(CheckClasses == phead->classes){
                    cout<<"该学生信息如下"<<endl;
                    cout<<"姓名"<<phead->name<<endl;
                    cout<<"学号"<<phead->ID<<endl;
                    cout<<"班级"<<phead->classes<<endl;
                    cout<<"电话号码"<<phead->PhoneNum<<endl;
                    cout<<"寝室地址"<<phead->HomeAddress<<endl;
                }
                phead = phead->next;
            }
        default:
            cout<<"查无此人"<<endl;
    }
}

void echo(student *phead){
    cout<<"通讯录如下"<<endl;
    cout<<"姓名 "<<"学号 "<<"班级 "<<"手机号 "<<"地址 "<<endl;
    while(phead != NULL){
        cout<<phead->name<<" "<<phead->ID<<" "<<phead->classes<<" "<<phead->PhoneNum<<" "<<phead->HomeAddress<<endl;
        phead = phead->next;
    }
}