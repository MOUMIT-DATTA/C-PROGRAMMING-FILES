#include<stdio.h>
#include<math.h>
int main() {
    int x,y,n;
    printf("enter your 2 numbers");
    scanf("%d %d",&x,&y);
    printf("choose your number");
    scanf("%d",&n);
    switch(n) {
        case 1:
        printf("required sum is %d",x+y);
        break;
        case 2:
        printf("required difference is %d",x-y);
        break;
        case 3:
        printf("greater nummber is  %d",(x>y) ? x:y );
        break;
        case 4:
        x=x+y;
        y=x-y;
        x=x-y;
        printf("values after swapping x= %d y= %d",x,y);
        default:
        printf("enter a valid number ");

    }
    return 0;
}