#include<stdio.h>
int maze2(int n,int m){
     int rightways=0;
      int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){
      rightways += maze2(n,m-1); 
    }
    if(m==1){
     downways += maze2(n-1,m);  
    }
     if(n>1 && m>1){
          rightways += maze2(n,m-1); 
          downways += maze2(n-1,m);  
     }
     int totalways=rightways+downways;
     return totalways;
}
int main(){
    int n;
    printf("enter the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("enter the number of colum : ");
    scanf("%d",&m);
    int noofways=maze2(n,m);
    printf("%d",noofways);
    return 0;
}
// enter the number of rows : 3
// enter the number of colum : 3
// 6