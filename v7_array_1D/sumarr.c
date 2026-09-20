#include<stdio.h>
int main() {
    int arr[5];
    int sum=0;
    for(int i=0;i<=4;i++) {
        printf( "enter your number: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("YOUR DESIRED SUM IS : %d",sum);
    return 0;
}