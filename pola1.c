// desc: program untuk membuat pola bintang tangga
// contoh input: 5
// contoh output: *
//                * *
//                * * *
//                * * * *
//                * * * * *
// author: vermilion10
// date: 15 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mencetak pola
void printStar(int n, int i, int j){
    if (i == n) return;
    if (j == n){
        printf("\n");
        printStar(n, i + 1, 0);
        return;
    }
    if (j <= i) printf("* ");
    else printf(" ");
    printStar(n, i, j + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printStar(n, 0, 0);
    return 0;
}