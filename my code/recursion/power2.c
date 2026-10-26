#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    if(b%2==0){
    if(b==1)return a;
    int x=power(a,b/2);
    return x*x;}
    else if(b==1)return a;
    int x=power(a,b/2);
    return x*x*a;
}
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    int b;
    printf("enter the number : ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;
}
// enter the number : 3
// enter the number : 7
// 2187