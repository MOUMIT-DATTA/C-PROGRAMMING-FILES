#include <stdio.h> //use of realloc,malloc,free
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

    // 1. MALLOC: Allocate memory for 2 integers
    ptr = (int *)malloc(2 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Store 2 values
    ptr[0] = 10;
    ptr[1] = 20;

    printf("Values after malloc: %d, %d\n", ptr[0], ptr[1]);

    // 2. REALLOC: Resize memory to hold 4 integers
    ptr = (int *)realloc(ptr, 4 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Store 2 more values (old values 10 and 20 remain safe)
    ptr[2] = 30;
    ptr[3] = 40;

    printf("Values after realloc: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // 3. FREE: Release the allocated memory
    free(ptr);
    printf("Memory freed successfully.\n");

    return 0;
}