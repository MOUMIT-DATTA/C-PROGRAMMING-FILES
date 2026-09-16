#include <stdio.h>
void swap ( int*x,int*y) {   // x amd y here store the adress of a and b
    int temp;    // *x goes to the adress of stored in x and engages with variable in that particular adress
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main() {
    int a,b;
    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a is %d\n",a);
    printf("value of b is %d : ",b);
    return 0;
}