#include <iostream>
#include <cstdlib>

using namespace std;

int tambah(int a, int b){
    int c = a + b;
    return c;
}

int kurang(int a, int b){
    int c = a - b;
    return c;
}

int kali(int a, int b){
    int c = a * b;
    return c;
}

float bagi(float a, int b){
    float c = a / b;
    return c;
}

int total(int arr[], int x){
    int hasil = 0;
    for(int i=0; i < x; i++){
        hasil += arr[i];
    }
    return hasil;
}


float rata(int arr[],int x){
    float hasil = 0;
    for(int i=0; i < x; i++){
        hasil += arr[i];
    }
    return hasil /= x;
}


int main()
{
    int x,y,n;
    cout <<endl<< "<=================> Soal Tambah,Kurang,Kali,Bagi <===================>"<< endl;
    char h;
    cout << "masukan angka1: ";
    cin >> x;
    cout << "masukan angka2: ";
    cin >> y;
    cout << "hasil: " << endl;

    cout << "1.ditambahkan = "<< tambah(x,y) << endl;
    cout << "2.dikurangkan = "<< kurang(x,y) << endl;
    cout << "3.dikalikan   = "<< kali(x,y) << endl;
    cout << "4.dibagikan   = "<< bagi(x,y) << endl;
    cout <<  "<=================> Soal Array <===================>" << endl;
    cout << "Masukkan jumlah element Array yang akan diinput : ";
    cin >> x;
    int arr[x];
    for(int i=0;i<x;i++){
        cout << "Masukkan array ke- [" << i << "] = ";
        cin >> arr [i];
    }
    cout <<  "<======================================================>" << endl;

    cout << "Total bilangan array yang diinput\t\t: " << total(arr,x) << endl;
    cout << "Rata - Rata bilangan array yang diinput\t\t: " << rata(arr,x) << endl;

    return 0;
}
