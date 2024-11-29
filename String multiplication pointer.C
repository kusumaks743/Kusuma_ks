

#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    printf("String characters using pointers:\n");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}
