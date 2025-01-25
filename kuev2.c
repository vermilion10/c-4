// desc              : program untuk menentukan apakah kue K dan kue L sama 
// spesifikasi input : Baris pertama berisi sebuah bilangan riil N (50 <= N <= 100) dalam satuan persentase sebagai batas minimal dua buah kue
//                     dinyatakan sama.
//                     Baris kedua berisi sebuah bilangan bulat P (1 <= P <= 8) yang menunjukkan jumlah komposisi pada kue K.
//                     P baris berikutnya berisi masing-masing komposisi kue K.
//                     Baris kedua berisi sebuah bilangan bulat Q (1 <= Q <= 8) yang menunjukkan jumlah komposisi pada kue L
//                     Q baris berikutnya berisi masing-masing komposisi kue L.
// spesifikasi output: Satu baris berisi “sama” apabila kue K dan kue L sama, atau “tidak sama" apabila kue K dan kue L tidak sama. 
// author            : vermilion10
// date              : 25 januari 2025

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Fungsi untuk memeriksa apakah suatu bahan ada di dalam array
bool isBahanAda(char bahan[], int n, char arr[][20]){
    for (int i = 0; i < n; i++){
        if (strcmp(bahan, arr[i]) == 0){
            return true;
        }
    }
    return false;
}

// Fungsi untuk menghitung persentase kemiripan bahan
float persentaseKemiripan(int n1, char arr1[][20], int n2, char arr2[][20]){
    int count = 0;
    for (int i = 0; i < n1; i++){
        if (isBahanAda(arr1[i], n2, arr2)){
            count++;
        }
    }
    return (float) count / n1 * 100;
}

// Prosedur untuk membaca input bahan
void readBahan(int n, char arr[][20]){
    for (int i = 0; i < n; i++){
        scanf("%s", arr[i]);
    }
}

// Prosedur untuk memeriksa apakah dua kue sama
void cekStatus(float N, int P, char arr1[][20], int Q, char arr2[][20]){
    float kemiripan = persentaseKemiripan(P, arr1, Q, arr2);
    if (kemiripan >= N){
        printf("sama");
    } else {
        printf("tidak sama");
    }
}

int main(){
    float N;
    int P, Q;
    scanf("%f", &N);
    scanf("%d", &P);
    char arr1[P][20];
    readBahan(P, arr1);
    scanf("%d", &Q);
    char arr2[Q][20];
    readBahan(Q, arr2);
    cekStatus(N, P, arr1, Q, arr2);
    return 0;
}