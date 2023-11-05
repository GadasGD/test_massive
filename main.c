#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Input: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    if (rows < 0 || cols < 0)
    {
        printf("Error: rows and cols must be positive numbers\n");
        return 1;
    }
    
    for (int i = 0, k = 0, chet = 2, count = 0; i < rows; ++i)
    {
        if (chet % 2 == 1)
        {
            k += cols;
        }
        if (chet % 2 == 0)
        {
            k = count;
        }
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = k;
            if (chet % 2 == 0)
            {
                k++;
                count++;
            }
            if (chet % 2 == 1)
            {
                k--;
                count++;
            }
        }
        chet++;
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}