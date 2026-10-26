#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    int p=a*power(a,b-1);
    return p;
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
// enter the number : 2
// enter the number : 3
// 8