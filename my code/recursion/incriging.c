#include<stdio.h>
void decring(int n){
    if(n==0)return;
     
     decring(n-1);   
     printf("%d\n",n);
     return;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    decring(n);
   
    return 0;
}
// enter the number : 5
// 1
// 2
// 3
// 4
// 5