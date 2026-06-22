#include <stdio.h>

int main()
{
    int r, c, i, j, key;
    printf("Enter rows and columns");
    scanf("%d%d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter element to search ");
    scanf("%d", &key);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == key)
            {
                printf("Element found at row %d column %d", i + 1, j + 1);
                return 0;
            }
        }
    }

    printf("Element not found");

    return 0;
}