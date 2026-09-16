#include <stdio.h>
void greet (int n) {
       if(n==0) return;   // base line which tells the function when to stop
       printf("GOOD MORNING\n");
       greet(n-1);
       return;
}

int main() {
    int n;
    printf("enter number of good mornings you want: ");
    scanf("%d",&n);
    greet(n);
    return 0;
}