#include <string>
#include <iostream>
using namespace std;

class Elektronik {
protected:
    string merk;
    int tahunProduksi;
    double harga;

public:
    Elektronik(string merk, int tahunProduksi, double harga);
    string getMerk();
    void setMerk(string merk);
    int getTahunProduksi();
    void setTahunProduksi(int tahunProduksi);
    double getHarga();
    void setHarga(double harga);
    virtual void displayInfo();
};

string Elektronik::getMerk() { return merk; }
void Elektronik::setMerk(string merk) { this->merk = merk; }

int Elektronik::getTahunProduksi() { return tahunProduksi; }
void Elektronik::setTahunProduksi(int tahunProduksi) { this->tahunProduksi = tahunProduksi; }

double Elektronik::getHarga() { return harga; }
void Elektronik::setHarga(double harga) { this->harga = harga; }

void Elektronik::displayInfo() {
    cout << "Merk: " << merk << endl;
    cout << "Tahun Produksi: " << tahunProduksi << endl;
    cout << "Harga: " << harga << endl;
}