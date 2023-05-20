#include <iostream>

int pengurangan_rekursif(int n) {
    if (n == 0)
        return 0;
    else
        return n - pengurangan_rekursif(n - 1);
}

int main() {
    int n;
    std::cout << "Masukkan angka: ";
    std::cin >> n;

    int hasil = pengurangan_rekursif(n);
    std::cout << "Hasil pengurangan: " << hasil << std::endl;

    return 0;
}
