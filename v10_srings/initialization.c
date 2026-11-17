#include<stdio.h>
int main() {
    struct pokemon {  //this creates a dabba unlike when we do int declarations and all 
        int hp;
        int attack;
        int speed;
        char tier;
    }pikachu,charizard; //declaring variable of the structures.
    
    charizard.attack = 350;
    charizard.hp = 500;
    charizard.speed = 200;
    charizard.tier= 'S';
     
    printf("enter attack of pikachu");
    scanf("%d",&pikachu.attack);
    pikachu.hp = 50;
    pikachu.speed = 20;
    pikachu.tier= 'A';

    printf("%d\n",pikachu.attack);
    printf("%c",pikachu.tier);
}