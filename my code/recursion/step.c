#include<stdio.h>
int step(int n){
    if(n==1 ||n==0)return 1;
     int ans1=step(n-1);
      int ans2=step(n-2);
      int ans=ans1+ans2;
     return ans;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",step(n));
   
    return 0;
}
// enter the number : 5
// 8
#include<stdio.h>
int step(int n){
    if(n==1 ||n==2)return n;
     int ans1=step(n-1);
      int ans2=step(n-2);
      int ans=ans1+ans2;
     return ans;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",step(n));
   
    return 0;
}