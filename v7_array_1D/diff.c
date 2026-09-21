#include<stdio.h>
int main() {
    int n,s2=0,s3=0;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++) {
        printf( "enter your number: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++) {
        if(i%2==0) {
            s2+=arr[i];
        }
        else {
            s3+=arr[i];
        }
    }
    if(s2>s3){
        printf("required difference is %d",s2-s3);
    }
    else {
       printf("required difference is %d",s3-s2);
    }
    return 0;
}