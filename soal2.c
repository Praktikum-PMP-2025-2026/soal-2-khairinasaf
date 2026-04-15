/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : 15 April 2026
 *   Nama (NIM)          : Khairina Safira Nurazizah (13224021)
 *   Nama File           : soal2.c
 *   Deskripsi           : menggunakan rekursi untuk menghitung banyak langkah sampai menjadi 1 dengan aturan transformasi tertentu
 * 
 */

#include <stdio.h>

int sum(int n){
    int T;
    if(n == 1) return 0;

    if(n % 2 == 0){
        return 1 + sum(n/2);
    }
    else if(n % 2 != 0 && n>1)
        return 1 + sum(3*n+1);

    return sum (n);
}

int main(){
    int n, T, langkah;

    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        scanf("%d", &n);
        langkah = sum(n);
        printf("LANGKAH %d\n", langkah);
    }

    return 0;
}

// source code: https://www.geeksforgeeks.org/dsa/introduction-to-recursion-2/
// source code: https://www.w3schools.com/c/c_functions_recursion.php
