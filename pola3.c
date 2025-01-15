// desc: program untuk menampikan pola
// contoh input: 5
// contoh output: 1 2 3 4 5
//                6 7 8 9
//                10 11 12
//                13 14
//                15
// author: vermilion10
// date: 16 januari 2025

#include <stdio.h>

//fungsi rekursif untuk mencetak pola
void printPola(int n, int i, int j, int k){
    if (i == n) return;
    if (j == n - i){
        printf("\n");
        printPola(n, i + 1, 0, k);
        return;
    }
    printf("%d ", k++);
    printPola(n, i, j + 1, k);
}

int main(){
    int n;
    scanf("%d", &n);
    printPola(n, 0, 0, 1);
    return 0;
}