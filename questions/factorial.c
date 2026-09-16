#include <stdio.h>
int main() {
    int n,product=1;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        product=product*i;
        printf("FACTORIAL OF %d : %d\n",i,product);
    }
    printf("FACTORIAL OF %d : %d\n",n,product);

    return 0;
}