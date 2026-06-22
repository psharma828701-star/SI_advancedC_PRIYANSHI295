#include <stdio.h>

int main()
{
    int n, i, j, k, count;
    scanf("%d", &n);
    int a[n];
for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Elements appearing more than N/3 times:\n");

    for(i = 0; i < n; i++)
    {
        for(k = 0; k < i; k++)
        {
            if(a[i] == a[k])
                break;
        }

        if(k != i)
            continue;
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count > n/3)
            printf("%d ", a[i]);
    }

    return 0;
}

