#include<stdio.h>
#include<string.h>
typedef struct data {
    int roll;
    char name[30];
    char course[40];
    int yearofjoin;
}student;
void check(student c,student d) {
    int result=strcmp(c.course,d.course);
    if(result==0) printf("similiar courses");
    else printf("not same courses");
}
int main(){
    student a,b;
    a.roll=10125;
    a.yearofjoin=2026;
    strcpy(a.course,"ECE");
    strcpy(a.name,"MOUMIT DATTA");
    b.roll=10124;
    b.yearofjoin=2026;
    strcpy(b.course,"ECE");
    strcpy(b.name,"devansh sharma");
    check(a,b);
    return 0;
}