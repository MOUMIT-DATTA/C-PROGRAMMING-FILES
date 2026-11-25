#include<stdio.h>
int main() {
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++) {

        for(int k=1;k<=n-i;k++) {
            printf(" ");
        }
        for(int j=1;j<=nst;j++) {
            printf("%d",j);
        }
        printf("\n");
        nst+=2;
    }
    return 0;
}