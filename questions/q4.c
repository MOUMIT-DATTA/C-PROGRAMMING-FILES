#include <stdio.h>
int main() {
    int n,last,x=0;
    printf("enter your number");
    scanf("%d",&n);
    while(n!=0) {
        last=n%10;
        x=x*10;
        x=x+last;  
        n=n/10;
    }
    printf("required number is : %d",x);
    return 0;
}
