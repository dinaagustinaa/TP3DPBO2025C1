public class GamingCpu extends Cpu {
    private boolean rgbLighting;
    private String coolingSystem;

    public GamingCpu(String merk, int tahunProduksi, double harga, String kode, String tipe, double kecepatanGHz, int jumlahCore, String socket, boolean rgbLighting, String coolingSystem) {
        super(merk, tahunProduksi, harga, kode, tipe, kecepatanGHz, jumlahCore, socket);
        this.rgbLighting = rgbLighting;
        this.coolingSystem = coolingSystem;
    }

    public boolean isRgbLighting() { return rgbLighting; }
    public void setRgbLighting(boolean rgbLighting) { this.rgbLighting = rgbLighting; }

    public String getCoolingSystem() { return coolingSystem; }
    public void setCoolingSystem(String coolingSystem) { this.coolingSystem = coolingSystem; }

    public double boostPerformance() {
        return calculatePerformance() * 1.2; // 20% boost
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("RGB Lighting: " + rgbLighting);
        System.out.println("Cooling System: " + coolingSystem);
    }
}