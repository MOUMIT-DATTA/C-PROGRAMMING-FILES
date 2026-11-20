#include <stdio.h> 
int main() { 
    int arr[5] = {12, 34, 9, 56, 23}; 
    int pos = 3; 
    // Shift elements to the left to delete the element at position 'pos' 
    for (int i = pos; i < 4; i++) { 
        arr[i] = arr[i + 1]; 
 

    } 
    printf("Array after deletion: "); 
    for (int i = 0; i < 4; i++) { 
        printf("%d ", arr[i]); 
    } 
    return 0; 
}