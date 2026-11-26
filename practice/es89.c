#include<stdio.h>
int main() {
    int x=10;
    int y=70;

    printf("value of x is %d\n",x);
    printf("value of y is %d\n",y);
    int* p=&x;
    int* m=&y;
    *p=*p+*m;
    *m=*p-*m;
    *p=*p-*m;
    printf("value of x is %d\n",x);
    printf("value of y is %d\n",y);
}