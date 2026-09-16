#include <stdio.h>
int main() {
    int x,y,z;
    printf("ENTER FIRST SIDE OF TRIANGLE: ");
    scanf("%d",&x);
    printf("ENTER SECOND SIDE OF TRIANGLE: ");
    scanf("%d",&y);
    printf("ENTER THIRD SIDE OF A TRIANGLE");
    scanf("%d",&z);
    if(x+y>z && y+z>x && x+z>y) {
        printf("YES THE GIVEN SIDES CAN FORM A TRIANGLE");
    }
    else {
        printf("NOT A TRIANGLE");
    }
    return 0;
}