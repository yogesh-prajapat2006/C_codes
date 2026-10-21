#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,6,7,8,9};
    int sum2=45;
    int sum=0;
    for(int i=0;i<8;i++){
        sum=sum+arr[i];
    }
   int misalement=sum2-sum;
   printf("%d is missing element",misalement);
    return 0;
}
//5 is missing element