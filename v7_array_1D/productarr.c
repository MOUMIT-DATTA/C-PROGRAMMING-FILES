#include<stdio.h>
int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    int product=1;
    for(int i=0;i<=n-1;i++) {
        printf( "enter your number: ");
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("YOUR DESIRED product IS : %d",product);
    return 0;
}