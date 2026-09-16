#include <stdio.h>
int main () {
    int n,last,sum=0,x=0;
    printf("enter your number: ");
    scanf("%d",&n);
    while (n!=0) {
        last=n%10;
        sum=sum+last;
        x=x*10;
        x=x+last;
        n=n/10;
    }
    printf("required sum is: %d\n",sum);
    printf("required number is : %d",x);
    return 0;
}