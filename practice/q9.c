#include<stdio.h>
int main() {
    typedef struct student {
        char name[30];
        int rollno;
        int marks;
    }student;
    int n;
    printf("enter number of students ");
    scanf("%d",&n);
    student arr[n]; // struct student arr[n];
    for(int i=0;i<n;i++) {
        scanf("%s ", arr[i].name);
        scanf("%d",&arr[i].rollno);
        scanf("%d",&arr[i].marks);
    }
    for(int i=0;i<n;i++) {
        printf("%s\n", arr[i].name);
        printf("%d\n",arr[i].rollno);
        printf("%d\n",arr[i].marks);
    }
    return 0;

}