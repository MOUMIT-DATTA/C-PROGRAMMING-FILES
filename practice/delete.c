#include<stdio.h>
int main() {
    int arr[6]={1,2,3,4,5,6};
    int pos=3;
    for(int i=pos;i<5;i++) {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<5;i++) {
        printf("%d ",arr[i]);
    }
}