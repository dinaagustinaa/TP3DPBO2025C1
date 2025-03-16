#include <iostream>
using namespace std;
#include "Cpu.cpp"
#include "Ram.cpp"
#include "HardDrive.cpp"

class Komputer {
private:
    string nama;
    string tipe;
    Cpu* cpuList[1]; // Assuming only one CPU
    Ram* ramList[2]; // Assuming two RAM sticks
    Harddrive* harddriveList[1]; // Assuming one hard drive
    double totalHarga;

public:
    Komputer(string nama, string tipe);
    string getNama();
    void setNama(string nama);
    string getTipe();
    void setTipe(string tipe);
    void addCpu(Cpu* cpu);
    void addRam(Ram* ram);
    void addHarddrive(Harddrive* harddrive);
    double calculateTotalPrice();
    double calculatePerformanceScore();
    void displaySystemInfo();
};

Komputer::Komputer(string nama, string tipe) : nama(nama), tipe(tipe), totalHarga(0.0) {
    cpuList[0] = nullptr;
    ramList[0] = nullptr;
    ramList[1] = nullptr;
    harddriveList[0] = nullptr;
}

string Komputer::getNama() { return nama; }
void Komputer::setNama(string nama) { this->nama = nama; }

string Komputer::getTipe() { return tipe; }
void Komputer::setTipe(string tipe) { this->tipe = tipe; }

void Komputer::addCpu(Cpu* cpu) {
    cpuList[0] = cpu;
    totalHarga += cpu->getHarga();
}

void Komputer::addRam(Ram* ram) {
    for (int i = 0; i < 2; i++) {
        if (ramList[i] == nullptr) {
            ramList[i] = ram;
            totalHarga += ram->getHarga();
            break;
        }
    }
}

void Komputer::addHarddrive(Harddrive* harddrive) {
    harddriveList[0] = harddrive;
    totalHarga += harddrive->getHarga();
}

double Komputer::calculateTotalPrice() {
    return totalHarga;
}

double Komputer::calculatePerformanceScore() {
    double cpuScore = cpuList[0]->calculatePerformance();
    double ramScore = 0;
    for (int i = 0; i < 2; i++) {
        if (ramList[i] != nullptr) {
            ramScore += ramList[i]->calculatePerformance();
        }
    }
    double hddScore = harddriveList[0]->calculatePerformance();
    return cpuScore + ramScore + hddScore;
}

void Komputer::displaySystemInfo() {
    cout << "Nama Komputer: " << nama << endl;
    cout << "Tipe: " << tipe << endl;
    cout << "Total Harga: " << totalHarga << endl;
    cout << "Performance Score: " << calculatePerformanceScore() << endl;
    cout << "CPU Info:" << endl;
    cpuList[0]->displayInfo();
    cout << "RAM Info:" << endl;
    for (int i = 0; i < 2; i++) {
        if (ramList[i] != nullptr) {
            ramList[i]->displayInfo();
        }
    }
    cout << "Harddrive Info:" << endl;
    harddriveList[0]->displayInfo();
}