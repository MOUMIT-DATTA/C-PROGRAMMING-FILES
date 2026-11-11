#include<stdio.h>
#include<stdbool.h>
int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++) {
        bool flag = false;
        for(int j=0;j<n;j++) {
            if(i!=j && arr[i]==arr[j])
            flag = true;
        }
        if(flag== false) {
            printf("required unique element is %d",arr[i]);
            break;
        }
    }
    return 0;
}