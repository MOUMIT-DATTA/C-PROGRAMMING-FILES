#include <stdio.h> 
int main() {
    int a=5;
    int*x=&a;
    printf("adress of a is %p\n",&a);
    printf("adress of a is %p\n",x);
    printf("value of a is %d",*x);
    return 0;
}