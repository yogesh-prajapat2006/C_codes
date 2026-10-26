#include<stdio.h>
int decring(int n){
    if(n==0||n==1)return 1;
    int sum=n+decring(n-1);;
    
     return sum;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=decring(n);
    printf("%d",sum);
   return 0;
}
// enter the number : 4
// 10