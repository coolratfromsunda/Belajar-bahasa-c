#include <stdio.h>

void main() {
    int nilai;

    printf("Inpukan nilai: " );
    scanf("%d", &nilai);

    if(nilai > 80 && nilai <=100) {
        printf("\nNilai A");
    }else if(nilai >= 71 && nilai <= 80){
        printf("\nNilai B");
    }else if(nilai >= 61 && nilai <= 70){
        printf("\nNilai C");
    }else {
        printf("\nAnda tidak lulus");
    }
}
