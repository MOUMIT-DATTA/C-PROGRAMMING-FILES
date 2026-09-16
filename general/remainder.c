#include <stdio.h>
int main(){
    int a,b; //a>b
    printf("ENTER DIVIDEND: ");
    scanf("%d", &a);
    printf("ENTER DIVISOR: ");
    scanf("%d", &b);
   // int q=  a/b;
   // int r= a-(b*q);
   int w= a%b;
    printf("REQUIRED REMAINDER IS: %d", w);
    

}