#include <stdio.h>

int main() {
    int num;

    // Take input from user
    printf("Enter any integer: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    // We will call switch for each multiplier manually
    switch (1) {
        case 1:
            printf("%d x 1 = %d\n", num, num * 1);
    }
    switch (2) {
        case 2:
            printf("%d x 2 = %d\n", num, num * 2);
    }
    switch (3) {
        case 3:
            printf("%d x 3 = %d\n", num, num * 3);
    }
    switch (4) {
        case 4:
            printf("%d x 4 = %d\n", num, num * 4);
    }
    switch (5) {
        case 5:
            printf("%d x 5 = %d\n", num, num * 5);
    }
    switch (6) {
        case 6:
            printf("%d x 6 = %d\n", num, num * 6);
    }
    switch (7) {
        case 7:
            printf("%d x 7 = %d\n", num, num * 7);
    }
    switch (8) {
        case 8:
            printf("%d x 8 = %d\n", num, num * 8);
    }
    switch (9) {
        case 9:
            printf("%d x 9 = %d\n", num, num * 9);
    }
    switch (10) {
        case 10:
            printf("%d x 10 = %d\n", num, num * 10);
    }

    return 0;
}

