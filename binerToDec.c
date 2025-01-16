// desc: program untuk mengkonversi bilangan biner ke desimal
// spesifikasi input: bilangan biner max 31 bit 
// spesifikasi output: representasi desimal dari bilangan biner
// author: vermilion10
// date: 16 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mengkonversi biner ke desimal
int binerToDec(int n){
    if (n == 0) return 0;
    return (n % 10) + 2 * binerToDec(n / 10);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", binerToDec(n));
    return 0;
}