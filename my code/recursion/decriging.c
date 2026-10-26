#include<stdio.h>
void decring(int n){
    if(n==0)return;
     printf("%d\n",n);
     decring(n-1);
     return;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    decring(n);
   
    return 0;
}
// enter the number : 4
// 4
// 3
// 2
// 1