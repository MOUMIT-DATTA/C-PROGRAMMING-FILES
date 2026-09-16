#include <stdio.h>
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++) {
        int a = i-1;
          for(int k=1;k<=n-i;k++) {
            printf(" ");
          }
          for(int j=1;j<=i;j++){
                printf("%d",j);
          }
          for(int m=1;m<=i-1;m++) {
                    printf("%d",a);
                    a--;

          }
          
          printf("\n");
    }
    return 0;
}