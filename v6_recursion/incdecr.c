#include <stdio.h>
void indr (int n) {
    if(n==0) return;
    printf("%d\n",n);
    indr(n-1);
    printf("%d\n",n);
    return;
}
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    indr(n);
}