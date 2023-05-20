#include <iostream>

unsigned long long faktorial_rekursif(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * faktorial_rekursif(n - 1);
}

int main() {
    unsigned int n;
    std::cout << "Masukkan angka untuk menghitung faktorial: ";
    std::cin >> n;

    unsigned long long hasil = faktorial_rekursif(n);
    std::cout << "Faktorial dari " << n << " adalah: " << hasil << std::endl;

    return 0;
}
