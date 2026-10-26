#include<stdio.h>
void preinpost(int n){
    if(n==0)return;
     printf("pre %d\n",n);
     preinpost(n-1);
     printf("in %d\n",n);
     preinpost(n-1);
     printf("post %d\n",n);
     return;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    preinpost(n);
   
    return 0;
}
// enter the number : 2
// pre 2
// pre 1
// in 1
// post 1
// in 2
// pre 1
// in 1
// post 1
// post 2