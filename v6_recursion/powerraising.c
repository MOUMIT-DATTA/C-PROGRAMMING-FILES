#include<stdio.h>
int power (int n,int p) {
if (p==0) return 1;
int result= n*power(n,p-1);
return result;
} 
int main() {
    int n,p,b;
    printf("enter your number ");
    scanf("%d",&n);
    printf("enter power to which raised: ");
    scanf("%d",&p);
    b=power(n,p);
    printf("required result is %d",b);
    return 0;
}