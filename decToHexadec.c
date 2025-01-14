// desc: program untuk mengkonversi bilangan desimal ke bilangan heksadesimal
// author: vermilion10
// date: 14 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mengkonversi bilangan desimal ke heksadesimal
void decToHexadec(int n){
    if (n == 0) return;
    decToHexadec(n / 16);
    int sisa = n % 16;
    if (sisa < 10) printf("%d", sisa);
    else printf("%c", sisa - 10 + 'A');
}

int main(){
    int n;
    scanf("%d", &n);
    decToHexadec(n);
    printf("\n");
    return 0;
}