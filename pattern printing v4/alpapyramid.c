#include <stdio.h>
int main() {
    int n;
    printf("enter your number ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) {
        int a=1;
        int b= 63+i;
        for(int k=1;k<=n-i;k++) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
                int d= a+64;
                char ch= (char) d;
                printf("%c",ch);
                a++;
        }
        for(int m=1;m<=i-1;m++){
                  char g= (char) b;
                  printf("%c",g);
                  b--;
        }
        printf("\n");
    }
}