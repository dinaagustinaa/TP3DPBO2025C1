public class Ram extends Komponen implements Overclockable, Compatible {
    private int kapasitasGB;
    private String jenisMemori;
    private int speedMHz;

    public Ram(String merk, int tahunProduksi, double harga, String kode, String tipe, int kapasitasGB, String jenisMemori, int speedMHz) {
        super(merk, tahunProduksi, harga, kode, tipe);
        this.kapasitasGB = kapasitasGB;
        this.jenisMemori = jenisMemori;
        this.speedMHz = speedMHz;
    }

    public int getKapasitasGB() { return kapasitasGB; }
    public void setKapasitasGB(int kapasitasGB) { this.kapasitasGB = kapasitasGB; }

    public String getJenisMemori() { return jenisMemori; }
    public void setJenisMemori(String jenisMemori) { this.jenisMemori = jenisMemori; }

    public int getSpeedMHz() { return speedMHz; }
    public void setSpeedMHz(int speedMHz) { this.speedMHz = speedMHz; }

    public double calculatePerformance() {
        return kapasitasGB * speedMHz;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Kapasitas GB: " + kapasitasGB);
        System.out.println("Jenis Memori: " + jenisMemori);
        System.out.println("Speed MHz: " + speedMHz);
    }

    
    public void overclock(double increase) {
        this.speedMHz += increase;
    }

    public void resetToDefault() {
        this.speedMHz = 2400; // Default value
    }

    public boolean isOverclocked() {
        return this.speedMHz > 2400;
    }

    public boolean checkCompatibility(Komponen komponen) {
        // Dummy implementation
        return true;
    }

    public String[] getCompatibleWith() {
        // Dummy implementation
        return new String[]{"DDR4", "DDR5"};
    }
}