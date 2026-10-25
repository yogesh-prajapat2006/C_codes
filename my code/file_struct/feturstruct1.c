#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
       int hp;
       int speed;
       char name[30];
    }pokemon;
    typedef struct legendarypokemon
    {
       pokemon x;
       char ability[30];
    }legendarypokemon;
    legendarypokemon y;
    strcpy(y.ability,"nice");
    y.x.hp=70;
    y.x.speed=120;
    strcpy(y.x.name,"charizard");
    printf("legendarypokemon hp is : %d\n",y.x.hp);
    printf("legendarypokemon speed is : %d\n",y.x.speed);
    printf("legendarypokemon ability is : %s\n",y.ability);
    printf("legendarypokemon name is : %s\n",y.x.name);
    return 0;
}
// legendarypokemon hp is : 70
// legendarypokemon speed is : 120
// legendarypokemon ability is : nice
// legendarypokemon name is : charizardv