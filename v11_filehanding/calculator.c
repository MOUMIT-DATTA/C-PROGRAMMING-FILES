#include<stdio.h>
int main() {
    int n;
    printf("enter your number");
    scanf("%d",&n);
    char ch;
    printf("enter your operations: ");
    scanf(" %c",&ch);
    int o;
    printf("enter your number");
    scanf("%d",&o);
    
    
    switch(ch) {
        case '+':
        printf("%d",n+o);
        case'-':
        printf("%d",n-o);
        case'*':
        printf("%f",(float)n*o);
        case'/':
        printf("%f",(float)n/o);
        default:
        printf("invalid operations");
    }
    return 0;
}