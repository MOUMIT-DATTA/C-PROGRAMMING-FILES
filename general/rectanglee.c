#include <stdio.h>
int main() {
    int l,b,a,p;
    printf("ENTER LENGTH OF RECTANGLE: ");
    scanf("%d",&l);
    printf("ENTER BREADTH OF RECTANGLE: ");
    scanf("%d",&b);
    a=l*b;
    p= 2*(l+b);
    if(a>p) {
        printf("yes area greater than perimetre");
    }
    else {
        printf("no area not greater than perimetre");
    }
    return 0;
}