#include <stdio.h>
int main() {
  int n,a=0;
  printf("enter your number");
  scanf("%d",&n);

  
  for (int i=2;i<=n-1;i++) {
    if (n%i==0) {
         a=1;
        break;
  }
}
    if (n<=1) {
     
    printf("number is neither prime nor composite");
  }


  else if (a==0) {
    printf("number is prime");
  }
  else  {
    printf("number is composite");
  }

  
  return 0;
}


      
      
  

    
