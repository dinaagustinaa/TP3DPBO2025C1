#include <iostream>
using namespace std;
#include "Komponen.cpp"
#include "Compatible.h"

class Harddrive : public Komponen, public Compatible {
private:
    int kapasitasGB;
    string tipeStorage;
    int readSpeedMBps;
    int writeSpeedMBps;

public:
    Harddrive(string merk, int tahunProduksi, double harga, string kode, string tipe, int kapasitasGB, string tipeStorage, int readSpeedMBps, int writeSpeedMBps);
    int getKapasitasGB();
    void setKapasitasGB(int kapasitasGB);
    string getTipeStorage();
    void setTipeStorage(string tipeStorage);
    int getReadSpeedMBps();
    void setReadSpeedMBps(int readSpeedMBps);
    int getWriteSpeedMBps();
    void setWriteSpeedMBps(int writeSpeedMBps);
    double calculatePerformance();
    void displayInfo() override;
    bool checkCompatibility(Komponen* komponen) override;
    string* getCompatibleWith() override;
};

int Harddrive::getKapasitasGB() { return kapasitasGB; }
void Harddrive::setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }

string Harddrive::getTipeStorage() { return tipeStorage; }
void Harddrive::setTipeStorage(string tipeStorage) { this->tipeStorage = tipeStorage; }

int Harddrive::getReadSpeedMBps() { return readSpeedMBps; }
void Harddrive::setReadSpeedMBps(int readSpeedMBps) { this->readSpeedMBps = readSpeedMBps; }

int Harddrive::getWriteSpeedMBps() { return writeSpeedMBps; }
void Harddrive::setWriteSpeedMBps(int writeSpeedMBps) { this->writeSpeedMBps = writeSpeedMBps; }

double Harddrive::calculatePerformance() {
    return (readSpeedMBps + writeSpeedMBps) / 2.0;
}

void Harddrive::displayInfo() {
    Komponen::displayInfo();
    cout << "Kapasitas GB: " << kapasitasGB << endl;
    cout << "Tipe Storage: " << tipeStorage << endl;
    cout << "Read Speed MBps: " << readSpeedMBps << endl;
    cout << "Write Speed MBps: " << writeSpeedMBps << endl;
}

bool Harddrive::checkCompatibility(Komponen* komponen) {
    // Dummy implementation
    return true;
}

string* Harddrive::getCompatibleWith() {
    // Dummy implementation
    static string compatibleWith[] = {"SATA", "NVMe"};
    return compatibleWith;
}