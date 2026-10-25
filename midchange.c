#include<stdio.h>
void revers(int arr[], int si, int ei){
  for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
revers(arr,2,5);
    for(int i=0;i<8;i++){
      printf("%d ",arr[i]);
}
        return 0;
}
//1 2 6 5 4 3 7 8 