#include<stdio.h>
int main(){
    int a=1;
    for(int i=1; i<=4; i++){
         int b=1;
        for(int j=1; j<=4-i; j++){
            printf(" ");
        }
        int d=b+64;
        char ch=(char)d;
        for(int k=1; k<=a; k++){
            printf("%c",ch);
             ch++;
        }
         b++;
        a=a+2;
        printf("\n");
    }
    return 0;
}
//    A
//   ABC
//  ABCDE
// ABCDEFG