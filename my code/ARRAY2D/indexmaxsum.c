#include<stdio.h>
 int main(){
    int arr[3][3]={111,2,3,4,5,6,7,9,8,};
    int maxsum=0;
     int t;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            if(maxsum<sum){
             maxsum=sum;
             t=i;
            }
        }
        
    }
    printf("index this array line is : %d\n",t);
    printf("max sum element to in the line array %d",maxsum);
    return 0;
 }
//  index this array line is : 0
// max sum element to in the line array 116