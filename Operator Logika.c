#include <stdio.h>

void main() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) adalah %d\n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) adalah %d\n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) adalah %d\n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) adalah %d\n", result);

    return 0;
}
