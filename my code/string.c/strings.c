#include<stdio.h>
int main(){
    char a[]="hello yogesh babu\0";
    int i=0;
    while(a[i]!='\0'){
        printf("%c ",a[i]);
        i++;
    }
    return 0;
}
//h e l l o   y o g e s h   b a b u 