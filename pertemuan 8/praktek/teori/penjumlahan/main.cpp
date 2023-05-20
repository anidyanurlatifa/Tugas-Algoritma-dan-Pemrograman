#include <iostream>

int penjumlahan_rekursif(int n) {
    if (n == 0)
        return 0;
    else
        return n + penjumlahan_rekursif(n - 1);
}

int main() {
    int n;
    std::cout << "Masukkan angka: ";
    std::cin >> n;

    int hasil = penjumlahan_rekursif(n);
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    return 0;
}

