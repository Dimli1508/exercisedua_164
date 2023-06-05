#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Penerbit {
public:
    string nama;
    vector<string> penulis;

    Penerbit(string nama) {
        nama = nama;
    }
};

class Pengarang {
public:
    string nama;
    vector<string> buku;
    vector<string> penerbit;

    Pengarang(string nama) {
        nama = nama;
    }
};

class buku {
public:
    string nama;
    vector<string> pengarang;

    buku(string nama) {
        nama = nama;
    }
};

int main() {
    Pengarang joko("Joko");
    Pengarang lia("Lia");
    Pengarang giga("Giga");
    Pengarang asroni("Asroni");
    
    Penerbit gamaPress("Gama Press");
    Penerbit intanPariwara("Intan Pariwara");

    joko.buku = { "Fisika", "Algoritma" };
    lia.buku = { "Basisdata" };
    giga.buku = { "Matematika", "Multimedia 1" };
    asroni.buku = { "Dasar Pemrograman" };
    giga.penerbit = { "Game Press", "Intan Pariwira" };
    
    gamaPress.penulis = { joko.nama, lia.nama, giga.nama };
    intanPariwara.penulis = { asroni.nama, giga.nama };

   
    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    for (const string& nama : gamaPress.penulis) {
        cout << nama << endl;
    }
    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    for (const string& nama : intanPariwara.penulis) {
        cout << nama << endl;
    }
    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    for (const string& nama : giga.penerbit) {
        cout << nama << endl;
    }
    cout << "Daftar buku yang dikarang \"Joko\":" << endl;
    for (const string& buku : joko.buku) {
        cout << buku << endl;
    }
    cout << "Daftar buku yang dikarang \"Lia\":" << endl;
    for (const string& buku : lia.buku) {
        cout << buku << endl;
    }
    cout << "Daftar buku yang dikarang \"Asroni\":" << endl;
    for (const string& buku : asroni.buku) {
        cout << buku << endl;
    }
    cout << "Daftar buku yang dikarang \"Giga\":" << endl;
    for (const string& buku : giga.buku) {
        cout << buku << endl;
    }
    return 0;
}