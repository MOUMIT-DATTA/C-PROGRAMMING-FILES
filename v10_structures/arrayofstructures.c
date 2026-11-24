#include<stdio.h>
#include <stdio.h>
int main() {
    typedef struct pokemon {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    arr[0].hp=50;
    arr[0].speed=150;
    arr[0].attack=200;
    arr[0].tier= 'A';
    strcpy(arr[0].name,"CHARIZARD");

    arr[1].hp=50;
    arr[1].speed=150;
    arr[1].attack=200;
    arr[1].tier= 'A';
    strcpy(arr[1].name,"CHARIZARD");

    arr[2].hp=50;
    arr[2].speed=150;
    arr[2].attack=200;
    arr[2].tier= 'A';
    strcpy(arr[2].name,"CHARIZARD");

    for(int i=0;i<3;i++) {
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].attack);
        printf("%c\n",arr[i].tier);
        printf("%s\n",arr[i].name);
    }
    return 0;
    
}