#include <iostream>

double pangkat_rekursif(double x, int n) {
    if (n == 0)
        return 1;
    else if (n > 0)
        return x * pangkat_rekursif(x, n - 1);
    else
        return (1.0 / x) * pangkat_rekursif(x, n + 1);
}

int main() {
    double x;
    int n;

    std::cout << "Masukkan bilangan: ";
    std::cin >> x;
    std::cout << "Masukkan pangkat: ";
    std::cin >> n;

    double hasil = pangkat_rekursif(x, n);
    std::cout << "Hasil pangkat: " << hasil << std::endl;

    return 0;
}
