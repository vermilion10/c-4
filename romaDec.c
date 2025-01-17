// desc: program untuk mengkonversi bilangan romawi ke desimal
// spesifikasi input: angka romawi dengan panjang max 15 karakter, dimana pada representasi desimalnya, angka ini tidak akan lebih besar dari 4000 dan selalu positif 
// spesifikasi output: representasi desimal dari angka romawi
// contoh input: XXIV
// contoh output: 24
// author: vermilion10
// date: 17 januari 2025

#include <stdio.h>
#include <string.h>

//fungsi rekursif u/ m'konversi romawi ke desimal
int romawiToDec(char romawi[], int i){
    if (i >= strlen(romawi)) return 0;
    if (romawi[i] == 'I'){
        if (romawi[i + 1] == 'V') return 4 + romawiToDec(romawi, i + 2);
        if (romawi[i + 1] == 'X') return 9 + romawiToDec(romawi, i + 2);
        return 1 + romawiToDec(romawi, i + 1);
    }
    if (romawi[i] == 'V') return 5 + romawiToDec(romawi, i + 1);
    if (romawi[i] == 'X'){
        if (romawi[i + 1] == 'L') return 40 + romawiToDec(romawi, i + 2);
        if (romawi[i + 1] == 'C') return 90 + romawiToDec(romawi, i + 2);
        return 10 + romawiToDec(romawi, i + 1);
    }
    if (romawi[i] == 'L') return 50 + romawiToDec(romawi, i + 1);
    if (romawi[i] == 'C'){
        if (romawi[i + 1] == 'D') return 400 + romawiToDec(romawi, i + 2);
        if (romawi[i + 1] == 'M') return 900 + romawiToDec(romawi, i + 2);
        return 100 + romawiToDec(romawi, i + 1);
    }
    if (romawi[i] == 'D') return 500 + romawiToDec(romawi, i + 1);
    if (romawi[i] == 'M') return 1000 + romawiToDec(romawi, i + 1);
    return 0;
}


int main(){
    char romawi[16];
    scanf("%s", romawi);
    printf("%d", romawiToDec(romawi, 0));
    return 0;
}