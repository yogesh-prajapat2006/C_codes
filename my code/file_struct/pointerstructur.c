#include<stdio.h>
#include<string.h>
typedef struct pokemon
    {
       int hp;
       int speed;
       char name[30];
       int year;
    }pokemon;
int main(){
   struct pokemon pikachu;
    pikachu.hp=12;
    pikachu.speed=100;
    strcpy(pikachu.name,"moter");
    pikachu.year=2018;
    pokemon* x=&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",pikachu.name);
    printf("%p\n",&pikachu.year);
    printf("%p\n",x);
    // printf("%d\n",pikachu.hp);
    // printf("%d\n",pikachu.speed);
    // printf("%s\n",pikachu.name);
    // printf("%d\n",pikachu.year);
    
    return 0;
}
// 0061FEF0
// 0061FEF4
// 0061FEF8
// 0061FF18
// 0061FEF0