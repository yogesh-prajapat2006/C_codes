#include<stdio.h>
int main(){
    int a[10]={1,2,3,6,7,8,9,4,5,6};
    //find the duplicate no.   best way se
    //n natural no. ka sum n(n+1)/2
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    printf("the duplicate no. is : %d",sum-45);//n+1 size me 1 to n tak ke no. stor karwane h then answar is which the duplicate no.
    return 0;
}
//the duplicate no. is : 6