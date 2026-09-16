#include <stdio.h>
int main() {
    int c,s,p,l;
    printf("ENTER COST PRICE: ");
    scanf("%d",&c);
    printf("ENTER SELLING PRICE: ");
    scanf("%d",&s);
    if ((s-c)>0) {
        p= s-c;
        printf("PROFIT GAINED: %d",p);
    }
    else if ((s-c)<0) {
        l= c-s;
        printf("LOSS INCURED IS: %d",l);
    }
    else {
        printf("no gain no loss");
    }
    return 0; 
}