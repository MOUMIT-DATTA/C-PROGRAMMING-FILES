#include<stdio.h>
#include<string.h>
int main() {
    struct person {
            char name[50];
            int age;
            int salary;
    } a,b;

    a.age=18;
    a.salary=85000;
    strcpy(a.name,"SAMEER");
    b.age=20;
    b.salary=125000;
    strcpy(b.name,"KARIK");
    printf("%d\n",a.age);
    printf("%s",b.name);
    return 0;
}