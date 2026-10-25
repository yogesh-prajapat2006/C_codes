#include<stdio.h>
int main(){
    int marks[10]={10,38,45,23,55,23,14,67,89,33};
    for(int i=0;i<10;i++){
        if(marks[i]<=35)printf("%d ",i);
    }
        return 0;
}
//0 3 5 6 9 