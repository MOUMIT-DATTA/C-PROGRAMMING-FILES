#include <stdio.h>
int main() {
    int a=3;
    int n;
    printf("ENTER ANY NUMBER: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        printf("%d  ",a);
        a=a*4;
    }
    return 0;
}
