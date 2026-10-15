#include<stdio.h>
int main() {
    int m,n;
    int sum=0;
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of columns: ");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            sum=sum+arr[i][j];
        }
    }
    printf("sum of all numbers of the give array is = %d",sum);
    return 0;
}