package MBankingPackage;

import java.util.*;

public class MBankingApp {

	// Driver
	public static void main(String[] args) {
		int choice = -1, x = 0; // int choice dan x
		String name = null, pinOne; // string name dan pinOne
		Scanner in = new Scanner (System.in); // Scanner input
		
		// List rekening yang ada di bank
		MBanking nasabahList[] = new MBanking[4];
		nasabahList[0] = new MBanking ("Fattah11", "123456781", "11111", "67890", 100000);
		nasabahList[1] = new MBanking ("Dean", "123456782", "22222", "67890", 50000);
		nasabahList[2] = new MBanking ("Syadad", "123456783", "33333", "67890", 20000);
		nasabahList[3] = new MBanking ("Faisal", "123456784", "44444", "67890", 10000);
		
		do {
			
			System.out.print("=== Mobile Banking ===\n\n");
			
			// input username dan pin
			System.out.print("Username\t:  ");
			name = in.nextLine();
			System.out.print("Pin\t\t:  ");
			pinOne = in.nextLine();
			
			// jika nama tidak seluruhnya alphabet atau dan angka atau jika pinOne tidak seluruhnya angka
			// menggunakan regular expression
			if (!isStringOnlyAlphabetAndNumber(name) || (!isStringOnlyNumber(pinOne))){
				System.out.print("Format yang anda masukkan salah, mohon masukkan ulang\n");
				choice = 5;
			}else {
				for (int i = 0; i<nasabahList.length; i++) {
					// pengecekan jika terdapat username dan pin yang dimasukkan benar dan sesuai
					if (nasabahList[i].getName().equals(name) && nasabahList[i].getPinOne().equals(pinOne)) {
						int n = i;
						do {
							choice = getMenuOption(in); // memanggil menu getMenuOption dan memasukkan returnnya ke variable choice
							executeMenuChoice(choice, nasabahList, in, n); // memanggil menu executeMenuChoice
						} while (choice != 5 || choice > 5 || choice < 1);
					} 
					// pengecekan jika terdapat username atau pin yang dimasukkan tidak benar dan tidak sesuai
					else {
						x++;
						if(x == nasabahList.length) {
							System.out.print("Username atau Pin salah, mohon masukkan ulang\n");
						}
						choice = 5;
					}
				}
			}
			in.nextLine();
		} while (choice == 5);
	}
	
	// function pengecekan string yang hanya bisa dimasukkan huruf dan angka dengan menerapkan regex
	public static boolean isStringOnlyAlphabetAndNumber(String str)
	{
	    return ((!str.equals(""))
	            && (str != null)
	            && (str.matches("^[a-zA-Z0-9]*$")));
	}
	
	// function pengecekan string yang hanya bisa dimasukkan angka dengan menerapkan regex
	public static boolean isStringOnlyNumber(String str)
	{
	    return ((!str.equals(""))
	            && (str != null)
	            && (str.matches("^[0-9]*$")));
	}
	
	// function getMenuOption yang menampilkan menu utama dari program MBanking
	static int getMenuOption (Scanner in) {
		int choice = -1;
		do {
			try {
				// menampilkan menu utama
				System.out.print("\n\n\n");
				System.out.print(
						  "1.\tCek Saldo\n"
						+ "2.\tTransfer sesama bank\n"
						+ "3.\tGanti pin\n"
						+ "4.\tPembelian\n"
						+ "5.\tExit\n\n"
						+ "Masukkan pilihan anda : "
						);
				choice = in.nextInt();
				if (choice < 0 || choice > 5) {
					System.out.println("\nMohon masukkan pilihan anda dengan benar, 1 sampai 5");
				}
			} catch (Exception e){
				// pengecekan jika ada input yang salah
				in.nextLine();
				System.out.print("Input yang anda masukkan salah");
			}
		} while (choice < 0 || choice > 5);
		return choice;
	}
	
	// function yang dipanggil ketika function getMenuOption sudah mengembalikan return value
	static void executeMenuChoice (int menuChoice, MBanking[] nasabahList, Scanner in, int n) {
		switch (menuChoice) {
		case 1: 
			// memanggil method cekSaldo
			cekSaldo(nasabahList, n); 
			break;
		case 2:
			// memanggil method transfer
			transfer(nasabahList, in, n);
			break;
		case 3:
			// memanggil method gantiPin
			gantiPin(nasabahList, in, n);
			break;
		case 4:
			// memanggil method pembelian
			pembelian(nasabahList, in, n);
			break;
		}
	}
	
