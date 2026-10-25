#include<stdio.h>
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};//1 2 3
    for(int i=0;i<3;i++){             //4 5 6
    if(i%2==0){                       //7 8,9
         for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
         }
         }
         else {
             for(int j=2;j>=0;j--){
            printf("%d ",arr[i][j]);//1 2 3 6 5 4 7 8 9 
         }
        
         }
          printf("\n");
    }
    return 0;
}
// 1 2 3 
// 6 5 4
// 7 8 9