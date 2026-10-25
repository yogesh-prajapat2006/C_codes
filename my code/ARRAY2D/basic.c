#include<stdio.h>
int main(){
    int arr[3][3]={1,1,4,4,6,6,34,8,8};// ya {{1,1,4},{4,6,6},{34,8,8}};
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
             printf("%d ",arr[i][j]);
         }
         printf("\n");
         }
    return 0;
}
// 1 1 4 
// 4 6 6 
// 34 8 8 