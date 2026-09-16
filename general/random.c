#include <stdio.h>
int main() {
    int n,i=1;
    printf("ENTER YOUR NUMBER");
    scanf("%d",n); 
    if(i<=10) {
    start:
    printf("%d x %d = %d",n,i,n*i);
    i++;
    }
    goto start;
    else {
        goto end;
    }
    end: 
    return 0;
}
