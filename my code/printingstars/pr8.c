#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        int a=1;
        for(char j=1; j<=i; j++){
            int d=a+64;
            char ch=(char)d;
            printf("%C ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
// A 
// A B
// A B C
// A B C D