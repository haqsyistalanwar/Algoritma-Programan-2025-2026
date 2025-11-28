import java.util.Scanner;

public class minikasir {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan nama barang: ");
        String nama = input.nextLine();

        System.out.print("Masukkan harga barang: ");
        double harga = input.nextDouble();

        System.out.print("Masukkan jumlah beli: ");
        int jumlah = input.nextInt();

        double total = harga * jumlah;
        double diskon;

        // Logika sama seperti Python:
        // Jika total > 24900 → diskon = total * 0.9
        // Kalau tidak → diskon = 8
        if (total > 24900) {
            diskon = total * 0.9;
        } else {
            diskon = 8;
        }

        double totalBayar = total - diskon;

        System.out.println("\n===== STRUK PEMBELIAN =====");
        System.out.println("Nama Barang   : " + nama);
        System.out.println("Harga Satuan  : " + harga);
        System.out.println("Jumlah Beli   : " + jumlah);
        System.out.println("Total Harga   : " + total);
        System.out.println("Diskon        : " + diskon);
        System.out.println("Total Bayar   : " + totalBayar);
        System.out.println("=============================");
    }
}


