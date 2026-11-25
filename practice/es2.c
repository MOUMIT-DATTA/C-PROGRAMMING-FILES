#include<stdio.h>
int main() {
    typedef struct student{
        char name[30];
        int rollno;
        int age;
        float percentage;
        char adress[100];
        int mobile;
        char email[40];
    } student;
    
    student arr[3];
    for(int i=0;i<3;i++) {
        scanf("%d",&arr[i].rollno);
        scanf("%d",&arr[i].age);
        scanf("%f",&arr[i].percentage);
        scanf("%d",&arr[i].mobile);
        scanf("%s",&arr[i].name);
        scanf("%s",&arr[i].email);
    }
        
    for(int i=0;i<3;i++) {
        printf("%d",arr[i].rollno);
        printf("%d",arr[i].age);
        printf("%f",arr[i].percentage);
        printf("%d",arr[i].mobile);
        printf("%s",arr[i].name);
        printf("%s",arr[i].email);

}
}