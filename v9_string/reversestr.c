#include<stdio.h>
#include <string.h>
int main() {
    int i=0,j,size=0;
    char a[50];
    char temp[50];
    puts("enter a string");
    gets(a);
    while(a[i]!='\0') {
        size++;
        i++;
    }
    for( i=0,j=size-1;i<=j;i++,j--) {
        temp[i]= a[i];
        a[i]=  a[j];
        a[j]= temp[i];

    }
    puts(a);
    return 0;
}