#include <time.h>     /*??????*/
#include <stdio.h>
#include <math.h>
/*#include <windows.h>
#include <conio.h>*/
int eachyeartotal(int year,int month,int day); /*????*/
int counterdays(int year,int month,int day);
int nowtime(int year,int month,int day);
int week(int year,int month,int day);
int maxDay(int year,int month);
int isleap(int year);
void whatweek(int year,int month,int day);
void display1(int year,int month,int day) ;
void display2(int year,int month,int day) ;
void jieri(int month,int day);
void getmenu();
int main()                              /*???*/
{
  int year,month,day,select;
  while(1)
  {
      getmenu();
      printf(" ???1,2,3!   ??: ");         /*???? */
      scanf("%d",&select);
      system("cls");
      switch(select){
          case 1:                      /*????1?????*/
            printf("  ??????????????????(???????):");
            scanf("%d,%d,%d",&year,&month,&day);
            if(year>0&&year<10000&&month>=1&&month<=12&&day>=1&&day<=maxDay(year,month))
            {
                display1(year,month,day);
            }
            else
                system("cls");
                printf("  ????,????!\n");
                break;
          case 2:
            printf("???????????????????????:");
            scanf("%d,%d,%d",&year,&month,&day);
            display2(year,month,day);
         case 3:
            exit(0);
         default:  /*??????????????????*/
            system("cls");
            printf("  ????,????!\n");
      }
  }
}
int isleap(int year)                    /*???????*/
{
    if(year%4==0&&year%100!=0||year%400==0)
        return 1;
    else
        return 0;
 }
int maxDay(int year,int month)  /*?????*/
{
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};           /*???????*/
    if(isleap( year))
        a[1]=29;                            /*??2???29?*/
    return a[month-1];
 }
 int eachyeartotal(int year,int month,int day)                                /*????????????*/
{
    int i,sum=0;
    for(i=1;i<month;i++)
        sum+=maxDay(year,i);
    sum+=day;
    return sum;
  }
int week(int year,int month,int day)                      /*?????????????*/
{
    int number=(year-1)+(year-1)/4-(year-1)/100+(year-1)/400+eachyeartotal(year,month,day);
    number=number%7  ;
    return number;
}




void display1(int year,int month,int day) /*????*/
{
    whatweek( year,month,day);
    jieri(month,day);
    counterdays(year,month, day);
  }
void display2(int year,int month,int day)
{
    int j,a,b,d,e,f;
    a=0;b=0;
    for(j=1990;j<year;j++)
    {
        if(j%4!=0)
            a=a+1;
        else if(j%100!=0)
            b=b+1;
        else if(j%400!=0)
            a=a+1;
        else
            b=b+1;
        }
    if(year%4!=0)
        d=28;
    else if(year%100!=0)
        d=29;
    else if(year%400!=0)
        d=28;
    else
        d=29;
    switch(month)
    {
        case 1:
            e=b+day;
            break;
        case 2:
            e=31+b+day;
            break;
        case 3:
            e=31+d+b+day;
            break;
        case 4:
            e=31*2+d+b+day;
            break;
        case 5:
            e=31*2+30+d+b+day;
            break;
        case 6:
            e=31*3+30+d+b+day;
            break;
        case 7:
            e=31*3+30*2+d+b+day;
            break;
        case 8:
            e=31*4+30*2+d+b+day;
            break;
        case 9:
            e=31*5+30*2+d+b+day;
            break;
        case 10:
            e=31*5+30*3+d+b+day;
            break;
        case 11:
            e=31*6+30*3+d+b+day;
            break;
        case 12:
            e=31*6+30*4+d+b+day;
            break;
    }


f=e%5;


if(f>=1&&f<=3)printf("??\n");


if(f==0||f==4)printf("??\n");


}
/*????????????*/
int counterdays(int year,int month,int day){
    int year1, days0,days1,month1,days, day1;
    time_t timep;
    struct tm *p;
    time(&timep);
    p=gmtime(&timep);
    year1=(1900+p->tm_year) ;
    month1=(1+p->tm_mon) ;
    day1=(p->tm_mday);                                      /*??????year1?month1?day1????????*/
    days0=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400+eachyeartotal(year,month,day);
    days1=(year1-1)*365+(year1-1)/4-(year1-1)/100+(year1-1)/400+eachyeartotal(year1,month1,day1);
    days=days0-days1;           /*?????????????*/
    printf("\n  ???%d?%d?%d???%d?\n\n",year,month,day,days);
    return days;
}
/*??????*/
void whatweek(int year,int month,int day){
    int number;
    number = (year-1)+(year-1)/4-(year-1)/100+(year-1)/400+eachyeartotal(year,month,day);
    number = number%7;
    switch( number){
        case 0:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        case 1:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        case 2:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        case 3:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        case 4:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        case 5:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        case 6:
            printf( "\n  %d?%d?%d?????",year,month,day);break;
        default:
        system("cls");
        printf(" ????!\n" );
    }
}
/*????????*/
void jieri(int month,int day){
    if(month==1)
        switch(day)
 {
  case 1:
  printf(",?????");
  }
    if(month==2)
    switch(day)
  { case 14:
    printf(",??????");}
    if(month==3)
    switch(day)
   {case 8:
     printf(",??????");
     break;
     case 12:
     printf(",??????");}
      if(month==4)
      switch(day)
     { case 1:
       printf(",??????");}
       if(month==5)
       switch(day)
      { case 1:
        printf(",??????");
        break;
        case 4:
        printf(",??????");}
        if(month==6)
        switch(day)
       {   case 1:
           printf(",??????");}
           if(month==7)
           switch(day)
         {
            case 1:
            printf(",??????");}
            if(month==8)
            switch(day)
           { case 1:
             printf(",??????");}
             if(month==9)
             switch(day)
            {
              case 10:
              printf(",??????");}
             if(month==10)
             switch(day)
            {
              case 1:printf(",??????");}
              }



void getmenu()                     /* ??????*/
{
printf("        ************???************    \n\n");


printf("      *        1?????????!              *   \n\n");
printf("      *        2???????!                  *   \n\n");
printf("      *        3???!                          *   \n\n");
printf("               ************* *****************       \n\n");                                                                       
} 