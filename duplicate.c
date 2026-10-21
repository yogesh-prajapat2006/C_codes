#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,7};
    for(int i=0;i<9;i++){
         for(int j=i+1;j<9;j++){
             if(arr[i]==arr[j]){
                 printf("%d is element are duplicate",arr[i]);
             }
         }
    }
    return 0;
}
//7 is element are duplicate