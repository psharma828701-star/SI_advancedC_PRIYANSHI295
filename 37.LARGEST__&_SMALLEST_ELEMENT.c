// Write a program to find the largest and smallest element in an array.
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, smallest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}



/*output
Enter size of array: 5
Enter array elements:
250
25689 
5896
453
125
Largest element = 25689
Smallest element = 125*/
