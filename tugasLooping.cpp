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