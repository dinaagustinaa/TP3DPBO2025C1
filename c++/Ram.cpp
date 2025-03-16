#include <iostream>
using namespace std;
#include "Komponen.cpp"
#include "HardDrive.cpp"
#include "Overclockable.h"
#include "Compatible.h"

class Ram : public Komponen, public Overclockable, public Compatible {
private:
    int kapasitasGB;
    string jenisMemori;
    int speedMHz;

public:
    Ram(string merk, int tahunProduksi, double harga, string kode, string tipe, int kapasitasGB, string jenisMemori, int speedMHz);
    int getKapasitasGB();
    void setKapasitasGB(int kapasitasGB);
    string getJenisMemori();
    void setJenisMemori(string jenisMemori);
    int getSpeedMHz();
    void setSpeedMHz(int speedMHz);
    double calculatePerformance();
    void displayInfo() override;
    void overclock(double increase) override;
    void resetToDefault() override;
    bool isOverclocked() override;
    bool checkCompatibility(Komponen* komponen) override;
    string* getCompatibleWith() override;
};

int Ram::getKapasitasGB() { return kapasitasGB; }
void Ram::setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }

string Ram::getJenisMemori() { return jenisMemori; }
void Ram::setJenisMemori(string jenisMemori) { this->jenisMemori = jenisMemori; }

int Ram::getSpeedMHz() { return speedMHz; }
void Ram::setSpeedMHz(int speedMHz) { this->speedMHz = speedMHz; }

double Ram::calculatePerformance() {
    return kapasitasGB * speedMHz;
}

void Ram::displayInfo() {
    Komponen::displayInfo();
    cout << "Kapasitas GB: " << kapasitasGB << endl;
    cout << "Jenis Memori: " << jenisMemori << endl;
    cout << "Speed MHz: " << speedMHz << endl;
}

void Ram::overclock(double increase) {
    this->speedMHz += increase;
}

void Ram::resetToDefault() {
    this->speedMHz = 2400; // Default value
}

bool Ram::isOverclocked() {
    return this->speedMHz > 2400;
}

bool Ram::checkCompatibility(Komponen* komponen) {
    // Dummy implementation
    return true;
}

string* Ram::getCompatibleWith() {
    // Dummy implementation
    static string compatibleWith[] = {"DDR4", "DDR5"};
    return compatibleWith;
}
