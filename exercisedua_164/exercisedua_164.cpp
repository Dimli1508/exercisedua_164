#include <iostream>
#include <vector>
#include <string>
using namespace std; 

class pengarang;
class penerbit {
private:
    string nama_penerbit;
    vector <pengarang> daftar_pengarang;
public:
    penerbit(const string& nama) : nama_penerbit(nama) {}
    void tambah_pengarang(pengarang* pengarang) {
        daftar_pengarang.push_back(pengarang);
    }
    void daftar_pengarang() {
        cout << "Daftar pengarang pada penerbit\"" << nama_penerbit << "\":" << endl;
        for (auto pengarang : daftar_pengarang) {
            cout << pengarang->get_nama_pengarang() << endl;
        }
        cout << endl;
    }
};

class buku {
private:
    string judul_buku;
public:
    buku(const string& judul) : judul_buku(judul) {}
    string get_judul_buku() {
        return judul_buku;
    }
};


