#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for(i = 0; i < n; i++) 
    {
        totalSum= totalSum+arr[i];
    }
    int leftSum = 0;
    for(i = 0; i < n; i++) {
        totalSum= totalSum-arr[i];   

        if(leftSum == totalSum) 
        {
            printf("Equilibrium Index = %d\n", i);
            return 0;
        }
        leftSum= leftSum+ arr[i];
    }
    printf("No Equilibrium Index Found\n");
    return 0;
}
