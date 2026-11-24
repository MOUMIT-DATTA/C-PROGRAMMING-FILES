#include<stdio.h>
#include<string.h>
int main() {
    typedef struct pokemon {
        int hp;
        int attack;
        int speed;
        char name[30];
    }normal;
    typedef struct legendarypokemon{
        normal pokemon;
        char ability[30];
    }legendarypokemon;

    typedef struct godpokemon {
        legendarypokemon forza;
        char specialattack[100];
    }godpokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"IRONTAIL");
    mewtwo.pokemon.hp=300;
    mewtwo.pokemon.attack=400;
    mewtwo.pokemon.speed=600;
    godpokemon arceus;
    strcpy(arceus.specialattack,"turn to stone");
    strcpy(arceus.forza.ability,"INVINCIBILITY");
    arceus.forza.pokemon.hp=900;
    arceus.forza.pokemon.attack=1200;
    arceus.forza.pokemon.speed=3000;
    printf("ARCEUS\n");
    printf("%s\n",arceus.forza.ability);
    printf("%d",arceus.forza.pokemon.speed);
    printf("mewtwo:\n");
    printf("%d\n",mewtwo.pokemon.hp);
    printf("%s",mewtwo.ability);
    return 0;

}