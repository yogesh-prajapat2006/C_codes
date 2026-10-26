#include<stdio.h>
#include<limits.h>
int main(){
    int m[10]={61,42,23,4,5,68,7,85,9,55};
    int n=10;
    for(int i=0;i<10;i++){
        printf("%d ",m[i]);
    }
    //selection sort
    for(int i=0;i<n-1;i++){//n-1 passes
        int min=INT_MAX;
        int minidx;
      for(int j=i;j<n-1;j++){
     if(min>m[j]){
        min=m[j];
        minidx=j;
     }
     }
     int temp=m[minidx];
     m[minidx]=m[i];
     m[i]=temp;
    }
    printf("\n");
    printf("after sorting\n");
    for(int i=0;i<10;i++){
        printf("%d ",m[i]);
    }
        return 0;
}
// 61 42 23 4 5 68 7 85 9 55 
// after sorting
// 4 5 7 9 23 42 61 68 85 55 