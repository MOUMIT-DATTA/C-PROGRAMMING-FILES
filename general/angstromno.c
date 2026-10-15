I think you meant Armstrong number, not "Angstrom" (which is a unit of length).
An Armstrong number (also called a narcissistic number) is a number that is equal to the sum of its digits raised to the power of the number of digits.
Example:

153=13+53+33153 = 1^3 + 5^3 + 3^3153=13+53+33 → Armstrong number
9474=94+44+74+449474 = 9^4 + 4^4 + 7^4 + 4^49474=94+44+74+44 → Armstrong number

Here’s a complete C program to check whether a number is an Armstrong number:
C#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    if (num < 0) return 0; // Negative numbers are not Armstrong numbers

    int originalNum = num;
    int digits = 0;
    int sum = 0;

    // Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of digits
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

