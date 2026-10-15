#include<stdio.h>
int main() {
    int r,c;
    printf("enter number of rows: ");
    scanf("%d",&r);
    printf("enter number of colkumns: ");
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
    int largest= arr[0][0];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(largest<arr[i][j]) {
                largest=arr[i][j];
            }
        }
    }
    printf("laregst number of the given array is : %d",largest);
    return 0;
    }