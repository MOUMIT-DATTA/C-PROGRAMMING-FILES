#include <stdio.h>
int main() {
    int x;
    printf("ENTER YOUR FUCKING NUMBER: ");
    scanf("%d",&x);
    if(x%5==0 && x%3==0) {
        printf("YOUR NUMBER IS DIVISIBLE BY 5 AND 3");
    }
    else {
        printf("NUMBER NOT DIVISIBLE BY 5 and 3");
    }
    return 0;    

}