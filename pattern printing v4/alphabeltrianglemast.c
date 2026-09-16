#include<stdio.h> 
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {             //using multiple loops for * and space.
        int a=1;
        for(int k=1;k<=n-i;k++) {
               printf(" ") ;
        }
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char) d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
//this one is using the mathematical formula.
//for (int j=1;j<=n;j++) {
  //          if(i+j>n) {
    //            int d= a+64;
      //          char ch = (char) d;
        //        printf("%c",ch);
          //      a++;
            //}
//            else{printf(" ");}
  //      }
    //    printf("\n");