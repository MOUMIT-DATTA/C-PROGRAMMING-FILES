#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x3,y3;
    printf("ENTER YOUR FIRST CORDINATE");
    scanf("%d %d",&x1,&y1);
    printf("ENTER YOUR SECOND CORDINATE");
    scanf("%d %d",&x2,&y2);
    printf("ENTER YOUR THIRD CORDINATE");
    scanf("%d %d",&x3,&y3);
    double m1,m2;
    m1= y2-y1/x2-x1;
    m2= y3-y2/x3-x2;
    if (m1==m2) {
        printf("LIES ON THE SAME LINE");
    }
    else {
        printf("DON'T LIE IN THE SAME LINE");
    }
    return 0;

    

}