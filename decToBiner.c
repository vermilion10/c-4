// desc: buatlah program untuk mengkonversi bilangan desimal ke bilangan biner
// author: vermilion10
// // date: 14 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mengkonversi bilangan desimal ke biner
void decToBiner(int n){
    if (n == 0) return;
    decToBiner(n / 2);
    printf("%d", n % 2);
}

int main(){
    int n;
    scanf("%d", &n);
    decToBiner(n);
    printf("\n");
    return 0;
}