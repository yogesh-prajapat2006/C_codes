#include<stdio.h>
int main(){
    int n;
    printf("enter the ni.(1-7) ");
    scanf("%d",&n);
    switch(n){
       case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tuesday\n");
        break;
        case 3:
        printf("wednesday\n");
        break;
        case 6:
        printf("thursday\n");
        break;
        case 5:
        printf("saturday\n");
        break;
        case 4:
        printf("sunday\n");
        break;
        default:
        printf("invalid no.");
    }
    return 0;
}
// enter the ni.(1-7) 4
// sunday