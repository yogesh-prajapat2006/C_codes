#include<stdio.h>
#include<string.h>
typedef struct student
    {
       int roll;
       char depa[30];
       char cours[30];
       int year;
    }student;
    
void change(student p1,student p2){
    if(p1.roll==p2.roll) printf("same year");
    else printf("not same year");
    return;
}
int main(){
   struct student s1,s2;
    s1.roll=12;
    strcpy(s1.depa,"ds");
    strcpy(s1.cours,"math");
    s1.year=2018;
    s2.roll=24;
    strcpy(s2.depa,"ds");
    strcpy(s2.cours,"drowing");
    s2.year=2022;
    change(s1,s2);
    return 0;
}
//not same year