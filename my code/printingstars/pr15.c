#include<stdio.h>
int main(){
    // naya veriable manke bhi kar sakte h a mana
    // 
    for(int i=1; i<=4; i++){   //yha cond
        for(int j=1; j<=i; j++){
            if(j==i || (i+j)%2==0){
            printf("%d ",1);     
            }
            else{
                printf("%d ",0);
              }                   //or ek print karne ke bad cond  copy me lika hua h       
            
        }
       
        printf("\n");
    }
    return 0;
}
// 1 
// 0 1
// 1 0 1
// 0 1 0 1