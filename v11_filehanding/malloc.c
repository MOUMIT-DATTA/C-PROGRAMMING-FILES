#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("enter number of elements ");
    scanf("%d",&n);
    int* ptr=(int*) malloc(n*sizeof(int));    // declaring a kind of space r ptr first index e point koire boise ase
    int*p=ptr; //input newar time e ptr agey choile jabe toa prothom index er adress lagbe print korar jonno tai save koire raktesi
    for(int i=1;i<=n;i++) {
        scanf("%d",&(*ptr));
        ptr++;
    }
    for(int i=1;i<=n;i++) {
        printf("%d ",(*p));
        p++;
    }
    return 0;

}
