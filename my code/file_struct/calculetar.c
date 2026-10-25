#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);//oprend
    char ch;
    scanf("%c",&ch);//opreters->+,-,*,/
    int b;
    scanf("%d",&b);
    switch(ch){
       case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%f",(float)a/b);
        break;
        default:
        printf("invalid opretars");
    }
    return 0;
}
// 2/5
// 0.400000
