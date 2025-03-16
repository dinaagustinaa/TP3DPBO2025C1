public class Main {
    public static void main(String[] args) {
        Cpu cpu = new Cpu("Intel", 2022, 3000000, "CPU001", "Desktop", 3.5, 8, "LGA1200");
        Ram ram1 = new Ram("Corsair", 2022, 1500000, "RAM001", "DDR4", 16, "DDR4", 3200);
        Ram ram2 = new Ram("Corsair", 2022, 1500000, "RAM002", "DDR4", 16, "DDR4", 3200);
        Harddrive hdd = new Harddrive("Seagate", 2022, 1000000, "HDD001", "HDD", 1000, "SATA", 200, 180);

        Komputer komputer = new Komputer("Gaming PC", "Desktop");
        komputer.addCpu(cpu);
        komputer.addRam(ram1);
        komputer.addRam(ram2);
        komputer.addHarddrive(hdd);

        komputer.displaySystemInfo();
    }
}