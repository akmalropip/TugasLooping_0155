#include <iostream>
using namespace std;

//deklarasi variabel global
int angka;
int pilihan;

//function mengecek bilangan prima menngunakan while loop
bool cekPrima(int n) {
    if (n <= 1) {
        return false;
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

//function mengecek bilangan fibonacci menggunakan while loop
bool cekFibonacci(int n) {
    if (n < 0) {
        return false;
    }
    int a = 0;
    int b = 1;
    int c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c; 
    }
    if (c == n || n == 0) {
        return true;
    } else {
        return false;
    }
}

//prosedur menampilkan menu utama
void tampikanMenu() {
    cout << "\n=== PROGRAM PENGECEKAN BILANGAN ===" << endl;
    cout << "1. Cek Biangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Masukkan Pilihan Anda (0/1/2) : " << endl;
}

//prosedur input angka
void inputAngka () {
    cout << "\nMasukkan angka yang ingin dicek ";
    cin >> angka;
}

//prosedur menampilkan hasil pengecekan prima
void hasilPrima () {
    if (cekPrima(angka)) {
        cout << ">> HASIL: " << angka << " ADALAH Bilangan Prima." << endl;
    } else {
        cout << ">> HASIL: " << angka << " BUKAN Bilangan Prima." << endl;
    }
}