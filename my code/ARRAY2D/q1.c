#include<stdio.h>
int main(){
     int n;
    printf("entar the rows colum : ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the array elements ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
     }
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    int count=0;
    int tne=n*n;
    printf("\n");
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
//1 2 3 6 9 8 7 4 5