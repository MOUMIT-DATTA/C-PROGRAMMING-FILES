#include<stdio.h>
int powereffi(int n,int p) {
    if(p==0) return 1;
    int x= powereffi(n,p/2);
    if(p%2==0) return x*x;
    else return x*x*n;
 }
int main() {
    int n,p,ans;
    printf("enter your base: ");
    scanf("%d",&n);
    printf("enter your base: ");
    scanf("%d",&p);
    ans= powereffi(n,p);
    printf("required answer is: %d",ans);
    return 0;
 }