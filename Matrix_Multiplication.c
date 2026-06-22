#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Boundary elements\n");

    // Top row
    for(j = 0; j < c; j++)
        printf("%d ", a[0][j]);

    // Right column
    for(i = 1; i < r; i++)
        printf("%d ", a[i][c-1]);

    // Bottom row
    for(j = c-2; j >= 0; j--)
        printf("%d ", a[r-1][j]);

    // Left column
    for(i = r-2; i > 0; i--)
        printf("%d ", a[i][0]);

    return 0;
}