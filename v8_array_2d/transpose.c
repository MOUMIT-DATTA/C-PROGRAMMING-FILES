#include <stdio.h>
int main() {
    int r,c;
    printf("enter number of rows of your matrix : ");
    scanf("%d",&r);
    printf("enter number of columns of your matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    int brr[c][r];
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
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
return 0;
}