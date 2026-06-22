#include <stdio.h>

int main()
{
    int a[10], n, i, j, leader;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Leaders are\n");
    for(i = 0; i < n; i++)
    {
        leader = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                leader = 0;
                break;
            }
        }

        if(leader)
            printf("%d ", a[i]);
    }
    return 0;
}