	// Method untuk check saldo
	static void cekSaldo(MBanking[] nasabahList, int n) {
		System.out.println("\nSaldo anda saat ini adalah sebesar Rp " + nasabahList[n].getSaldo() + "\n");
	}

	// Method untuk melakukan transfer
	static void transfer(MBanking[] nasabahList, Scanner in, int n) {
		int x = 0, m = 0, nominal = 0; // integer x, m, dan nominal
		String rekeningTujuan, pinTwo; // string rekeningTujuan dan pinTwo
		in.nextLine();
		do {
			x=0;
			// penginputan rekening tujuan
			System.out.print("\nMasukkan rekening tujuan");
			System.out.print("\n(Isi 0 Untuk Kembali)");
			System.out.print("\n    ");
			rekeningTujuan = in.nextLine();
			
			for (int i = 0; i < nasabahList.length; i++) {
				if (nasabahList[i].getNoRek().equals(rekeningTujuan)) {
					m = i;
				}
				else {
					x++;
				}
				
			}
			
		}while(x == nasabahList.length && !(rekeningTujuan.equals("0")));
		
		
		if (!(rekeningTujuan.equals("0"))) {
			do {
				// penginputan nominal
				System.out.print("\n\nMasukkan nominal : ");
				System.out.print("\n(Isi 0 Untuk Kembali)");
				System.out.print("\n    ");
				nominal = in.nextInt();
				if (nominal < 0) {
					System.out.print("\nMasukkan Jumlah Nominal Positif!");
				}
				else if (nominal > (nasabahList[n].getSaldo() - 5000) && nominal <= nasabahList[n].getSaldo()) {
					System.out.print("\nMaaf, anda Harus Menyisakan 5000 Di Dalam Rekening Anda!");
				}
				else if (nominal > nasabahList[n].getSaldo()) {
					System.out.print("\nSaldo Anda Tidak Mencukupi");
				}
				
			}
			while(nominal > (nasabahList[n].getSaldo() - 5000) || nominal < 0);
		}
		
		if (!((nominal == 0) || rekeningTujuan.equals("0"))) {
			in.nextLine();
			do {
				
				System.out.print("\n\nMasukkan pin transaksi anda\t: ");
				System.out.print("\n(Isi 0 Untuk Kembali)");
				System.out.print("\n    ");
				
				pinTwo = in.nextLine();
				
				// pengecekan pin transaksi
				if (!(nasabahList[n].getPinTwo().equals(pinTwo)) && !(pinTwo.equals("0"))) {
					System.out.print("\nPIN Anda Salah, Silakan Coba Ulang!");
				}
				else if (nasabahList[n].getPinTwo().equals(pinTwo) && !(pinTwo.equals("0"))) {
					nasabahList[n].setSaldo(nasabahList[n].getSaldo() - nominal);
					nasabahList[m].setSaldo(nasabahList[m].getSaldo() + nominal);
					System.out.println("\nTransfer ke rekening dengan nomor rekening " + nasabahList[m].getNoRek() + " Telah berhasil");
					System.out.println("Saldo di rekening anda sekarang adalah " + nasabahList[n].getSaldo() + "\n");
				}
			}while (!(nasabahList[n].getPinTwo().equals(pinTwo)) && !(pinTwo.equals("0")));
		}	
	}
	
