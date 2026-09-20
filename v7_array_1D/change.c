#include<stdio.h>
void fun(int a[],int n) {
    for(int i=0;i<=n-1;i++) {
        if(i%2!=0){
            a[i]=a[i]*2;
        }
        else{
            a[i]=a[i]+10;
        }
    }
    return;
}
int main() {
   int n;
   printf("enter size of array");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<=n-1;i++) {
    printf("enter your element");
    scanf("%d",&arr[i]);
   }
   fun(arr,n);
   for(int i=0;i<=n-1;i++) {
    printf("%d ",arr[i]);
   }
   return 0;
}