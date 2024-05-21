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

void pasien::tambahdokter(dokter* pdokter) {
    daftar_dokter.push_back(pdokter);
}
void pasien::cetakdokter() {
    cout << "daftar dokter yang menangani pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
void dokter::tambahpasien(pasien* ppasien) {
    daftar_pasien.push_back(ppasien);
    ppasien->tambahdokter(this);

}
void dokter::cetakpasien() {
    cout << "daftar pasien dari dokter \"" << this->nama << "\":\n";
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main(){
    dokter* vardokter1 = new dokter("dr.budi");
    dokter* vardokter2 = new dokter("dr.tono");
    pasien* varpasien1 = new pasien("andi");
    pasien* varpasien2 = new pasien("lia");

    vardokter1->tambahpasien(varpasien1);
    vardokter1->tambahpasien(varpasien2);
    vardokter1->tambahpasien(varpasien1);

    vardokter1->cetakpasien();
    vardokter2->cetakpasien();
    varpasien1->cetakdokter();
    varpasien2->cetakdokter();

    delete varpasien1;
    delete varpasien2;
    delete vardokter1;
    delete vardokter2;

    return 0;

}