#include<stdio.h>
 int main(){
    int r,c;
    printf("entar the rows : ");
    scanf("%d",&r);
     printf("entar the colums : ");
    scanf("%d",&c);
    int arr[r][c];
     printf("enter element ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the array is ");
    printf("\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
         printf("\n");
    }
    int sum=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("the sum of array elements is %d",sum);
    return 0;
 }
//  entar the rows : 3
// entar the colums : 3
// enter element 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// the array is
// 123
// 456
// 789
// the sum of array elements is 45