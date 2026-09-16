#include <stdio.h>
int main() {
    int n, sum=0,last=0;
    printf("enter your number ");
    scanf("%d",&n);
    last=n%10;
    while (n!=0) {
        last=n%10;
        sum=sum+last;
        n=n/10;
    }
    printf("REQUIRED SUM OF GIVEN NUMBERS IS : %d ",sum);
    return 0;
}