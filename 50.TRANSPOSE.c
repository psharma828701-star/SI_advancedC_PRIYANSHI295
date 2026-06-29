//TRANSPOSE
#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT
Enter number of rows and columns: 2 3
Enter elements of matrix:
1 2 3
4 5 6

Transpose of matrix:
1 4 
2 5 
3 6 */