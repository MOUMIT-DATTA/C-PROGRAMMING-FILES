#include<stdio.h>
int main() {                               //important question.
    int n;
    printf("enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++) {
        printf("enter your number: ");
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=0;i<=n-1;i++) {
         if(largest<arr[i]) {
            largest=arr[i];
         }
         
    }
    printf("largest value of your array is : %d",largest);
    return 0;
    }
