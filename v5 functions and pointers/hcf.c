#include <stdio.h>
int min(int a,int b) {
    if(a>b) return b;
    else return a;
}
int gcd(int a,int b) {
    int temp,i;
    for( i=1;i<=min(a,b);i++) {
        if(a%i==0 && b%i==0){
            temp=i;
        }
    }
    return temp;
}
int main() {
    int a;
    printf("enter your 1st number: ");
    scanf("%d",&a);
    int b;
    printf("enter your 1st number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("required hcf is : %d ",hcf);
    return 0;
}