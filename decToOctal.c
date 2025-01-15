// desc: program untuk mengkonversi bilangan desimal ke bilangan oktal
// author: vermilion10
// date: 14 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mengkonversi bilangan desimal ke oktal
void decToOctal(int n){
    if (n == 0) return;
    decToOctal(n / 8);
    printf("%d", n % 8);
}

int main(){
    int n;
    scanf("%d", &n);
    decToOctal(n);
    printf("\n");
    return 0;
}