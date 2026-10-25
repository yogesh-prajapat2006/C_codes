#include<stdio.h>
int main(){
    int marks[10]={1,42,23,4,5,68,7,85,9,55};
    int max=-1;
    for(int i=0;i<10;i++){
     if(max<marks[i]){
         max=marks[i];
     }
    }
    printf("%d",max);
        return 0;
}
//85