#include <stdio.h>

voidn main() {
    char input = 'y'
    while(input == 'y') {
        printf("Apakah diki ganteng ? (y/t): ");
        scanf("%c", &input);
    }
    printf("\n\n Diki Tidak ganteng!");
}
