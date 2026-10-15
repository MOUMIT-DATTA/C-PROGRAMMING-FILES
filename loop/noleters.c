#include<stdio.h>
int main()  {
    int n,m,x=0,last;
    printf("enter your number : ");
    scanf("%d",&n);
    m=n;
    while(n!=0) {
        last=n%10;
        x=x*10;
        x=x+last;
        n=n/10;
    }
        if(x==m) {
        printf("number is palindrome");
    }
    else {
        printf("not palindrome");
    }
}
