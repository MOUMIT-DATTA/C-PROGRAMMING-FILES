#include<stdio.h>
#include<string.h>
int main() {
    char str1[30];
    char str2[30];
    puts("enter first string");
    gets(str1);
    puts("enter second string");
    gets(str2);
    int i=0;
    while(str1[i]==str2[i]&&str1[i]!='\0') {
        i++;
    }
    if(str1[i]=='\0'&&str2[i]=='\0') {
        printf("strings are identical");
    }
    else{
        printf("strings are non-identical");
    }
    return 0;
}
// using in built functions:
// int result= strcmp(str1,str2); if result is 0 then they are identical else not....