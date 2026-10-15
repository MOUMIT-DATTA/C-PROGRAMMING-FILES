#include <stdio.h>
int main() {
    int r,c;
    printf("enter number of rows of your matrix : ");
    scanf("%d",&r);
    printf("enter number of columns of your matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}