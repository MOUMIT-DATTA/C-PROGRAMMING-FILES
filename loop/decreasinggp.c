#include <stdio.h>
int main () {
    float a =100;
    int n;
    printf("ENTER ANY NUMBER: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        printf("%f  ",a);
        a=a/2;
    }
    return 0;
}