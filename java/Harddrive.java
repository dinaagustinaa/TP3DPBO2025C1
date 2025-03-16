public class Harddrive extends Komponen implements Compatible {
    private int kapasitasGB;
    private String tipeStorage;
    private int readSpeedMBps;
    private int writeSpeedMBps;

    public Harddrive(String merk, int tahunProduksi, double harga, String kode, String tipe, int kapasitasGB, String tipeStorage, int readSpeedMBps, int writeSpeedMBps) {
        super(merk, tahunProduksi, harga, kode, tipe);
        this.kapasitasGB = kapasitasGB;
        this.tipeStorage = tipeStorage;
        this.readSpeedMBps = readSpeedMBps;
        this.writeSpeedMBps = writeSpeedMBps;
    }

    public int getKapasitasGB() { return kapasitasGB; }
    public void setKapasitasGB(int kapasitasGB) { this.kapasitasGB = kapasitasGB; }

    public String getTipeStorage() { return tipeStorage; }
    public void setTipeStorage(String tipeStorage) { this.tipeStorage = tipeStorage; }

    public int getReadSpeedMBps() { return readSpeedMBps; }
    public void setReadSpeedMBps(int readSpeedMBps) { this.readSpeedMBps = readSpeedMBps; }

    public int getWriteSpeedMBps() { return writeSpeedMBps; }
    public void setWriteSpeedMBps(int writeSpeedMBps) { this.writeSpeedMBps = writeSpeedMBps; }

    public double calculatePerformance() {
        return (readSpeedMBps + writeSpeedMBps) / 2.0;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Kapasitas GB: " + kapasitasGB);
        System.out.println("Tipe Storage: " + tipeStorage);
        System.out.println("Read Speed MBps: " + readSpeedMBps);
        System.out.println("Write Speed MBps: " + writeSpeedMBps);
    }

    
    public boolean checkCompatibility(Komponen komponen) {
        // Dummy implementation
        return true;
    }

    
    public String[] getCompatibleWith() {
        // Dummy implementation
        return new String[]{"SATA", "NVMe"};
    }
}