	// method gantiPin
	static void gantiPin(MBanking[] nasabahList, Scanner in, int n) {
		System.out.print(
				// menu ganti pin
				  "0.\tKembali\n" +
				  "1.\tGanti pin MBanking\n"
				+ "2.\tGanti pin transaksi\n"
				+ "Masukkan pilihan anda :"
				);
		int pil = -1;
		try {
			do {
				pil = in.nextInt();
			} while (pil < 0 || pil > 2);
			
		} catch(Exception e) {
			System.out.println("Masukkan angka yang sesuai!");
		}
		switch (pil) {
		case 0:
			// keluar dari menu
			break;
		case 1:
			// ganti pin MBanking
			in.nextLine();
			String pinOne;
			do {
				System.out.print("Masukkan pin m banking baru anda yang seluruhnya angka. (Ketik 0 untuk kembali ke menu awal)\t:");
				pinOne = in.nextLine();
				
				if (pinOne.equals("0")) {
					// keluar dari menu
					break;
				}
				
			} while (!isStringOnlyNumber(pinOne));
			
			nasabahList[n].setPinOne(pinOne);
			
			System.out.print("Pin MBanking berhasil diganti");
			break;
		case 2:
			// ganti pin transaksi
			in.nextLine();
			String pinTwo;
			do {
				System.out.print("Masukkan pin transaksi baru anda yang seluruhnya angka. (Ketik 0 untuk kembali ke menu awal)\t:");
				pinTwo = in.nextLine();
				
				if (pinTwo.equals("0")) {
					break;
				}
			} while (!isStringOnlyNumber(pinTwo));
			
			nasabahList[n].setPinTwo(pinTwo);
			
			System.out.print("Pin transaksi berhasil diganti");
			break;
		}
	}
	
	// method pembelian
	static void pembelian(MBanking[] nasabahList, Scanner in, int n) {
		System.out.print(
				// menu method pembelian
				  "0.\tKembali\n"+
				  "1.\tPulsa\n"
				+ "Masukkan pilihan anda : "
				);
		int pil = -1;
		try {
			do {
				pil = in.nextInt();
			} while (pil < 0 || pil > 2);
			
		} catch(Exception e) {
			System.out.println("Masukkan angka yang sesuai!");
		}
		
		switch (pil) {
		case 0:
			break;
		case 1:
			String noTelp;
			String pinTwo;
			int nominal = 0;
			in.nextLine();
			do {
				// input nomor tujuan
				do {
					System.out.print("Masukkan nomor tujuan. (Ketik 0 untuk kembali ke menu awal)\t:");
					noTelp = in.nextLine();
					if (noTelp.equals("0")) {
						// kembali ke menu awal
						break;
					}
				} while (!isStringOnlyNumber(noTelp));
	
				outer: if (noTelp.length() >= 12) {
					
						try {
							do {
								System.out.print("Masukkan jumlah nominal. (Maks: 10Juta) (Ketik 0 untuk kembali ke menu awal)\t:");
								nominal = in.nextInt();
								if (nominal == 0) {
									break outer;
								}
							} while (nominal > nasabahList[n].getSaldo() || nominal > (nasabahList[n].getSaldo() - 5000) || nominal < 0 || nominal > 10000000);
							
						} catch(Exception e) {
							nominal = -1;
							System.out.print("Inputan hanya boleh angka\n");
							break outer;
						}
					
					// input nominal
					if (nominal > (nasabahList[n].getSaldo() - 5000) && nominal <= nasabahList[n].getSaldo()){
						System.out.print("\nMaaf, anda Harus Menyisakan 5000 Di Dalam Rekening Anda!\n");
						
					}
					else if (nominal > nasabahList[n].getSaldo()) {
						System.out.println("Maaf, saldo anda tidak mencukupi untuk melakukan transaksi pembelian pulsa.");
					}
						
						// pengecekan value nominal
					
					in.nextLine();
					do {
						// input pin transaksi
						System.out.print("Masukkan pin transaksi anda (Ketik 0 untuk membatalkan transaksi)\t: ");
						pinTwo = in.nextLine();
						
						
						// pengecekan pin transaksi
						if (nasabahList[n].getPinTwo().equals(pinTwo)) {
							nasabahList[n].setSaldo(nasabahList[n].getSaldo() - nominal);
							System.out.println("\nPembelian pulsa ke nomor telepon " + noTelp + " telah berhasil");
							System.out.println("Jumlah saldo anda sekarang sebesar " + nasabahList[n].getSaldo() + "\n");
						} else if (pinTwo.equals("0")) {
							break outer;
						}
					} while (!(nasabahList[n].getPinTwo().equals(pinTwo)) || !(isStringOnlyNumber(pinTwo)));
					
				} else if (noTelp.equals("0")) {
					break;
				}
			} while (noTelp.length() < 12);
		}
	}
}
