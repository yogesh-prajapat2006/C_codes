#include<stdio.h>
int main(){
    int arr[3][3]={1,1,4,4,6,6,3,8,8};// ya {{1,1,4},{4,6,6},{34,8,8}};
    int brr[3][3]={1,1,4,4,6,6,3,8,8};
    int crr[3][3];
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("%d ",crr[i][j]);
         }
          printf("\n");
         }
    return 0;
}
// 2 2 8 
// 8 12 12 
// 6 16 16 