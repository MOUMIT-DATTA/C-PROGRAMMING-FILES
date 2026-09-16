#include <stdio.h>
int main() {
    int x;
    printf("ENTER YOUR MARKS: ");
    scanf("%d",&x);
    if(x>=90 && x<=100) {
        printf("EXCELLENT");
    }
    else if(x<90 && x>=80) {
        printf("GOOD");
    }
    else if (x<80 && x>=70) {
        printf("GOOD");
    }
    else if (x<70 && x>=60){
        printf("cant do better");
    }
    
    else if (x<60 && x>=50) {
        printf("chutiya hai");
    }
    else if (x<50 && x>=40) {
        printf("khatam hai");
    }
    else if (x<40) {
        printf("toto lele");
    }
    return 0;
}