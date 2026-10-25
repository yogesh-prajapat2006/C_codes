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
    int k=3;
revers(arr,0,7);
revers(arr,0,2);
revers(arr,3,7);
    for(int i=0;i<8;i++){
      printf("%d ",arr[i]);
}
        return 0;
}
//6 7 8 1 2 3 4 5 