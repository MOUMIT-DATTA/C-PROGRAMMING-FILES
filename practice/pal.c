#include<stdio.h>
int main() {
    int n,count=0;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    int trr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<n;k++) {
        trr[k]=arr[n-1-k];
    }
    for(int j=0;j<n;j++){
        if(trr[j]==arr[j]) {
            count++;
        }
    }
    if(count==n) {
        printf("array is palindrome ");
    }
    else{
        printf("array not palindrome");
    }
    return 0;

}