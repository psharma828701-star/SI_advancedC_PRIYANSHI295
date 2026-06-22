#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter size of array");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                count++;
        }
    }

    printf("Number of inversions = %d", count);

    return 0;
}
