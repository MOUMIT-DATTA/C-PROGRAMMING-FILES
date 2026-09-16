#include <stdio.h>
int main () {
    int n;
    int a=0;
    printf("enter a number ");
    scanf("%d",&n);
    if (n<=1) {
        printf("NUMBER IS NEITHER PRIME NOR COMPSITE ");
    }
    for (int i=2;i<=n-1;i++) {
        if(n%i==0) {
            a=1;
            break;
        }
    }
        if(a==0){
            printf("NUMBER IS PRIME");
        }
        else {
            printf("NUMBER IS COMPOSITE");
        }
        return 0;
    }

