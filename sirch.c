#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=47;
    int idx=0;
    bool flag=false;
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in array",x);
    }
    else{
        printf("%d is present in array tha index is %d",x,idx);
    }
    return 0;
}
//3 is present in array tha index is 2
//47 is not present in array