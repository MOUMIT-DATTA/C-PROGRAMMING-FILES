#include <stdio.h>
int add( int x,int y) {
    return x+y;
}
int main() {
    int a,b;
    printf("enter your number");
    scanf("%d",&a);
    printf("enter your 2nd number");
    scanf("%d",&b);
    int sum= add(a,b);
    printf("sum of numbers is %d ",sum);
    return 0;
}