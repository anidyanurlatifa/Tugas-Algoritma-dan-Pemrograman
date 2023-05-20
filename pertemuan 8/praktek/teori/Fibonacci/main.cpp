#include <iostream>

int fibonacci_rekursif(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci_rekursif(n - 1) + fibonacci_rekursif(n - 2);
}

int main() {
    int n;
    std::cout << "Masukkan jumlah angka Fibonacci yang ingin ditampilkan: ";
    std::cin >> n;

    std::cout << "Deret Fibonacci: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci_rekursif(i) << " ";
    }

    return 0;
}
