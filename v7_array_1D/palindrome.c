#include <stdio.h>
int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int count=0;
    int arr[n];
    int trr[n];
    printf("enter elements of an array");
    for(int i=0;i<n;i++)  {
           scanf("%d",&arr[i]);
    }
    
    for(int k=0;k<n;k++) {
       trr[k]=arr[n-1-k];
    }
    for(int i=0;i<n;i++) {
        if(trr[i]==arr[i]) {
              count=count+1;
        }
    }
    
    if(count==n) {
        printf("the given array is palindrome");
    }
    else {
        printf("entered array is not palindrome");
    }
    

}
