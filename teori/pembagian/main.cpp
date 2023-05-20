#include <iostream>

int pembagian_rekursif(int a, int b) {
    if (a < b)
        return 0;
    else
        return 1 + pembagian_rekursif(a - b, b);
}

int main() {
    int a, b;
    std::cout << "Masukkan bilangan pertama: ";
    std::cin >> a;
    std::cout << "Masukkan bilangan kedua: ";
    std::cin >> b;

    int hasil = pembagian_rekursif(a, b);
    std::cout << "Hasil pembagian: " << hasil << std::endl;

    return 0;
}
