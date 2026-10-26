#include<stdio.h>
int fibbo(int n){
    if(n==1 ||n==2)return 1;
     int ans1=fibbo(n-1);
      int ans2=fibbo(n-2);
      int ans=ans1+ans2;
     return ans;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",fibbo(n));
   
    return 0;
}
// enter the number : 8
// 21