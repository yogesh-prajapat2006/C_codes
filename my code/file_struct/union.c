#include<stdio.h>
#include<string.h>
int main(){
    typedef union Book
    {
       int page;
       char name[30];
       float price;
    }Book;
    Book a,b,c;
    
    a.price=20;
    // a.name[0]='r';
    // a.name[1]='a';
    // a.name[2]='m';
    // a.name[3]=' ';
    // a.name[4]='j';
    // a.name[5]='i';
    
    strcpy(a.name,"ramayan ji");
    a.page=67;
    printf("%d\n or %f\n or the name of book %s\n",a.page,a.price,a.name);
    return 0;
}
// 76
//  or 0.000000
//  or the name of book C