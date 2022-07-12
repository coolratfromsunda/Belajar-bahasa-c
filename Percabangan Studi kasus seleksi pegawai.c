#include <stdio.h>

void main() {
    char jeniskelamin;
    int tinggi;

    printf("Masukan Jenis Kelamin : ");
    scanf("%c", &jeniskelamin);
    printf("Masukan Tinggi Badan : ");
    scanf("%d", &tinggi);

    if(jeniskelamin == 'L') {
    if(tinggi >= 160) {
        printf("Lulus seleksi");
    }else{
        printf("Tidak lulus seleksi");
    }
    }else if(jeniskelamin =='P'){
        if(tinggi >= 155) {
            printf("Lulus Seleksi");
        }else{
            printf("Tidak lulus seleksi");
        }

    }
    }
