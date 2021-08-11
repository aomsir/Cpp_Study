#include <iostream>
#include <string>

using namespace std;
struct student{    //学生基本信息的结构体
    string name;
    int ID;
    int classs;
    int MathScore;
    int EnglishScore;
    int ComputerScore;
    struct student *next;
};
void Checkid(student *pstart);
void Checkname(student *pstart);
void Menu();
void Out(student *pstart);

int main(){
    int StudentCount; //学生人数










    return 0;
}



void Checkid(student *pstart){    //通过学号查询的函数
    int CheckID;
    cout<<"请输入您要查询的学号:";
    cin>>CheckID;
    cout<<endl;
    while(pstart != NULL){
        if(CheckID == pstart->ID){
            cout<<"该学生信息如下"<<endl;
            cout<<"姓名"<<pstart->name<<endl;
            cout<<"学号"<<pstart->ID<<endl;
            cout<<"班级"<<pstart->classs<<endl;
            cout<<"数学成绩"<<pstart->MathScore<<endl;
            cout<<"英语成绩"<<pstart->EnglishScore<<endl;
            cout<<"计算机成绩"<<pstart->ComputerScore<<endl;
        }

        pstart = pstart->next;
    }
}

void Checkname(student *pstart){   //通过姓名查询的函数
    string CheckName;
    cout<<"请输入您要查询的姓名:";
    cin>>CheckName;
    cout<<endl;
    while(pstart != NULL){
        if(CheckName == pstart->name){
            cout<<"该学生信息如下"<<endl;
            cout<<"姓名"<<pstart->name<<endl;
            cout<<"学号"<<pstart->ID<<endl;
            cout<<"班级"<<pstart->classs<<endl;
            cout<<"数学成绩"<<pstart->MathScore<<endl;
            cout<<"英语成绩"<<pstart->EnglishScore<<endl;
            cout<<"计算机成绩"<<pstart->ComputerScore<<endl;
        }

        pstart = pstart->next;
    }
}

void Menu(){   //控制台输出的函数
    cout<<"********************************"<<endl;
    cout<<"******欢迎来到学生成绩管理系统******"<<endl;


    printf("********************************");

}

void Out(student *pstart){
    cout<<"所有学生信息如下"<<endl;
    cout<<"姓名 "<<"学号 "<<"班级 "<<"数学成绩 "<<"英语成绩 "<<"计算机成绩"<<endl;
    while(pstart != NULL){
        cout<<pstart->name<<"  "<<pstart->ID<<"  "<<pstart->classs<<"   "<<pstart->MathScore<<"     "<<pstart->EnglishScore<<"       "<<pstart->ComputerScore<<endl;
        pstart = pstart->next;
    }


}

void ClassNalyse(student *pstart,student *phead,int pCount){  //成绩分析函数
    double MathAverage,EngAverage,ComAverage;  //各科平均成绩
    int MathTotal = 0,EngTotal = 0,ComTotal = 0;  //各科成绩总分
    int MathCount = 0,EngCount = 0,ComCount = 0;   //各科及格人总数
    double MathRate,EngRate,ComRate;   //各科及格率

    while(pstart != NULL){    //求各科所有人的总分
        MathTotal += pstart->MathScore;
        EngTotal += pstart->EnglishScore;
        ComTotal += pstart->ComputerScore;
        pstart = pstart->next;
    }
    pstart = phead;  //将pstart指针重新指向头指针

    while(pstart != NULL){     //求各科及格人数
        if(pstart->MathScore >= 60){
            MathCount++;
        }
        else if(pstart->EnglishScore >= 60){
            EngCount++;
        }
        else if(pstart->ComputerScore >= 60){
            ComCount++;
        }
        pstart = pstart->next;
    }
    pstart = phead;  //将pstart指针重新指向头指针

    student ;









    /*求各科平均分*/
    MathAverage = MathTotal/pCount;
    EngAverage = EngTotal/pCount;
    ComAverage = ComTotal/pCount;

    /*求各科及格率*/
    MathRate = MathCount/pCount;
    EngRate = EngCount/pCount;
    ComRate = ComCount/pCount;

    /*这里用于输出各科的成绩分析的*/
    cout<<"该班数学平均成绩为: "<<MathAverage<<"  "<<"及格率:"<<MathRate<<"  "<<"最高分:"<<"这里填最高分的"<<"最低分:"<<"这里填最低分的"<<endl;
    cout<<"该班英语平均成绩为: "<<MathAverage<<"  "<<"及格率:"<<MathRate<<"  "<<"最高分:"<<"这里填最高分的"<<"最低分:"<<"这里填最低分的"<<endl;
    cout<<"该班计算机平均成绩为:"<<MathAverage<<"  "<<"及格率:"<<MathRate<<"  "<<"最高分:"<<"这里填最高分的"<<"最低分:"<<"这里填最低分的"<<endl;
}

student* add(){
    int i = 1;  //链表控制变量
    /*以下代码是成绩的输入*/
    cout<<"请输入您的学生个数:";
    cin>>StudentCount;
    struct student *head;  //定义链表头指针
    struct student *tail,*start;  //定义循环节点
    head = tail = new (struct student);
    cout<<"请依次输入第"<<i<<"个学生的姓名，学号，班级，数学成绩，英语成绩，计算机成绩:";
    cin>>tail->name>>tail->ID>>tail->classs>>tail->MathScore>>tail->EnglishScore>>tail->ComputerScore;
    for(i = 2;i <= StudentCount;i++){
        start = new (struct student);
        cout<<"请依次输入第"<<i<<"个学生的姓名，学号，班级，数学成绩，英语成绩，计算机成绩:";
        cin>>tail->name>>tail->ID>>tail->classs>>tail->MathScore>>tail->EnglishScore>>tail->ComputerScore;
        tail->next = start;
        tail = start;
    }
    tail->next = NULL;
    start = head; //将start指针指到head指针上，等下用start指针进行循环遍历
}







