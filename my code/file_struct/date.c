#include<stdio.h>
#include<string.h>
int main(){
    typedef struct date
    {
       int day;
       int month;
       int year;
    }date;
    date a,b;
    a.day=4;
    a.month=2;
    a.year=2006;
    b.day=4;
    b.month=1;
    b.year=2025;
    int t=1;
    if(a.day != b.day) t=0;
    if(a.month != b.month) t=0;
    if(a.year != b.year) t=0;
    if(t==0) printf("date is not equel  ");
    else printf("date is  equel  ");
    return 0;
}
//date is not equel  