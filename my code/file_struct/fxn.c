#include<stdio.h>
#include<string.h>
typedef struct pokemon
    {
       int hp;
       int speed;
    }pokemon;
void change(pokemon p){
    p.hp=30;
    p.speed=350;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed=700;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    return 0;
}
// 60
// 70