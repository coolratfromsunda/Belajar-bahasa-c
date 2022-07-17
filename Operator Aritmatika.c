#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double b = 5, a = 2;
    double hasil;
    hasil = a+b;
    printf("a + b =%2.lf\n", hasil);

      hasil = a-b;
    printf("a - b =%2.lf\n", hasil);

      hasil = 11%2;
    printf("a % b =%2.lf\n", hasil);

      hasil = a/b;
    printf("a / b =%2.lf\n", hasil);

    hasil = a*b;
    printf("a * b =%2.lf\n", hasil);

    hasil = pow(5,55);
    printf("5 ^ 55 =%2.lf\n",hasil);

    printf("%d\n", 4<5);
     printf("%d\n", 4>5);
      printf("%d\n", 4*5);
       printf("%d\n", 4/5);
        printf("%d\n", 4-5);
         printf("%d\n", 4+5);
          printf("%d", 4%5);
    return 0;
}
