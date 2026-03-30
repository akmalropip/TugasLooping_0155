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