#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int brr[8];
    for(int i=0;i<8;i++){
    brr[i]=arr[7-i];
      printf("%d ",brr[i]);
}
        return 0;
}
//8 7 6 5 4 3 2 1 