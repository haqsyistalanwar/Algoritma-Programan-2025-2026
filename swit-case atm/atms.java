
import java.util.Scanner;

public class atms {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        boolean valid = false;
        String nama;

        do {
            System.out.print("Masukkan Nama: ");
            nama = input.nextLine();

            System.out.print("Apakah nama sudah benar? (true/false): ");
            String cek = input.nextLine();

            if(cek.equalsIgnoreCase("true")) valid = true;
            else System.out.println("Masukkan nama kembali!\n");
        } while(!valid);

        System.out.print("Masukkan NIM (angka): ");
        String nim = input.nextLine();
        int saldo = Integer.parseInt(nim);

        System.out.println("\n===== DATA AKUN =====");
        System.out.println("Nama : " + nama);
        System.out.println("Saldo Awal : Rp " + saldo);

        int pilih;
        do {
            System.out.println("\n===== MENU ATM =====");
            System.out.println("1. Cek Saldo\n2. Tarik Tunai\n3. Setor Tunai\n4. Transfer\n5. Keluar");
            System.out.print("Pilih menu: ");
            pilih = input.nextInt();

            switch(pilih){
                case 1 -> System.out.println("Saldo Anda: Rp " + saldo);
                case 2 -> { System.out.print("Nominal tarik: "); saldo -= input.nextInt(); }
                case 3 -> { System.out.print("Nominal setor: "); saldo += input.nextInt(); }
                case 4 -> { System.out.print("Nominal transfer: "); saldo -= input.nextInt(); }
            }

        } while(pilih != 5);

        System.out.println("Terimakasih menggunakan ATM!");
    }
}