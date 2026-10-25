#include<stdio.h>
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<3;i++){
    //      for(int j=0;j<3;j++){
    //       int temp=arr[i][j];
    //           arr[i][j]=arr[j][i];
    //           arr[j][i]=temp;
    //      }
    //      }
        //  for(int i=0;i<3;i++){
        //  for(int j=0;j<3;j++){
        //      printf("%d ",arr[j][i]);
        //  }
        //  printf("\n");
        //  }
         for(int i=0;i<3;i++){
         for(int j=2;j>=0;j--){
             printf("%d ",arr[j][i]);// clock wise 90 digri rotete code
         }
         printf("\n");
         }
    return 0;
}
// 7 4 1 
// 8 5 2
// 9 6 3