#include <stdio.h>
int main() {
    int x,y,z;
    printf("ENTER AGE OF RAM: ");
    scanf("%d",&x);
    printf("ENTER AGE OF SHYAM: ");
    scanf("%d",&y);
    printf("ENTER AGE OF AJAY: ");
    scanf("%d",&z);
    if(x<y && x<z) {
        printf("RAM SABSE CHOTA HAI");
    }
    else if (y<z && y<x) {
        printf("SHYAM SABSE CHOTA");
    }
    else {
        printf("AJAY SABSE CHOTA HAI");
    }
    return 0;
    }
