#include <iostream>

int perkalian_rekursif(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + perkalian_rekursif(a, b - 1);
}

int main() {
    int a, b;
    std::cout << "Masukkan bilangan pertama: ";
    std::cin >> a;
    std::cout << "Masukkan bilangan kedua: ";
    std::cin >> b;

    int hasil = perkalian_rekursif(a, b);
    std::cout << "Hasil perkalian: " << hasil << std::endl;

    return 0;
}

