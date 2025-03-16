public class Elektronik {
    private String merk;
    private int tahunProduksi;
    private double harga;

    public Elektronik(String merk, int tahunProduksi, double harga) {
        this.merk = merk;
        this.tahunProduksi = tahunProduksi;
        this.harga = harga;
    }

    public String getMerk() { return merk; }
    public void setMerk(String merk) { this.merk = merk; }

    public int getTahunProduksi() { return tahunProduksi; }
    public void setTahunProduksi(int tahunProduksi) { this.tahunProduksi = tahunProduksi; }

    public double getHarga() { return harga; }
    public void setHarga(double harga) { this.harga = harga; }

    public void displayInfo() {
        System.out.println("Merk: " + merk);
        System.out.println("Tahun Produksi: " + tahunProduksi);
        System.out.println("Harga: " + harga);
    }
}