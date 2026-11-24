#include<stdio.h>
#include<string.h>
typedef struct pokemon {
    char name[30];
    int hp;
    int attack;
}pokemon;

void change(pokemon* x) {
    strcpy((*x).name,"raichu");  // (*x) ke x-> eibhabeo lekha jae
    (*x).attack=60;
    (*x).hp=100;
}
int main() {
     pokemon a;
     strcpy(a.name,"pikachu");
     a.attack=40;
     a.hp=80;
     printf("%s\n",a.name);
     printf("%d\n",a.hp);
     printf("%d\n",a.attack);
     change(&a);  // printing values after changong and refering adrees of the structiures to other function 
     printf("%s\n",a.name); //pass by reference
     printf("%d\n",a.hp);
     printf("%d\n",a.attack);
     return 0;

}