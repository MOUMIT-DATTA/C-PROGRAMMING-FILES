#include <stdio.h>
int main () {
    int sum=0,last=0,n;
    printf("enter your number  ");
    scanf("%d",&n);
    while (n!=0) {
        last=n%10;
        if(last%2==0) {
        sum=sum+last;
        }
        n=n/10;
}
printf("required sum is : %d",sum);
return 0;
}