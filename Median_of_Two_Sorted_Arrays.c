#include <stdio.h>

int main()
{
    int n1, n2, i, j, k = 0;

    scanf("%d", &n1);
    int a[n1];

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int c[n1 + n2];

    i = 0;
    j = 0;

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    int n = n1 + n2;

    if(n % 2 == 0)
        printf("Median = %.2f", (c[n/2] + c[n/2 - 1]) / 2.0);
    else
        printf("Median = %d", c[n/2]);

    return 0;
}
