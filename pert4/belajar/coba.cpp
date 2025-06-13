#include <iostream>

using namespace std;

void tambah (int a, int b){
    cout << "Hasil Tambah: " << a + b << endl;
}

void kurang (int a, int b){
    cout << "Hasil Kurang: " << a - b << endl;
}

void kali ( int a, int b) {
    cout << "Hasil Kali: " << a * b << endl;
}

void bagi (int a, int b) {
    cout << "Hasil Bagi: " << a / b << endl;
}

//fungsi utama
int main (){
    int a, b;
    cout << "Masukkan Angka: " << endl;
    cin >> a >> b;

    tambah (a, b);
    kurang (a, b);
    kali (a, b);
    bagi (a, b);
    return 0;
}