#include<stdio.h>
int main(){
    int a=1;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i+a; j=j+2){
            printf("%d ",j);
        }
        a++;
        printf("\n");
    }
    return 0;
}
//for(int i=1; i<=n; i++){

//{ int a=1;
//for(int j=1; j<=i; j++){
//printf("%d",a);
//a=a+2;}
//printf("\n");
//}
//
//1 /1 3/ 1 3 5 /1 3 5 7 /