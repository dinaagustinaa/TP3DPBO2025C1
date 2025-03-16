public class Komponen extends Elektronik {
    private String kode;
    private String tipe;

    public Komponen(String merk, int tahunProduksi, double harga, String kode, String tipe) {
        super(merk, tahunProduksi, harga);
        this.kode = kode;
        this.tipe = tipe;
    }

    public String getKode() { return kode; }
    public void setKode(String kode) { this.kode = kode; }

    public String getTipe() { return tipe; }
    public void setTipe(String tipe) { this.tipe = tipe; }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Kode: " + kode);
        System.out.println("Tipe: " + tipe);
    }
}
