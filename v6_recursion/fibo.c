#include <stdio.h>
int fibo(int n) {
    if(n==1||n==2) return 1;
    int a1= fibo(n-1);
    int a2= fibo(n-2);
    int a= a1+a2;
    return a;
}
int main() {
    int n,v;
    printf("enter which term you want: ");
    scanf("%d",&n);
    v=fibo(n);
    printf("desired number is : %d",v);
    return 0;
}