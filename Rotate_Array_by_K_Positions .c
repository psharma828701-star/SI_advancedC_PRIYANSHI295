#include <stdio.h>
int main()
{
    int arr[] = {2,4,6,8,9,1};
    int n=6;
    int pos;
    printf("enter the position");
    scanf("%d", &pos);
    pos = pos % n;

    for (int first = 0; first <= pos; first++)
    {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
    printf("Rotated array ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
