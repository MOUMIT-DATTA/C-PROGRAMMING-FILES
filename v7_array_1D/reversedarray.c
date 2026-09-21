#include<stdio.h>
int main() {
    int n;
    printf("enter your array: ");
    scanf("%d",&n);
    int arr[n];
    int a[n];
    int b=0;
    for(int i=0;i<=n-1;i++) {
        printf("enter your number: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++) {
         a[i]=arr[n-1-i];
        
    }
    for(int i=0;i<=n-1;i++) {
        printf("%d ",a[i]);
}
return 0;
}