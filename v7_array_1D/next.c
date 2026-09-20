#include<stdio.h>
int main() {
    int a[3]={1,6,5};
    int largest=a[0];
    for(int i=0;i<=2;i++) {
        if(largest<a[i]){
            largest=a[i];
        }
    }
    printf("largest value of your array is : %d",largest);
    return 0;
}