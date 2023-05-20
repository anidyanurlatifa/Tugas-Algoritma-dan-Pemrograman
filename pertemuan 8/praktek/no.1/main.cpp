#include <iostream>

bool isGanjil(int a) {
    if (a % 2 == 1) {
        return true;
    } else {
        return false;
    }
}

void genapTerkecil(int arr[], int n) {
    int min = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (!isGanjil(arr[i])) {
            if (arr[i] < min) {
                min = arr[i];
                index = i;
            }
        }
    }

    if (index != -1) {
        std::cout << "Genap terkecil: " << min << std::endl;
        std::cout << "Index: " << index << std::endl;
    } else {
        std::cout << "Tidak ada bilangan genap dalam array." << std::endl;
    }
}

int main() {
    int arr[] = {6, 7, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    genapTerkecil(arr, n);

    return 0;
}
