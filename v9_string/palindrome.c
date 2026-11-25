#include<stdio.h>
#include <string.h>
int main() {
    int i=0,j,size=0;
    char a[50];
    char temp[50];
    char b[50];
    puts("enter a string");
    gets(a);
    strcpy(b,a);
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
    i=0;
    while(a[i]==b[i] && a[i]!='\0') {
        i++;
    }
    if(a[i]=='\0'&& b[i]=='\0') {
        printf("strings are palindrome");
    }
    else printf("strings aint palindrome");
    return 0;
}