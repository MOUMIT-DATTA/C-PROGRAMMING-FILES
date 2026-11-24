#include<stdio.h>
#include<stdbool.h>
int main() {
    typedef struct date {
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day=19;
    a.month=11;
    a.year=2023;

    b.day=9;
    b.month=12;
    b.year=2026;

    bool flag=true;
    if(a.day!=b.day)  flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year)  flag=false;
    if(flag==true) {
        printf("EQUAL");
    }
    else{
        printf("UNEQUAL");
    }
    return 0;

}