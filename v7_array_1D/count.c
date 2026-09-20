#include<stdio.h>
int main() {
    int x,n,p=0;
    printf("enter your number: ");
    scanf("%d",&x);
    printf("enter your size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++) {
        printf("enter your number: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++) {
        if(arr[i]>x) {
            p+=1;
        }
    }
    printf("number greater than your given number is : %d",p);
    return 0;
}