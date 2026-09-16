#include <stdio.h>
int main() {
    int num;
    printf("enter your number whose table you want");
    scanf("%d",&num);
    swtich (num) {
        case 1:
         printf(" %d x 1 = %d",num,num*1);
         case 2:
         printf(" %d x 2 = %d",num,num*2);
    

         case 3:
         printf(" %d x 3 = %d",num,num*3);


         case 4:
         printf(" %d x 2 = %d",num,num*4);
    

         case 5:
         printf(" %d x 2 = %d",num,num*5);
         case 6:
         printf(" %d x 2 = %d",num,num*6);
         case 7:
         printf(" %d x 2 = %d",num,num*7);
         case 8:
         printf(" %d x 2 = %d",num,num*8);
         case 9:
         printf(" %d x 2 = %d",num,num*9);
         case 10:
         printf(" %d x 2 = %d",num,num*10);
         break;
         default:
         printf("WRONG INPUT");

        

    }
    return 0;
}