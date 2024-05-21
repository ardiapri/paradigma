#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pnama) :nama(pnama) {
        cout << "ibu \"" << nama << "\" ada\n";

    }
    ~ibu() {
        cout << "ibu \"" << nama << "\" tidak ada\n";

    }
    void tambahanak(anak*);
    void cetakanak();

};
void ibu::tambahanak(anak* panak) {
    daftar_anak.push_back(panak);

}
void ibu::cetakanak() {
    cout << "daftar anak dari ibu \"" << this->nama << "\":\n;
    /*for (auto& a  : daftar_anak) {
        cout << a->nama << "\n";

    }*/
    for (int i = 0; i < daftar_anak.size(); i++) {
        cout << daftar_anak[i]->nama << endl;

    }
      cout <, endl;
}
#endif