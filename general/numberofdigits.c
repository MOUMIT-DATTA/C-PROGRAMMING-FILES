#include <stdio.h>
int main() {
    int n,a=0;
    printf("enter your number: ");
    scanf("%d",&n);
    while (n!=0) {
        n=n/10;
        a++;
    }
    printf("THE NUMBER OF DIGITS ARE: %d ",a);

}