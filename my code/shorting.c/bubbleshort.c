#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[10]={11,2,13,19,7,18,9,4,25,6};
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<9;i++){
       //bool flag =true;   this is checkmark;
        for(int j=0;j<9-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
                 // flag=false;
            }
        }
        //if(flag==true) break;
    }
    printf("\n");
      for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
// 11 2 13 19 7 18 9 4 25 6 
// 2 4 6 7 9 11 13 18 19 25 
