#include <stdio.h>
int main() {
    int n,m;
    printf("enter number of rows needed");
    scanf("%d",&n);
    printf("enter number of columns required ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++) {               //outer loop will decide number of lines
        for(int i=1;i<=m;i++)   {    //inner loop will dedcide number of stars in each line
              printf("*");
        }
            printf("\n");         
    }
    return 0;
}