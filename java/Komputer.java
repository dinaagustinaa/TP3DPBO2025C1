public class Komputer {
    private String nama;
    private String tipe;
    private Cpu[] cpuList;
    private Ram[] ramList;
    private Harddrive[] harddriveList;
    private double totalHarga;

    public Komputer(String nama, String tipe) {
        this.nama = nama;
        this.tipe = tipe;
        this.cpuList = new Cpu[1]; // Assuming only one CPU
        this.ramList = new Ram[2]; // Assuming two RAM sticks
        this.harddriveList = new Harddrive[1]; // Assuming one hard drive
        this.totalHarga = 0.0;
    }

    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    public String getTipe() { return tipe; }
    public void setTipe(String tipe) { this.tipe = tipe; }

    public void addCpu(Cpu cpu) {
        cpuList[0] = cpu;
        totalHarga += cpu.getHarga();
    }

    public void addRam(Ram ram) {
        for (int i = 0; i < ramList.length; i++) {
            if (ramList[i] == null) {
                ramList[i] = ram;
                totalHarga += ram.getHarga();
                break;
            }
        }
    }

    public void addHarddrive(Harddrive harddrive) {
        harddriveList[0] = harddrive;
        totalHarga += harddrive.getHarga();
    }

    public double calculateTotalPrice() {
        return totalHarga;
    }

    public double calculatePerformanceScore() {
        double cpuScore = cpuList[0].calculatePerformance();
        double ramScore = 0;
        for (Ram ram : ramList) {
            if (ram != null) {
                ramScore += ram.calculatePerformance();
            }
        }
        double hddScore = harddriveList[0].calculatePerformance();
        return cpuScore + ramScore + hddScore;
    }

    public void displaySystemInfo() {
        System.out.println("Nama Komputer: " + nama);
        System.out.println("Tipe: " + tipe);
        System.out.println("Total Harga: " + totalHarga);
        System.out.println("Performance Score: " + calculatePerformanceScore());
        System.out.println("CPU Info:");
        cpuList[0].displayInfo();
        System.out.println("RAM Info:");
        for (Ram ram : ramList) {
            if (ram != null) {
                ram.displayInfo();
            }
        }
        System.out.println("Harddrive Info:");
        harddriveList[0].displayInfo();
    }
}