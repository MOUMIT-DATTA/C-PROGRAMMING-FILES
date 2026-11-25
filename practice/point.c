#include<stdio.h>
int main() {
    int x=50;
    printf("%d\n",x);
    int* p=&x;
    *p=700;
    printf("%d",x);
    return 0;
}