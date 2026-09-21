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
            for(int k=j+1;k<=n-1;k++) {
                if(arr[i]+arr[j]+arr[k]==x) {
                    printf("%d ,%d ,%d \n",arr[i],arr[j],arr[k]);
                    count++;
                }
            }

        }
    }
    printf("number of triplets is: %d",count);
    return 0;
}