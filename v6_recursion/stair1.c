#include <stdio.h>
int stair (int n) {
    if(n==1||n==2) return n;
    int x= stair(n-1)+stair(n-2);
    return x;
}
int main() {
    int n,p;
    printf("enter number of stairs: ");
    scanf("%d",&n);
    p=stair(n);
    printf("%d",p);
    return 0;
}