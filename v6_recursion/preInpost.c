#include<stdio.h>
void preInpost (int n) {
    if(n==0) return;
    printf("Pre: %d\n",n);
    preInpost(n-1);
    printf("In %d\n",n);
    preInpost(n-1);
    printf("Post: %d\n",n);
}
int main() {
    int n;
    printf("enter your number");
    scanf("%d",&n);
    preInpost(n);
    return 0;
}

//to dry run this copy the pip function two times for 1 and 0 and for each return it goes to the place  where it has been calle
