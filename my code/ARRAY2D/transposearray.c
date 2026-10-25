#include<stdio.h>
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i=0;i<4;i++){
         for(int j=0;j<4;j++){
             printf("%d ",arr[i][j]);//print initial array
         }
         printf("\n");
         }
         printf("\n");
         for(int i=0;i<4;i++){
         for(int j=0;j<4;j++){
             printf("%d ",arr[j][i]);//print transpose array
         }
         printf("\n");
         }
    return 0;
}
// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// 1 5 9 13
// 2 6 10 14
// 3 7 11 15
// 4 8 12 16
// int main(){
//     int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     for(int i=0;i<4;i++){
//          for(int j=0;j<4;j++){
//           int temp=arr[i][j];
//               arr[i][j]=arr[j][i];
//               arr[j][i]=temp;p
//          }
//          }
        
//          for(int i=0;i<4;i++){
//          for(int j=0;j<4;j++){
//              printf("%d ",arr[j][i]);
//          }
//          printf("\n");
//          }
//     return 0;
// }