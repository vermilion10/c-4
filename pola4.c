// desc: program untuk menampilkan pola
// contoh input: 3 5
// contoh output: 1 6 7 12 13
//                2 5 8 11 14
//                3 4 9 10 15
// author: vermilion10
// date: 16 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mencetak pola
void printPola(int n, int m, int i, int j, int k ){
    if (i == n) return;
    if (j == m){
        printf("\n");
        printPola(n, m, i + 1, 0, k);
        return;
    }
    if (j % 2 == 0) printf("%d ", i + 1 + j * n);
    else printf("%d ", (j + 1) * n - i);
    printPola(n, m, i, j + 1, k);
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printPola(n, m, 0, 0, 1);
    return 0;
}