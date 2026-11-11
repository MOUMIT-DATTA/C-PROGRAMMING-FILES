#include<stdio.h>
int main() {
    int n,x,count=0;
    printf("enter size of an array");
    scanf("%d",&n);
    printf("enter element you want to search: ");
    scanf("%d",&x);
    int arr[n];
    for(int i=0;i<n;i++) {
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i]==x){
            count++;
            break;
        }   
        
    }
    if(count==1) {
        printf("element is present ");
    }
    else{
        printf("element ABSENT");
    }
    return 0;
}