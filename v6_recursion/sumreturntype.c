#include<stdio.h>
int sum (int n) {
    if(n==1||n==0) return n;
    int s= n+sum(n-1);
    return s;
}
int main() {
    int n,s;
    printf("enter your number : ");
    scanf("%d",&n);
    s=sum(n);
    printf("required sum is: %d",s);
    return 0;
}