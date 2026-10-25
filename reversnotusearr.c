#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int i=0;
    int j=7;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<8;i++){
      printf("%d ",arr[i]);
}
        return 0;
}
//8 7 6 5 4 3 2 1 