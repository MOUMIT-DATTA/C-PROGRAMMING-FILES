#include<stdio.h>
int main() {
    int n,x;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                x=arr[i];
                printf("required duplicate element is : %d\n",x);
            }
        }
    }
    
    return 0;
}