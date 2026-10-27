#include<stdio.h>
#include<string.h>
int main(){
    char str[]="collage wallah";
    str[2]=65;
    str[3]='A';
    //str="physics wallah";ase ek sath nhi chang kar sakte h aap lekin
    printf("%s ",str);
    printf("\n");
    char *ptr="collage wallah";//ye nhi hoga print ab
   // ptr=65;//nhi kar sakte induduli
   // ptr='A';//nhi kar sakte induduli
    ptr="physics wallah";//ase ek sath hi chang kar sakte h aap pointar se array ko
    printf("%s ",ptr);
    return 0;
}
//output
// coAAage wallah 
// physics wallah 