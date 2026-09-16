#include <stdio.h>
void england() {
    printf("u in england\n");
    return;
}
void australia() {
    printf("u in australia\n");
    england();   \\calling england
    return;
}
void india() {
    printf("u in india\n");
    australia();    \\ calling australia
    return;
}
int main() {
    india(); \\ calling india function
    return 0;
}

\\ jei function call hbe oita sob somoy tar upore rakte hoi naile error dekhabe.