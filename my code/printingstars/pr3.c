#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        for(int j=4; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// ****
// ***
// **
// *
//      a=n
// for(int i=1; i<=n; i++){
//         for(int j=1; j>=a; j++){  or for(int j=1; j<=n+1-i; j--)
//             printf("* ");
//          a--;
//         }
//         printf("\n");
//     }