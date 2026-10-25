#include<stdio.h>
#include<string.h>
int main(){
    struct Book
    {
       int page;
       char name[30];
       float price;
    }a,b,c;
    
    a.page=67;
    a.price=20;
    // a.name[0]='r';
    // a.name[1]='a';
    // a.name[2]='m';
    // a.name[3]=' ';
    // a.name[4]='j';
    // a.name[5]='i';
    
    strcpy(a.name,"ramayan ji");
    printf("%d or %f or the name of book %s",a.page,a.price,a.name);
    return 0;
}
//output 
//67 or 20.000000 or the name of book ramayan ji
