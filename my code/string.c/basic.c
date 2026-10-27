#include<stdio.h>
int main(){
   char a[]="ABCD";//YE JAYADA BADIYA TARIKA H ISE HI STRING KHAHTE H
   // char a[]={'A','B','C','D'};KAR SAKTE H
   for(int i=0;i<4;i++){
   printf("%p\n",&a[i]);//add. print karvaya usme ek ek ka gap h
//    out put
// 0061FF18
// 0061FF19
// 0061FF1A
// 0061FF1B
   }
   printf("\n");
   int b[]={1,2,3,4};
   for(int j=0;j<4;j++){
      printf("%p\n",&b[j]);//add. print karvaya usme 4 4 ka gap h
      //    out put
// 0061FF04
// 0061FF08
// 0061FF0C
// 0061FF10
   }
    return 0;
    }