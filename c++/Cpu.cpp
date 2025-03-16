#include <iostream>
using namespace std;
#include "Komponen.cpp"
#include "Overclockable.h"
#include "Compatible.h"

class Cpu : public Komponen, public Overclockable, public Compatible {
private:
    double kecepatanGHz;
    int jumlahCore;
    string socket;

public:
    Cpu(string merk, int tahunProduksi, double harga, string kode, string tipe, double kecepatanGHz, int jumlahCore, string socket);
    double getKecepatanGHz();
    void setKecepatanGHz(double kecepatanGHz);
    int getJumlahCore();
    void setJumlahCore(int jumlahCore);
    string getSocket();
    void setSocket(string socket);
    double calculatePerformance();
    void displayInfo() override;
    void overclock(double increase) override;
    void resetToDefault() override;
    bool isOverclocked() override;
    bool checkCompatibility(Komponen* komponen) override;
    string* getCompatibleWith() override;
};

double Cpu::getKecepatanGHz() { return kecepatanGHz; }
void Cpu::setKecepatanGHz(double kecepatanGHz) { this->kecepatanGHz = kecepatanGHz; }

int Cpu::getJumlahCore() { return jumlahCore; }
void Cpu::setJumlahCore(int jumlahCore) { this->jumlahCore = jumlahCore; }

string Cpu::getSocket() { return socket; }
void Cpu::setSocket(string socket) { this->socket = socket; }

double Cpu::calculatePerformance() {
    return kecepatanGHz * jumlahCore;
}

void Cpu::displayInfo() {
    Komponen::displayInfo();
    cout << "Kecepatan GHz: " << kecepatanGHz << endl;
    cout << "Jumlah Core: " << jumlahCore << endl;
    cout << "Socket: " << socket << endl;
}

void Cpu::overclock(double increase) {
    this->kecepatanGHz += increase;
}

void Cpu::resetToDefault() {
    this->kecepatanGHz = 3.0; // Default value
}

bool Cpu::isOverclocked() {
    return this->kecepatanGHz > 3.0;
}

bool Cpu::checkCompatibility(Komponen* komponen) {
    // Dummy implementation
    return true;
}

string* Cpu::getCompatibleWith() {
    // Dummy implementation
    static string compatibleWith[] = {"Intel", "AMD"};
    return compatibleWith;
}