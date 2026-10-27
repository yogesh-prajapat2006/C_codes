#include<stdio.h>
int main(){
    char ch='a';
    printf("%d\n ",ch);
    ch='A';
    printf("%d\n ",ch);
    ch='\0';
    printf("%d\n ",ch);//null char
    ch='Z';
    printf("%d\n ",ch);
    return 0;
}
//  97
//  65
//  0
//  90