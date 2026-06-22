#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n");
    scanf("%d", &n);

    int a[n][n];
    int num = 1;

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    while (top <= bottom && left <= right)
    {
        for (j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        for (i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;
        if (top <= bottom)
        {
            for (j = right; j >= left; j--)
                a[bottom][j] = num++;
            bottom--;
        }
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }
    printf("\nSpiral Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    return 0;
}
