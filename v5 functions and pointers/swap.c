#include <stdio.h> 
int main() {
    int a,b;
    printf("enter your value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("value of a is : %d\n",a);
    printf("value of b is : %d",b);
    return 0;
}