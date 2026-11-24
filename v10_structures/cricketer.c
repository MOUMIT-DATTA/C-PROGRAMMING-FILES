#include<stdio.h>
#include<string.h>
int main() {
    typedef struct cricketer {   //dont write full name
        char name[30];
        int average;
        int matches;
        int totalruns;
    }cric;
    cric arr[3];
    for(int i=0;i<3;i++) {
        scanf("%s",&arr[i].name);
        scanf("%d\n",&arr[i].average);
        scanf("%d\n",&arr[i].matches);
        scanf("%d\n",&arr[i].totalruns);
        
    }
   for(int i=0;i<3;i++) {
        printf("NAME-%s\n",arr[i].name);
        printf("AVERAGE %d\n",arr[i].average);
        printf("NUMBER OF MATCHES %d\n",arr[i].matches);
        printf("TOTAL RUNS %d\n",arr[i].totalruns);
    }
    return 0;
}