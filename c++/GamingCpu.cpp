#include <iostream>
using namespace std;
#include "Cpu.cpp"

class GamingCpu : public Cpu {
private:
    bool rgbLighting;
    string coolingSystem;

public:
    GamingCpu(string merk, int tahunProduksi, double harga, string kode, string tipe, double kecepatanGHz, int jumlahCore, string socket, bool rgbLighting, string coolingSystem);
    bool isRgbLighting();
    void setRgbLighting(bool rgbLighting);
    string getCoolingSystem();
    void setCoolingSystem(string coolingSystem);
    double boostPerformance();
    void displayInfo() override;
};

bool GamingCpu::isRgbLighting() { return rgbLighting; }
void GamingCpu::setRgbLighting(bool rgbLighting) { this->rgbLighting = rgbLighting; }

string GamingCpu::getCoolingSystem() { return coolingSystem; }
void GamingCpu::setCoolingSystem(string coolingSystem) { this->coolingSystem = coolingSystem; }

double GamingCpu::boostPerformance() {
    return calculatePerformance() * 1.2; // 20% boost
}

void GamingCpu::displayInfo() {
    Cpu::displayInfo();
    cout << "RGB Lighting: " << rgbLighting << endl;
    cout << "Cooling System: " << coolingSystem << endl;
}