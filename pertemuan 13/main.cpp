#include<iostream>
using namespace std;

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Badai
};


enum Nilai {
    A,
    B,
    C,
    D,
    E
};

enum Buah {
    Apel,
    Pisang,
    Jeruk,
    Mangga,
    Anggur
};

enum Warna {
    Merah,
    Biru,
    Hijau,
    Kuning,
    Putih
};

enum Bentuk {
    Lingkaran,
    Segitiga,
    Persegi,
    PersegiPanjang,
    JajarGenjang
};
int main() {
    Cuaca cuacaHariIni = Cerah;
    Nilai nilaiUjian = A;
    Buah buahPilihan = Pisang;
    Warna warnaPilihan = Kuning;
    Bentuk bentukPilihan = JajarGenjang;

    cout << "Cuaca hari ini: ";
    switch (cuacaHariIni) {
        case Cerah:
            cout << "Cerah";
            break;
        case Mendung:
            cout << "Mendung";
            break;
        case Hujan:
            cout << "Hujan";
            break;
        case Badai:
            cout << "Badai";
            break;
    }
    cout << endl;

    cout << "Nilai ujian: ";
    switch (nilaiUjian) {
        case A:
            cout << "A";
            break;
        case B:
            cout << "B";
            break;
        case C:
            cout << "C";
            break;
        case D:
            cout << "D";
            break;
        case E:
            cout << "E";
            break;
    }
    cout << endl;

    cout << "Buah pilihan: ";
    switch (buahPilihan) {
        case Apel:
            cout << "Apel";
            break;
        case Pisang:
            cout << "Pisang";
            break;
        case Jeruk:
            cout << "Jeruk";
            break;
        case Mangga:
            cout << "Mangga";
            break;
        case Anggur:
            cout << "Anggur";
            break;
    }
    cout << endl;

    cout << "Warna pilihan: ";
    switch (warnaPilihan) {
        case Merah:
            cout << "Merah";
            break;
        case Biru:
            cout << "Biru";
            break;
        case Hijau:
            cout << "Hijau";
            break;
        case Kuning:
            cout << "Kuning";
            break;
        case Putih:
            cout << "Putih";
            break;
    }
    cout << endl;

    cout << "Bentuk pilihan: ";
    switch (bentukPilihan) {
        case Lingkaran:
            cout << "Lingkaran";
            break;
        case Segitiga:
            cout << "Segitiga";
            break;
        case Persegi:
            cout << "Persegi";
            break;
        case PersegiPanjang:
            cout << "Persegi Panjang";
            break;
        case JajarGenjang:
            cout << "Jajar Genjang";
            break;
    }
    cout << endl;

    return 0;
}
