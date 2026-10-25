#include<stdio.h>
#include<limits.h>
 int main(){
    int arr[2][2]={1,2,9,8};
    int max=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           if(max<arr[i][j]){
            max=arr[i][j];
           }
        }
    }
    printf("max element in the array %d",max);
    return 0;
 }
 //max element in the array 9