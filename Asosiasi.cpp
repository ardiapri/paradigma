#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pnama) :nama(pnama) {
        cout << "pasien \"" << nama << "\" ada\n"

    }
    ~pasien() {
        cout << "pasien \"" << nama << "\" tidak ada\n"
    }
    void tambahdokter(dokter*);
    void cetakdokter();
};

class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pnama) :nama(pnama) {
        cout << "dokter \"" << nama << "\" ada\n";

    }
    ~dokter(){
        cout << "dokter \"" << nama << "\" tidaka ada\n";
    }

      void tambahpasien(pasien*);
      void cetakpasien();
};

