#include <iostream>
#include <string>

using namespace std;

int main () {
    string nama;
    float umur;
    cout << "Masukkan Nama Anda: ";
    getline (cin, nama);

    cout << "Masukkan Umur Kamu: ";
    cin >> umur;

if (nama == "Yohan") {
    cout << "Nama lu Bukan " << nama << ", lu tu monyet, Aurat kemana-mana" << endl;
} else if (nama == "Ihal"){
    cout << "nama kamu adalah: monyet" << endl;
} else {
    cout << "nama kamu adalah: " << nama << endl;
}

if (umur > 30) {
    cout << "umur lu " << umur << "? dih najis tua" << endl;
} else {
    cout << "umur kamu adalah: " << umur << endl;
}
    return 0;

}