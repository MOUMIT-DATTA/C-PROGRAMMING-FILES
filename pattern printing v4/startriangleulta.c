#include <stdio.h>
int main() {
    int n,m;
    printf("enter number of rows needed");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {              //outer loop will decide number of lines
        for(int j=n;j>=i;j--)   {       //for(int j=1;j<=n+1-i;j++)
              printf("*");             //inner loop will dedcide number of stars in each line
        }
            printf("\n");         
    }
    return 0;
}