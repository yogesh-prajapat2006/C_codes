#include<stdio.h>
int main(){
    int a[3][4]=//m n user se leke elements bhi print karwa sakte the 
    {1,2,3,4,
    5,6,7,8,
    9,0,11,12};
    int minr=0;
    int maxr=2;//m-1
    int minc=0;
    int maxc=3;//n-1
    int count=0;
    int tne=12;//m*n
    while(count<tne){
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        for(int j=minr;j<=maxr;j++){
            printf("%d ",a[j][maxc]);
               count++;
        }
        maxc--;
        if(count>=tne) break;
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
               count++;
        }
        maxr--;
        if(count>=tne) break;
        for(int j=maxr;j>=minr;j--){
            printf("%d ",a[j][minc]);
               count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return 0;
}
// jab hum if lagate h beech me to asa code aata h sahi h ye 1 2 3 4 8 12 11 0 9 5 6 7 
// jab hum if nhi lagate h beech me to asa code aata h sahi nhi  h ye 1 2 3 4 8 12 11 0 9 5 6 7 6 