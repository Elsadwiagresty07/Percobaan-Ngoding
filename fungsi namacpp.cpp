#include <iostream>
#include <string>

using namespace std;

void inputData(string &nama, string &npm, int &umur) {
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan NPM Anda: ";
    getline(cin, npm);

    cout << "Masukkan umur Anda: ";
    cin >> umur;
}

int main() {
    string nama, npm;
    int umur;
    char konfirmasi;

    cout << "Apakah Anda ingin memasukkan data? (y/n) ";
    cin >> konfirmasi;

    if (konfirmasi == 'y' || konfirmasi == 'Y') {
        inputData(nama, npm, umur);

        cout << endl << "Data yang telah dimasukkan:" << endl;
        cout << "Nama: " << nama << endl;
        cout << "NPM: " << npm << endl;
        cout << "Umur: " << umur << endl;
    } else {
        cout << "Proses dibatalkan." << endl;
    }

    return 0;
}

