#include <stdio.h>                               //bit different type of program 
int main() {
    int x,count=0,n;
    printf("enter your value: ");
    scanf("%d",&x);
    printf("enter size of your array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++) {
        printf("enter your number: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++) {
        for(int j=i+1;j<=n-1;j++) {
            if(arr[i]+arr[j]==x){
                count+=1;
            }

        }
    }
    printf("number of pairs= %d",count);
    return 0;
}