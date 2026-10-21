#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[9]={8,7,4,4,6,4,8,7};
    for(int i=0;i<9;i++){
        bool flag=false;
         for(int j=i+1;j<9;j++){
             if(arr[i]==arr[j]){
              flag=true;
             }
         }
         if(flag==false){
             printf("%d",arr[i]);
             break;
         }
         }
         
    return 0;
}
//6
