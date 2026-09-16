#include <stdio.h> 
int main() {
    int n;
    printf("enter your number ");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++) {
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//it can be done with use of mathematical formula as well where i+j>n hoilei sudu star astese .
//for(int j=1;j<=n;j++) {
  //          if(i+j>n) {
    //            printf("*");
      //      }
        //    else {printf(" ");}
        //}
          //printf("\n");