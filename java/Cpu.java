public class Cpu extends Komponen implements Overclockable, Compatible {
    private double kecepatanGHz;
    private int jumlahCore;
    private String socket;

    public Cpu(String merk, int tahunProduksi, double harga, String kode, String tipe, double kecepatanGHz, int jumlahCore, String socket) {
        super(merk, tahunProduksi, harga, kode, tipe);
        this.kecepatanGHz = kecepatanGHz;
        this.jumlahCore = jumlahCore;
        this.socket = socket;
    }

    public double getKecepatanGHz() { return kecepatanGHz; }
    public void setKecepatanGHz(double kecepatanGHz) { this.kecepatanGHz = kecepatanGHz; }

    public int getJumlahCore() { return jumlahCore; }
    public void setJumlahCore(int jumlahCore) { this.jumlahCore = jumlahCore; }

    public String getSocket() { return socket; }
    public void setSocket(String socket) { this.socket = socket; }

    public double calculatePerformance() {
        return kecepatanGHz * jumlahCore;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Kecepatan GHz: " + kecepatanGHz);
        System.out.println("Jumlah Core: " + jumlahCore);
        System.out.println("Socket: " + socket);
    }

    public void overclock(double increase) {
        this.kecepatanGHz += increase;
    }

    public void resetToDefault() {
        this.kecepatanGHz = 3.0; // Default value
    }

    public boolean isOverclocked() {
        return this.kecepatanGHz > 3.0;
    }

    public boolean checkCompatibility(Komponen komponen) {
        // Dummy implementation
        return true;
    }

    public String[] getCompatibleWith() {
        // Dummy implementation
        return new String[]{"Intel", "AMD"};
    }
}