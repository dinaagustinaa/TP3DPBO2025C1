#include <iostream>
using namespace std;
#include "Komputer.cpp"
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"

int main() {
    Cpu cpu("Intel", 2022, 3000000, "CPU001", "Desktop", 3.5, 8, "LGA1200");
    Ram ram1("Corsair", 2022, 1500000, "RAM001", "DDR4", 16, "DDR4", 3200);
    Ram ram2("Corsair", 2022, 1500000, "RAM002", "DDR4", 16, "DDR4", 3200);
    Harddrive hdd("Seagate", 2022, 1000000, "HDD001", "HDD", 1000, "SATA", 200, 180);

    Komputer komputer("Gaming PC", "Desktop");
    komputer.addCpu(&cpu);
    komputer.addRam(&ram1);
    komputer.addRam(&ram2);
    komputer.addHarddrive(&hdd);

    komputer.displaySystemInfo();

    return 0;
}