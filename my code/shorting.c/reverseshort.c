#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[10]={11,2,13,19,7,18,9,4,25,6};
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<9;i++){
       bool flag =true;
        for(int j=0;j<8;j++){
            if(a[j+1]>a[j]){
                int temp=a[j+1];
                  a[j+1]=a[j];
                  a[j]=temp; 
                  flag=false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
      for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}