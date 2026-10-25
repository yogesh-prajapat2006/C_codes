#include<stdio.h>
#include<string.h>
typedef struct pokemon
    {
       int hp;
       int speed;
       char name[30];
       int year;
    }pokemon;
    void change(pokemon* y){
        y->hp=70;//y->hp=70
        (*y).speed=300;//y->speed=70
        strcpy((*y).name,"yogesh ji");//strcpy(y->name,"yogesh ji");
        (*y).year=2019;//y->year=2019
    }
int main(){
   struct pokemon pikachu;
    pokemon* x=&pikachu;
     (*x).hp=60;
     (*x).speed=200;
     strcpy((*x).name,"lokesh ji");
     (*x).year=2022;
    change(x);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.year);
    return 0;
}
// 70
// 300
// yogesh ji
// 2019
