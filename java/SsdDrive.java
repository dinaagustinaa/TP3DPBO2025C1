public class SsdDrive extends Harddrive {
    private int nvmeGen;
    private boolean hasDram;

    public SsdDrive(String merk, int tahunProduksi, double harga, String kode, String tipe, int kapasitasGB, String tipeStorage, int readSpeedMBps, int writeSpeedMBps, int nvmeGen, boolean hasDram) {
        super(merk, tahunProduksi, harga, kode, tipe, kapasitasGB, tipeStorage, readSpeedMBps, writeSpeedMBps);
        this.nvmeGen = nvmeGen;
        this.hasDram = hasDram;
    }

    public int getNvmeGen() { return nvmeGen; }
    public void setNvmeGen(int nvmeGen) { this.nvmeGen = nvmeGen; }

    public boolean getHasDram() { return hasDram; }
    public void setHasDram(boolean hasDram) { this.hasDram = hasDram; }

    public int calculateIOPS() {
        return (int) (calculatePerformance() * 1000); // Dummy calculation
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("NVMe Gen: " + nvmeGen);
        System.out.println("Has DRAM: " + hasDram);
    }
}