// desc: program untuk membuat pola segitiga siku siku 
// contoh input: 5
// contoh output: 1
//                2 1
//                4 2 1
//                8 4 2 1
//                16 8 4 2 1
// author: vermilion10
// date: 16 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mencetak pola
void printPola(int n, int i, int j){
    if (i == n) return;
    if (j == n){
        printf("\n");
        printPola(n, i + 1, 0);
        return;
    }
    if (j <= i) printf("%d ", 1 << i - j);
    else printf(" ");
    printPola(n, i, j + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printPola(n, 0, 0);
    return 0;
}