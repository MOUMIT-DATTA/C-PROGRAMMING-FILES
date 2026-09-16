#include <stdio.h>

int main() {
    int num;

    // Input validation
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nMultiplication Table of %d:\n", num);

    // Using switch without loop
    switch (1) { // Always true, used to group all cases
        case 1:
            printf("%d x 1 = %d\n", num, num * 1);
        case 2:
            printf("%d x 2 = %d\n", num, num * 2);
        case 3:
            printf("%d x 3 = %d\n", num, num * 3);
        case 4:
            printf("%d x 4 = %d\n", num, num * 4);
        case 5:
            printf("%d x 5 = %d\n", num, num * 5);
        case 6:
            printf("%d x 6 = %d\n", num, num * 6);
        case 7:
            printf("%d x 7 = %d\n", num, num * 7);
        case 8:
            printf("%d x 8 = %d\n", num, num * 8);
        case 9:
            printf("%d x 9 = %d\n", num, num * 9);
        case 10:
            printf("%d x 10 = %d\n", num, num * 10);
            break; // End of switch
        default:
            printf("Unexpected case.\n");
    }

    return 0;
}


//How it works:

//We use switch(1) so that case 1 matches and then fall-through executes all subsequent cases without break until case 10.
