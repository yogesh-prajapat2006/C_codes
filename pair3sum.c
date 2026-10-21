#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalpair=0;
    int x=12;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
     if(arr[i]+arr[j]+arr[k] ==x){
     totalpair++;
     printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
     }
            }
     }
}
      printf("%d",totalpair);
        return 0;
}
// (1,3,8)
// (1,4,7)
// (1,5,6)
// (2,3,7)
// (2,4,6)
// (3,4,5)
// 6