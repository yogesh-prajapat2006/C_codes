#include<stdio.h>
int main(){
    char str[]="hello yogesh";
    str[6]=108;
    str[8]=107;
    int i=0;
    while(str[i]!='\0'){
        printf("%c ",str[i]);//i[str] ,*(str+i) ,*(i+str) ase bhi likh sakte h
        i++;
    }
    return 0;
}
//h e l l o   l o k e s h 