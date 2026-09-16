#include <stdio.h>
int main() {
    int a=1;
    int b=1;
    int sum=1;
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
    printf("%d ",a);
    sum=a+b;
    a=b;
    b=sum;  
    }
   
    return 0;
}