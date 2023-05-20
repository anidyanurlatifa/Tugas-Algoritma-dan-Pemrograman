#include <iostream>

using namespace std;



// Metode Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex])
                maxIndex = j;
        }
        std::swap(arr[i], arr[maxIndex]);
    }
}

// Metode Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
        }
    }
}

// Fungsi untuk menampilkan elemen-elemen array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array sebelum diurutkan: ";
    displayArray(arr, size);

    std::cout << "Selection Sort: ";
    selectionSort(arr, size);
    displayArray(arr, size);

    std::cout << "Bubble Sort: ";
    bubbleSort(arr, size);
    displayArray(arr, size);

    return 0;
}
