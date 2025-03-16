#include <iostream>
using namespace std;
#include "HardDrive.cpp"

class SsdDrive : public Harddrive {
private:
    int nvmeGen;
    bool hasDram;

public:
    SsdDrive(string merk, int tahunProduksi, double harga, string kode, string tipe, int kapasitasGB, string tipeStorage, int readSpeedMBps, int writeSpeedMBps, int nvmeGen, bool hasDram);
    int getNvmeGen();
    void setNvmeGen(int nvmeGen);
    bool getHasDram();
    void setHasDram(bool hasDram);
    int calculateIOPS();
    void displayInfo() override;
};

int SsdDrive::getNvmeGen() { return nvmeGen; }
void SsdDrive::setNvmeGen(int nvmeGen) { this->nvmeGen = nvmeGen; }

bool SsdDrive::getHasDram() { return hasDram; }
void SsdDrive::setHasDram(bool hasDram) { this->hasDram = hasDram; }

int SsdDrive::calculateIOPS() {
    return (int) (calculatePerformance() * 1000); // Dummy calculation
}

void SsdDrive::displayInfo() {
    Harddrive::displayInfo();
    cout << "NVMe Gen: " << nvmeGen << endl;
    cout << "Has DRAM: " << hasDram << endl;
}
