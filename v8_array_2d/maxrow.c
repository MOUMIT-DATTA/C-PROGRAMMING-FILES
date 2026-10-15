
#include <stdio.h>

int main()
{
    int a[2][2];
    int i, j, sum, maxSum, row;

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    maxSum = 0;
    row = 0;

    for (i = 0; i < 2; i++)
    {
        sum = 0;

        for (j = 0; j < 2; j++)
        {
            sum += a[i][j];
        }

        if (i == 0 || sum > maxSum)
        {
            maxSum = sum;
            row = i;
        }
    }

    printf("Row number with maximum sum = %d\n", row + 1);
    printf("Maximum sum = %d\n", maxSum);

    return 0;
}

