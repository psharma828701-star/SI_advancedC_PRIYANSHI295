// INSERTION OF AN ELEMENT
#include <stdio.h>

int main() {
    int a[100], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

 
    printf("Enter position for insertion: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}

/*OUTPUT
Enter number of elements: 3
Enter array elements:
121 568 895
Enter position for insertion: 2
Enter value to insert: 695
Array after insertion:
121 695 568 895*/
