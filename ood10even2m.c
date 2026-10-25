#include<stdio.h>
int main(){
    int marks[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
     if(i%2==0)printf("%d ",10+marks[i]);
     else printf("%d ",2*marks[i]);
     }
        return 0;
}
// 11 4 13 8 15 12 17 16 19 0 