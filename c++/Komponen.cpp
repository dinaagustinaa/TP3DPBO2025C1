#include <iostream>
using namespace std;
#include "Elektronik.cpp"

class Komponen : public Elektronik {
protected:
    string kode;
    string tipe;

public:
    Komponen(string merk, int tahunProduksi, double harga, string kode, string tipe);
    string getKode();
    void setKode(string kode);
    string getTipe();
    void setTipe(string tipe);
    void displayInfo() override;
};

string Komponen::getKode() { return kode; }
void Komponen::setKode(string kode) { this->kode = kode; }

string Komponen::getTipe() { return tipe; }
void Komponen::setTipe(string tipe) { this->tipe = tipe; }

void Komponen::displayInfo() {
    Elektronik::displayInfo();
    cout << "Kode: " << kode << endl;
    cout << "Tipe: " << tipe << endl;
}