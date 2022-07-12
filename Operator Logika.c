#include <stdio.h>

void main() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) adalah \n %d", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) adalah \n %d", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) adalah \n %d", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) adalah \n %d", result);

    return 0;
}
