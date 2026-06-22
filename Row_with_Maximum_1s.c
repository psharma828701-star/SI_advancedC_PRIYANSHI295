#include <stdio.h>

int main()
{
    int r, c, i, j;
    scanf("%d%d", &r, &c);
    int a[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int maxCount = 0;
    int rowIndex = 1;
    for(i = 0; i < r; i++)
    {
        int count = 0;
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == 1)
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            rowIndex = i + 1;
        }
    }
    printf("Row with maximum 1s = %d", rowIndex);

    return 0;
}