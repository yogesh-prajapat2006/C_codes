#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book
    {
       int page;
       char name[30];
       float price;
    }Book;
    Book a,b,c;
    a.page=67;
    a.price=20;
    strcpy(a.name,"ramayan ji");
    b=a;//in the b copy of a
    printf("%d or %f or the name of book %s",b.page,b.price,b.name);
    return 0;
}
//67 or 20.000000 or the name of book ramayan ji