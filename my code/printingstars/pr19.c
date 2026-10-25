#include<stdio.h>
int main(){
    int a=1;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4-i; j++){
            printf(" ");
        }
        
        for(int k=1; k<=a; k++){
            printf("%d",k);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}
//    1
//   123
//  12345
// 1234567