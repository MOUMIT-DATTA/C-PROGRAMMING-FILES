#include <stdio.h>
int main() {
    int n;
    printf("ENTER NUMBER WHOSE TABLE YOU WANT: "); //gaand faar question
    scanf("%d",&n);
    for(int i=1;i<=10;i=i+1) {     
        printf("%d x %d= %d\n ",n,i,n*i);
    }
}