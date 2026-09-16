#include <stdio.h>
void decreasing (int n) {
       if(n==0) return;
       printf("%d\n",n);
       decreasing(n-1);
       return;
}

int main() {
    int n;
    printf("enter number of good mornings you want: ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}