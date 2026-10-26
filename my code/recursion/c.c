#include<stdio.h>
int main(){
    for(int i=1; i<=7; i++)
{
for(int j=1; j<=7; j++){
    if(i<=4&&j==1 || i<=4&&j==7){
        printf("*");
    }
    else if(i==5&&j==6 || i==6&&j==5){
        printf("*");
    }
    else if(i>4 && j==i-3)
    {
        printf("*");
    }
    else{
        printf(" ");
    }
}
printf("\n");
}
for(int i=1; i<=7; i++){
    for(int j=1;j<5; j++)1{
        printf(" ");
    }
    printf("\n");
}
    return 0;
}