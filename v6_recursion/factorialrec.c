#include <stdio.h> 
    int factorial(int n) {
           if(n==1) return 1;  // base line {tells a refursion where to stop }
           return n*factorial(n-1);
           
    }
    int main() {
        int n,fact;
        printf("enter your number: ");
        scanf("%d",&n);
        fact=factorial(n);
        printf("required factorial is:  %d",fact);
        return 0;
    }
