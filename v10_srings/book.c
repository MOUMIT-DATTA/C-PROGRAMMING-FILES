#include<stdio.h>
#include<string.h>
int main() {
    struct book {
        char name[50];
        int price;
        int pages;
    } a,b;

    a.price=350;
    a.pages=450;
    strcpy(a.name,"HARRY POTTER");     //BCZ IN STRING WE DO INITIALIZATION AND DECLARATION TOGETHER AND IF NOT THEN STR CPY IS USED INT HIS MANNER
   
    b.price=500;
    b.pages=600;
    strcpy(b.name,"SECRETS OF DUMBLEDORE");

    printf("%d ",a.price);
    printf("%d ",a.pages);
    printf("%s \n",a.name);

    printf("%d ",b.price);
    printf("%d ",b.pages);
    printf("%s ",b.name);
}
