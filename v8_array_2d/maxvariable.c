#include <stdio.h>
int main() {
    int maxCount=0;
    int row=0;
    int arr[2][2]= {9,1,1,1};
    for(int i=0;i<2;i++) {
        int count=0;
        for(int j=0;j<2;j++) {
            if(arr[i][j]==1) {
                count=count+1;
            }
            if(i==0 || count>maxCount) {
                maxCount=count;
                row=i;
            }
        }
    }
    printf("required number of row is=%d ",row);
    printf("number of one in that row is %d",maxCount);
}