#include<stdio.h>
int main() {
    int arr[6]= {22,4,55,67,86,78};
    int pos =2;
    int newElem=99;
    for(int i=4;i>=pos;i--) {  //shifting elements to the right .
        arr[i+1]=arr[i];
    }
    arr[pos]= newElem;
    for(int i=0;i<6;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}