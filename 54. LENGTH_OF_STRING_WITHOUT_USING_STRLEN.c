// LENGTH_OF_STRING_WITHOUT_USING_STRLREN
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length of string = %d", i);

    return 0;
}

/*OUTPUT
Enter a string: HELLO
Length of string = 5*/