#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        int a=1;
        for(char j=1; j<=4; j++){
            int d=a+64;
            char ch=(char)d;
            if(i%2==0){
                printf("%c ",ch);
            }
            else{
            printf("%d ",j);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}
// 1 2 3 4 
// A B C D
// 1 2 3 4
// A B C D