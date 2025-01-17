// desc: program untuk menghitung banyak bilangan tanpa akhiran 4 dari interval [x, y]
// spesifikasi input: dua buah bilangan bulat x dan y (1 <= x < y <= 500)
// spesifikasi output: banyak bilangan tanpa akhiran 4 dari interval [x, y]
// author: vermilion10
// date: 17 januari 2025

#include <stdio.h>

//fungsi rekursif u/ m'hitung byk bil tanpa akhiran 4
int countTanpa4(int x, int y){
    if (x == y) return 0;
    if (x % 10 == 4) return countTanpa4(x + 1, y);
    return 1 + countTanpa4(x + 1, y);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", countTanpa4(x + 1, y));
    return 0;
}