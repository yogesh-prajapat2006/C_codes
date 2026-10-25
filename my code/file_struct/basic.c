#include<stdio.h>
int array(int arr[],int idx,int n){
        if(idx==n) return 0;
        return arr[idx]+array(arr,idx+1,n);
}
int main(){
    int n=5;
    int idx =0;
   int arr[]={1,2,3,4,5};
  int yogi= array(arr,idx,n);
   printf("%d ",yogi);
    return 0;
}