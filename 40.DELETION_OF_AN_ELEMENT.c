// deletion OF AN ELEMENT
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
 
    printf("\n\nEnter position for deletion: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}
/*OUTPUT
Enter number of elements: 3
Enter array elements:
125 256 896


Enter position for deletion: 2
Array after deletion:
125 896*/
