#include<stdio.h>
#include<string.h>
int main() {
    char str[20];
    int vowels=0,consonants=0;
    puts("enter your string");
    gets(str);
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
            vowels++;
        }
        else{
            consonants++;
        }
    }
    printf("vowels=%d\n",vowels);
    printf("consonants=%d",consonants);
    return 0;
}