#include<stdio.h>
int main(){
    int marks[10]={61,42,23,4,5,68,7,85,9,55};
    int min=marks[0];
    for(int i=1;i<10;i++){
     if(min>marks[i]){
        min=marks[i];
     }
    }
    printf("%d",min);
        return 0;
}