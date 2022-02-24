/* PROGRAM McDonald's self-order machine
Program untuk melakukan pemesanan menu makanan McD dengan cara self-order.
masukannya adalah pilihan menu dan jumlah menu yang dipesan.
keluarannya adalah struk pemesanan, total harga pemesanan, dan nomor pesanan.*/

/* DEKLARASI - Pustaka */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>

// Deklarasi - Procedure dan Function
void input();
void logo();
void logo2();
void logo3();
void main();
void struk();
void tabel1();
void tabel2();
void tabel3();
void tabel4();
void tabel5();
void tabel7();
void tabelmenu();

// Deklarasi - Variabel
typedef struct pelanggan{
	int menu, jml, harga;
	char namaMakanan[99];
}datapelanggan;
datapelanggan cust[99];
int i, pil, menu[50], n=0, m,  totalHarga, bayar, nomor=1, x;
char  pilc, menuc[50];

void tabelmenu() {
	logo();
	printf("\n\n");
	printf("             +======+============================+\n");
	printf("             |  No  |         Nama Paket         |\n");
	printf("             +======+============================+\n");
	printf("             |   1. | Menu Paket Istimiewa       |\n");	
	printf("             |   2. | Menu Paket Sarapan         |\n");	
	printf("             |   3. | Menu A La Carte & Paket    |\n");	
	printf("             |   4. | Menu Tambahan              |\n");	
	printf("             |   5. | Menu Paket Happy Meal      |\n");	
	printf("             |   6. | Menu Pencuci Mulut         |\n");	
	printf("             |   7. | Menu Minuman               |\n");	
	printf("             |   0. | Data Pemesanan / Bayar     |\n");
	printf("             +======+============================+\n");
	printf("\n");
	input();
	
}

void tabel1() {
	const int Cheese_Spicy_Chicken_Rice=43500;
	const int Cheese_Krispy_Chicken_Rice=43500;	
	const int Cheese_Steak_Burger=38500;	
	const int Beef_Prosperity_Burger=37000;
	
	do {
		system("cls");
		printf("Harga Paket Istimewa (1/7)\n");
		printf("+=====+=============================+=================+\n");//Jumlah Karakter Nama Paket 28 Karakter
		printf("| No. |         Nama Paket          |      Harga      |\n");//Jumlah Karakter Harga 17 Karakter
		printf("+=====+=============================+=================+\n");
		printf("|  1. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");	
		printf("|  2. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");	
		printf("|  3. | Cheese Steak Burger         | Rp       38.500 |\n");	
		printf("|  4. | Beef Prosperity Burger      | Rp       37.000 |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);

	}while(cust[n+1].menu < 0 || cust[n+1].menu> 4); 
	n++;
	if (cust[n].menu >=1 && cust[n].menu <= 4) {
		switch(cust[n].menu) {
			
			case 1 :
				cust[n].harga = Cheese_Spicy_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Cheese Spicy Chicken Rice");
				system("cls");
				printf("Harga Paket Istimewa (1/7)\n");
				printf("+=====+=============================+=================+\n");
				printf("| No. |         Nama Paket          |      Harga      |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  1. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");	
				printf("|  2. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");	
				printf("|  3. | Cheese Steak Burger         | Rp       38.500 |\n");	
				printf("|  4. | Beef Prosperity Burger      | Rp       37.000 |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  0. | Kembali                                       |\n");	
				printf("+=====+===============================================+\n");
				printf("Pilih Nomor Makanan     :  %d", cust[n].menu); 
				printf("\nMasukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel1();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				
				break;
			case 2 :
				cust[n].harga = Cheese_Krispy_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Cheese Krispy Chicken Rice");
				system("cls");
				printf("Harga Paket Istimewa (1/7)\n");
				printf("+=====+=============================+=================+\n");
				printf("| No. |         Nama Paket          |      Harga      |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  1. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");	
				printf("|  2. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");	
				printf("|  3. | Cheese Steak Burger         | Rp       38.500 |\n");	
				printf("|  4. | Beef Prosperity Burger      | Rp       37.000 |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  0. | Kembali                                       |\n");	
				printf("+=====+===============================================+\n");
				printf("Pilih Nomor Makanan     :  %d", cust[n].menu); 
				printf("\nMasukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel1();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 3 :
				cust[n].harga = Cheese_Steak_Burger;
				strcpy(cust[n].namaMakanan, "Cheese Steak Burger");
				system("cls");
				printf("Harga Paket Istimewa (1/7)\n");
				printf("+=====+=============================+=================+\n");
				printf("| No. |         Nama Paket          |      Harga      |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  1. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");	
				printf("|  2. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");	
				printf("|  3. | Cheese Steak Burger         | Rp       38.500 |\n");	
				printf("|  4. | Beef Prosperity Burger      | Rp       37.000 |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  0. | Kembali                                       |\n");	
				printf("+=====+===============================================+\n");
				printf("Pilih Nomor Makanan     :  %d", cust[n].menu); 
				printf("\nMasukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel1();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 4 :
				cust[n].harga = Beef_Prosperity_Burger;
				strcpy(cust[n].namaMakanan, "Beef Prosperity Burger");
				system("cls");
				printf("Harga Paket Istimewa (1/7)\n");
				printf("+=====+=============================+=================+\n");
				printf("| No. |         Nama Paket          |      Harga      |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  1. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");	
				printf("|  2. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");	
				printf("|  3. | Cheese Steak Burger         | Rp       38.500 |\n");	
				printf("|  4. | Beef Prosperity Burger      | Rp       37.000 |\n");
				printf("+=====+=============================+=================+\n");
				printf("|  0. | Kembali                                       |\n");	
				printf("+=====+===============================================+\n");
				printf("Pilih Nomor Makanan     :  %d", cust[n].menu); 
				printf("\nMasukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel1();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
				
		}
			cust[n].harga *= cust[n].jml;
			printf("\n\n");
			printf("Total Harga    :  Rp. %d", cust[n].harga);
			printf("\n\n");
			
			system("pause");
			system("cls");
			tabel1();
			
		
	}	
	
	else if(cust[n].menu == 0) {
		n--;
		system("cls");
		tabelmenu();
	}

	  
}

void tabel2() {
	const int Cheese_Spicy_Chicken_Rice=43500;
	const int Cheese_Krispy_Chicken_Rice=43500;	
	do{
		system("cls");
		printf("Harga Paket Sarapan (2/7)\n");
		printf("+=====+=============================+=================+\n");
		printf("| No. |         Nama Paket          |      Harga      |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  1. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");	
		printf("|  2. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");
		printf("+=====+=============================+=================+\n");	
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);
	}while(cust[n+1].menu < 0 || cust[n+1].menu > 2);
		n++;
	if (cust[n].menu >=1 && cust[n].menu <= 2) {
		switch(cust[n].menu) {
			
			case 1 :
				cust[n].harga = Cheese_Spicy_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Cheese Spicy Chicken Rice");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel2();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 2 :
				cust[n].harga = Cheese_Krispy_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Cheese Krispy Chicken Rice");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel2();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
		
		}
			cust[n].harga *= cust[n].jml;
			printf("\n\n");
			printf("Total Harga    :  Rp. %d", cust[n].harga);
			printf("\n\n");
			
			system("pause");
			system("cls");
			tabel2();	
		
	}	
	
	else if(cust[n].menu == 0) {
		n--; m=n;
		system("cls");
		tabelmenu();
	}

}

void tabel3() {
	
	const int Beef_Prosperity_Burger=37.000; //Sudah Deklarasi
	const int Big_Mac=33500;
	const int Cheese_Krispy_Chicken_Rice=43500; //Sudah Deklarasi
	const int Cheese_Spicy_Chicken_Rice=43500; // Sudah Deklarasi
	const int Cheese_Steak_Burger=38500; // Sudah Deklarasi
	const int Cheeseburger=25500;
	const int Cheeseburger_With_Egg=26000;
	const int Chicken_Burger_with_Cheese=24500;
	const int Double_Cheeseburger=32000;
	const int Fish_And_Fries=32000;
	const int Fish_Fillet_Burger=26000;
	const int McChicken=27500;
	const int McDouble_Burger=28000;
	const int McNuggets_6pcs=25500;
	const int McNuggets_9pcs=34000;
	const int McSpicy=34000;
	const int Nasi_Daging_Tumis_Cabe_Ijo=21500;
	const int Paket_Big_Order=975000;
	const int PaMer_5pcs=105500;
	const int PaMer_7pcs=153000;
	const int PaNas_1=31000;
	const int PaNas_2_dengan_Fries=46000;
	const int PaNas_2_dengan_Nasi=43000;
	const int PaNas_Spesial=37000;
	const int Teriyaki_Chicken_Rice=21500;
	const int Triple_Burger_with_Cheese=21500;
	
	do{
		system("cls");
		printf("Harga A La Carte & Paket (3/7)\n");
		printf("+=====+=============================+=================+\n");
		printf("| No. |         Nama Paket          |      Harga      |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  1. | Beef Prosperity Burger      | Rp       37.000 |\n");
		printf("|  2. | Big Mac                     | Rp       33.500 |\n");	
		printf("|  3. | Cheese Krispy Chicken Rice  | Rp       43.500 |\n");
		printf("|  4. | Cheese Spicy Chicken Rice   | Rp       43.500 |\n");
		printf("|  5. | Cheese Steak Burger         | Rp       38.500 |\n");
		printf("|  6. | Cheeseburger                | Rp       25.500 |\n");
		printf("|  7. | Cheeseburger With Egg       | Rp       26.000 |\n");
		printf("|  8. | Chicken Burger with Cheese  | Rp       24.500 |\n");
		printf("|  9. | Double Cheeseburger         | Rp       32.000 |\n");	
		printf("| 10. | Fish And Fries              | Rp       32.000 |\n");
		printf("| 11. | Fish Fillet Burger          | Rp       26.000 |\n");	
		printf("| 12. | McChicken                   | Rp       27.500 |\n");
		printf("| 13. | McDouble Burger             | Rp       28.000 |\n");
		printf("| 14. | McNuggets 6pcs              | Rp       25.500 |\n");	
		printf("| 15. | McNuggets 9pcs              | Rp       34.000 |\n");
		printf("| 16. | McSpicy                     | Rp       34.000 |\n");
		printf("| 17. | Nasi Daging Tumis Cabe Ijo  | Rp       21.500 |\n");
		printf("| 18. | Paket Big Order             | Rp      975.000 |\n");
		printf("| 19. | PaMer 5pcs                  | Rp      105.500 |\n");
		printf("| 20. | PaMer 7pcs                  | Rp      153.000 |\n");
		printf("| 21. | PaNas 1                     | Rp       31.000 |\n");	
		printf("| 22. | PaNas 2 dengan Fries        | Rp       46.000 |\n");
		printf("| 23. | PaNas 2 dengan Nasi         | Rp       43.000 |\n");
		printf("| 24. | PaNas Spesial               | Rp       37.000 |\n");
		printf("| 25. | Teriyaki Chicken Rice       | Rp       21.500 |\n");
		printf("| 26. | Triple Burger with Cheese   | Rp       21.500 |\n");
		printf("+=====+===============================================+\n");	
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);
	}while(cust[n+1].menu < 0 || cust[n+1].menu > 26);
	n++;
	
	if (cust[n].menu >=1 && cust[n].menu <= 26) {
		switch(cust[n].menu) {
			case 1 :
				cust[n].harga = Beef_Prosperity_Burger;
				strcpy(cust[n].namaMakanan, "Beef Prosperity Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 2 :
				cust[n].harga = Big_Mac;
				strcpy(cust[n].namaMakanan, "Big Mac");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 3 :
				cust[n].harga = Cheese_Krispy_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Cheese Krispy Chicken Rice");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 4 :
				cust[n].harga = Cheese_Spicy_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Cheese Spicy Chicken Rice");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 5 :
				cust[n].harga = Cheese_Steak_Burger;
				strcpy(cust[n].namaMakanan, "Cheese Steak Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 6 :
				cust[n].harga = Cheeseburger;
				strcpy(cust[n].namaMakanan, "Cheeseburger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 7 :
				cust[n].harga = Cheeseburger_With_Egg;
				strcpy(cust[n].namaMakanan, "Cheeseburger With Egg");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 8 :
				cust[n].harga = Chicken_Burger_with_Cheese;
				strcpy(cust[n].namaMakanan, "Chicken Burger with Cheese");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 9 :
				cust[n].harga = Double_Cheeseburger;
				strcpy(cust[n].namaMakanan, "Double Cheeseburger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 10 :
				cust[n].harga = Fish_And_Fries;
				strcpy(cust[n].namaMakanan, "Fish And Fries");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 11 :
				cust[n].harga = Fish_Fillet_Burger;
				strcpy(cust[n].namaMakanan, "Fish Fillet Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 12 :
				cust[n].harga = McChicken;
				strcpy(cust[n].namaMakanan, "McChicken");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 13 :
				cust[n].harga = McDouble_Burger;
				strcpy(cust[n].namaMakanan, "McDouble Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 14 :
				cust[n].harga = McNuggets_6pcs;
				strcpy(cust[n].namaMakanan, "McNuggets 6pcs");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 15 :
				cust[n].harga = McNuggets_9pcs;
				strcpy(cust[n].namaMakanan, "McNuggets 9pcs");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 16 :
				cust[n].harga = McSpicy;
				strcpy(cust[n].namaMakanan, "McSpicy");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 17 :
				cust[n].harga = Nasi_Daging_Tumis_Cabe_Ijo;
				strcpy(cust[n].namaMakanan, "Nasi Daging Tumis Cabe Ijo");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 18 :
				cust[n].harga = Paket_Big_Order;
				strcpy(cust[n].namaMakanan, "Paket Big Order");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 19 :
				cust[n].harga = PaMer_5pcs;
				strcpy(cust[n].namaMakanan, "PaMer 5pcs");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 20 :
				cust[n].harga = PaMer_7pcs;
				strcpy(cust[n].namaMakanan, "PaMer 7pcs");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 21 :
				cust[n].harga = PaNas_1;
				strcpy(cust[n].namaMakanan, "PaNas 1");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 22 :
				cust[n].harga = PaNas_2_dengan_Fries;
				strcpy(cust[n].namaMakanan, "PaNas 2 dengan Fries");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 23 :
				cust[n].harga = PaNas_2_dengan_Nasi;
				strcpy(cust[n].namaMakanan, "PaNas 2 dengan Nasi");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 24 :
				cust[n].harga = PaNas_Spesial;
				strcpy(cust[n].namaMakanan, "PaNas Spesial");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 25 :
				cust[n].harga = Teriyaki_Chicken_Rice;
				strcpy(cust[n].namaMakanan, "Teriyaki Chicken Rice");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 26 :
				cust[n].harga = Triple_Burger_with_Cheese;
				strcpy(cust[n].namaMakanan, "Triple Burger with Cheese");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel3();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
		
		}
			cust[n].harga *= cust[n].jml;
			printf("\n\n");
			printf("Total Harga    :  Rp. %d", cust[n].harga);
			printf("\n\n");
			
			system("pause");
			system("cls");
			tabel3();	
		
	}	
	
	else if(cust[n].menu == 0) {
		n--; m=n;
		system("cls");
		tabelmenu();
	}

}

void tabel4() {
	
	const int Apple_Pie=10000;
	const int Beef_Burger=14500;
	const int Breakfast_Wrap=14500;
	const int Bubur_Ayam_Spesial=14000;
	const int Chicken_Burger=14500;
	const int Chicken_Snack_Wrap=14500;
	const int Fish_Bites=12500;
	const int French_Fries=10000;
	const int McNuggets=19000;
	const int Nasi=6500 ;
	const int Potato_Wedges=21000;
	const int Spicy_Chicken_Bites=10500;
	
	do {
		system("cls");
		printf("Harga Menu Tambahan (4/7)\n");
		printf("+=====+=============================+=================+\n");
		printf("| No. |         Nama Paket          |      Harga      |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  1. | Apple Pie                   | Rp       10.000 |\n");
		printf("|  2. | Beef Burger                 | Rp       14.500 |\n");
		printf("|  3. | Breakfast Wrap              | Rp       14.500 |\n");
		printf("|  4. | Bubur Ayam Spesial          | Rp       14.000 |\n");
		printf("|  5. | Chicken Burger              | Rp       14.500 |\n");
		printf("|  6. | Chicken Snack Wrap          | Rp       14.500 |\n");
		printf("|  7. | Fish Bites                  | Rp       12.500 |\n");
		printf("|  8. | French Fries                | Rp       10.000 |\n");
		printf("|  9. | McNuggets                   | Rp       19.000 |\n");
		printf("| 10. | Nasi                        | Rp        6.500 |\n");
		printf("| 11. | Potato Wedges               | Rp       21.000 |\n");
		printf("| 12. | Spicy Chicken Bites         | Rp       10.500 |\n");
		printf("+=====+===============================================+\n");
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);
	}while(cust[n+1].menu < 0 || cust[n+1].menu > 12);
	n++;
	
	if (cust[n].menu >=1 && cust[n].menu <= 12) {
		switch(cust[n].menu) {
			case 1 :
				cust[n].harga = Apple_Pie;
				strcpy(cust[n].namaMakanan, "Apple Pie");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 2 :
				cust[n].harga = Beef_Burger;
				strcpy(cust[n].namaMakanan, "Beef Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 3 :
				cust[n].harga = Breakfast_Wrap;
				strcpy(cust[n].namaMakanan, "Breakfast Wrap");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 4 :
				cust[n].harga = Bubur_Ayam_Spesial;
				strcpy(cust[n].namaMakanan, "Bubur Ayam Spesial");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 5 :
				cust[n].harga = Chicken_Burger;
				strcpy(cust[n].namaMakanan, "Chicken Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 6 :
				cust[n].harga = Chicken_Snack_Wrap;
				strcpy(cust[n].namaMakanan, "Chicken Snack Wrap");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 7 :
				cust[n].harga = Fish_Bites;
				strcpy(cust[n].namaMakanan, "Fish Bites");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 8 :
				cust[n].harga = French_Fries;
				strcpy(cust[n].namaMakanan, "French Fries");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 9 :
				cust[n].harga = McNuggets;
				strcpy(cust[n].namaMakanan, "McNuggets");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 10 :
				cust[n].harga = Nasi;
				strcpy(cust[n].namaMakanan, "Nasi");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 11 :
				cust[n].harga = Potato_Wedges;
				strcpy(cust[n].namaMakanan, "Potato Wedges");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 12 :
				cust[n].harga = Spicy_Chicken_Bites;
				strcpy(cust[n].namaMakanan, "Spicy Chicken Bites");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel4();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
		
		}
		
		cust[n].harga *= cust[n].jml;
		printf("\n\n");
		printf("Total Harga    :  Rp. %d", cust[n].harga);
		printf("\n\n");
		
		system("pause");
		system("cls");
		tabel4();
	}
	
	else if(cust[n].menu == 0) {
		n--;
		system("cls");
		tabelmenu();
	}	
}

void tabel5() {
	
	const int Cheeseburger=35000;
	const int Chicken_Burger=35000;
	const int Happy_Meal_Ayam=35000;
	const int Happy_Meal_McNuggets_4Pcs=35000;
	
	do {
		system("cls");
		printf("Harga Menu Paket Happy Meal (5/7)\n");
		printf("+=====+=============================+=================+\n");
		printf("| No. |         Nama Paket          |      Harga      |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  1. | Cheeseburger                | Rp       35.000 |\n");
		printf("|  2. | Chicken Burger              | Rp       35.000 |\n");
		printf("|  3. | Happy Meal® Ayam            | Rp       35.000 |\n");
		printf("|  4. | Happy Meal® McNuggets® 4Pcs | Rp       35.000 |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);
	}while (cust[n+1].menu < 0 || cust[n+1].menu > 4);
	n++;
	
	if (cust[n].menu >=1 && cust[n].menu <= 4) {
		switch(cust[n].menu) {
			
			case 1 :
				cust[n].harga = Cheeseburger;
				strcpy(cust[n].namaMakanan, "Cheeseburger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel5();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 2 :
				cust[n].harga = Chicken_Burger;
				strcpy(cust[n].namaMakanan, "Chicken Burger");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel5();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 3 :
				cust[n].harga = Happy_Meal_Ayam;
				strcpy(cust[n].namaMakanan, "Happy Meal Ayam");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel5();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 4 :
				cust[n].harga = Happy_Meal_McNuggets_4Pcs;
				strcpy(cust[n].namaMakanan, "Happy Meal McNuggets 4Pcs");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel5();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
		}
		
		cust[n].harga *= cust[n].jml;
		printf("\n\n");
		printf("Total Harga    :  Rp. %d", cust[n].harga);
		printf("\n\n");
		
		system("pause");
		system("cls");
		tabel5();
	}
	
	else if(cust[n].menu == 0) {
		n--;
		system("cls");
		tabelmenu();
	}
}

void tabel6() {
	
	const int McFlurry_Choco=10500;
	const int McFlurry_featuring_Oreo=10500;
	const int McFlurry_with_Meringue=14000;
	const int Sundae_Chocolate=10000;
	const int Sundae_Strawberry=10000;
	
	do {
		system("cls");
		printf("Harga Menu Pencuci Mulut (6/7)\n");
		printf("+=====+=============================+=================+\n");
		printf("| No. |         Nama Paket          |      Harga      |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  1. | McFlurry Choco              | Rp       10.500 |\n");
		printf("|  2. | McFlurry featuring Oreo     | Rp       10.500 |\n");
		printf("|  3. | McFlurry with Meringue      | Rp       14.000 |\n");
		printf("|  4. | Sundae Chocolate            | Rp       10.000 |\n");
		printf("|  5. | Sundae Strawberry           | Rp       10.000 |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);
	}while (cust[n+1].menu < 0 ||cust[n+1].menu > 5);
	n++;
	
	if (cust[n].menu >=1 && cust[n].menu <= 5) {
	switch(cust[n].menu) {
		
		case 1 :
			cust[n].harga = McFlurry_Choco;
			strcpy(cust[n].namaMakanan, "McFlurry Choco");
			printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel6();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
			break;
		case 2 :
			cust[n].harga = McFlurry_featuring_Oreo;
			strcpy(cust[n].namaMakanan, "McFlurry featuring Oreo");
			printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel6();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
			break;
		case 3 :
			cust[n].harga = McFlurry_with_Meringue;
			strcpy(cust[n].namaMakanan, "McFlurry with Meringue");
			printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel6();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
			break;
		case 4 :
			cust[n].harga = Sundae_Chocolate;
			strcpy(cust[n].namaMakanan, "Sundae Chocolate");
			printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel6();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
			break;
		case 5 :
			cust[n].harga = Sundae_Strawberry;
			strcpy(cust[n].namaMakanan, "Sundae Strawberry");
			printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel6();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
			break;
	}
	
		cust[n].harga *= cust[n].jml;
		printf("\n\n");
		printf("Total Harga    :  Rp. %d", cust[n].harga);
		printf("\n\n");
		
		system("pause");
		system("cls");
		tabel6();
	}
	
	else if(cust[n].menu == 0) {
		n--;
		system("cls");
		tabelmenu();
	}
}

void tabel7() {
	
	const int Air_Mineral_600ml=9500;
	const int Coca_Cola=8000;
	const int Coke_McFloat=11000;
	const int Fanta_McFloat=11000;
	const int Fanta=8000;
	const int Fruit_Tea_Blackcurrant_200ml=7500;
	const int Fruit_Tea_Lemon=8000;
	const int Iced_Coffee=15000;
	const int Iced_Coffee_Float=17500;
	const int Iced_Coffee_Jelly=17500;
	const int Iced_Coffee_Jelly_Float=19500;
	const int Milo=11000;
	const int Orange_Drink=9500;
	const int Pineapple_Fizz=13000;
	const int Premium_Roast_Coffee=10500;
	const int Soda_Kedondong=11000;
	const int Sprite=8000;
	const int Tehbotol_Sosro=10500;
	const int Teh_Panas_Kotak_250ml=9500;
	const int Teh_botol_Sosro_Tawar_350ML=8000;
	
	do {
		system("cls");
		printf("Harga Menu Minuman (7/7)\n");
		printf("+=====+=============================+=================+\n");
		printf("| No. |         Nama Paket          |      Harga      |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  1. | Air Mineral 600ml           | Rp        9.500 |\n");
		printf("|  2. | Coca Cola                   | Rp        8.000 |\n");
		printf("|  3. | Coke McFloat                | Rp       11.000 |\n");
		printf("|  4. | Fanta McFloat               | Rp       11.000 |\n");
		printf("|  5. | Fanta                       | Rp        8.000 |\n");
		printf("|  6. | Fruit Tea Blackcurrant 200ml| Rp        7.500 |\n");
		printf("|  7. | Fruit Tea Lemon             | Rp        8.000 |\n");
		printf("|  8. | Iced Coffee                 | Rp       15.000 |\n");
		printf("|  9. | Iced Coffee Float           | Rp       17.500 |\n");
		printf("| 10. | Iced Coffee Jelly           | Rp       17.500 |\n");
		printf("| 11. | Iced Coffee Jelly Float     | Rp       19.500 |\n");
		printf("| 12. | Milo                        | Rp       11.000 |\n");
		printf("| 13. | Orange Drink                | Rp        9.500 |\n");
		printf("| 14. | Pineapple Fizz              | Rp       13.000 |\n");
		printf("| 15. | Premium Roast Coffee        | Rp       10.500 |\n");
		printf("| 16. | Soda Kedondong              | Rp       11.000 |\n");
		printf("| 17. | Sprite                      | Rp        8.000 |\n");
		printf("| 18. | Tehbotol Sosro              | Rp       10.500 |\n");
		printf("| 19. | Teh Panas Kotak 250ml       | Rp        9.500 |\n");
		printf("| 20. | Teh botol Sosro Tawar 350ML | Rp        8.000 |\n");
		printf("+=====+=============================+=================+\n");
		printf("|  0. | Kembali                                       |\n");	
		printf("+=====+===============================================+\n");
		printf("Pilih Nomor Makanan     :  "); scanf("%d", &cust[n+1].menu);
	}while (cust[n+1].menu < 0 || cust[n+1].menu > 20);
	n++;
	if (cust[n].menu >=1 && cust[n].menu <= 20) {
		switch(cust[n].menu) {
			
			case 1 :
				cust[n].harga = Air_Mineral_600ml;
				strcpy(cust[n].namaMakanan, "Air Mineral 600ml");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 2 :
				cust[n].harga = Coca_Cola;
				strcpy(cust[n].namaMakanan, "Coca Cola");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 3 :
				cust[n].harga = Coke_McFloat;
				strcpy(cust[n].namaMakanan, "Coke McFloat");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 4 :
				cust[n].harga = Fanta_McFloat;
				strcpy(cust[n].namaMakanan, "Fanta McFloat");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 5 :
				cust[n].harga = Fanta;
				strcpy(cust[n].namaMakanan, "Fanta");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 6 :
				cust[n].harga = Fruit_Tea_Blackcurrant_200ml;
				strcpy(cust[n].namaMakanan, "Fruit Tea Blackcurrant 200ml");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 7 :
				cust[n].harga = Fruit_Tea_Lemon;
				strcpy(cust[n].namaMakanan, "Fruit Tea Lemon");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 8 :
				cust[n].harga = Iced_Coffee;
				strcpy(cust[n].namaMakanan, "Iced Coffee");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 9 :
				cust[n].harga = Iced_Coffee_Float;
				strcpy(cust[n].namaMakanan, "Iced Coffee Float");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 10 :
				cust[n].harga = Iced_Coffee_Jelly;
				strcpy(cust[n].namaMakanan, "Iced Coffee Jelly");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 11 :
				cust[n].harga = Iced_Coffee_Jelly_Float;
				strcpy(cust[n].namaMakanan, "Iced Coffee Jelly Float");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 12 :
				cust[n].harga = Milo;
				strcpy(cust[n].namaMakanan, "Milo");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 13 :
				cust[n].harga = Orange_Drink;
				strcpy(cust[n].namaMakanan, "Orange Drink");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 14 :
				cust[n].harga = Pineapple_Fizz;
				strcpy(cust[n].namaMakanan, "Pineapple Fizz");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 15 :
				cust[n].harga = Premium_Roast_Coffee;
				strcpy(cust[n].namaMakanan, "Premium Roast Coffee");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 16 :
				cust[n].harga = Soda_Kedondong;
				strcpy(cust[n].namaMakanan, "Soda Kedondong");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 17 :
				cust[n].harga = Sprite;
				strcpy(cust[n].namaMakanan, "Sprite");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 18 :
				cust[n].harga = Tehbotol_Sosro;
				strcpy(cust[n].namaMakanan, "Tehbotol Sosro");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 19 :
				cust[n].harga = Teh_Panas_Kotak_250ml;
				strcpy(cust[n].namaMakanan, "Teh Panas Kotak 250ml");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
			case 20 :
				cust[n].harga = Teh_botol_Sosro_Tawar_350ML;
				strcpy(cust[n].namaMakanan, "Teh botol Sosro Tawar 350ML");
				printf("Masukkan Jumlah Pesanan :  "); scanf("%d", &cust[n].jml); fflush(stdin);
				if(cust[n].jml == 0) {
					n--;
					tabel7();
				}
				else if(cust[n].jml < 0) {
					cust[n].jml *= -1;
				}
				break;
		}
	
		cust[n].harga *= cust[n].jml;
		printf("\n\n");
		printf("Total Harga    :  Rp. %d", cust[n].harga);
		printf("\n\n");
		
		system("pause");
		system("cls");
		tabel7();
	}
	
	else if(cust[n].menu == 0) {
		n--;
		system("cls");
		tabelmenu();
	}

}

void input() {
	do{
	system("cls");
	logo2(); 
	
	printf("\n\n");
	printf("             +======+============================+\n");
	printf("             |  No  |         Nama Paket         |\n");
	printf("             +======+============================+\n");
	printf("             |   1. | Menu Paket Istimiewa       |\n");	
	printf("             |   2. | Menu Paket Sarapan         |\n");	
	printf("             |   3. | Menu A La Carte & Paket    |\n");	
	printf("             |   4. | Menu Tambahan              |\n");	
	printf("             |   5. | Menu Paket Happy Meal      |\n");	
	printf("             |   6. | Menu Pencuci Mulut         |\n");	
	printf("             |   7. | Menu Minuman               |\n");	
	printf("             |   0. | Data Pemesanan / Bayar     |\n");
	printf("             +======+============================+\n");
	printf("\n");
	
	printf("                  Pilih Paket Pilihan Anda"); pilc = getch(); fflush(stdin);
	pil = pilc - '0';
	}while(pil < 0 || pil > 8);
	
	switch(pil) {
		case 1: 
			system("cls");
			tabel1();
			break;
		case 2: 
			system("cls");
			tabel2();
			break;
		case 3: 
			system("cls");
			tabel3();
			break;
		case 4: 
			system("cls");
			tabel4();
			break;
		case 5: 
			system("cls");
			tabel5();
			break;
		case 6: 
			system("cls");
			tabel6();
			break;
		case 7: 
			system("cls");
			tabel7();
			break;
		case 8:
			system("cls");
			do {
				logo3();
			}while(x == 0);
			
		case 0:
			system("cls");
			if (n >= 1) {
				printf("+===================+=============================+================+=============+\n");
				printf("|  Urutan Pesanan   |         Nama Pesanan        | Jumlah Pesanan |    Harga    |\n", i, cust[i].harga);
				printf("+===================+=============================+================+=============+\n");
				totalHarga = 0;
				for(i=1; i<=n; i++) {
					totalHarga += cust[i].harga;
					printf("| Pesanan ke-%-4d   | %-27s |       %-4d     | Rp %-8d |\n", i, cust[i].namaMakanan, cust[i].jml, cust[i].harga);
					printf("+===================+=============================+================+=============+\n");
				}
				printf("|                         Total Keseluruhan                        | Rp %-8d |\n", totalHarga);
				printf("+==================================================================+=============+\n\n\n");
				printf("+================================================================================+\n");
				printf("| No. |                                Pilihan Menu                              |\n");
				printf("+================================================================================+\n");
				printf("| 1.  |Cetak Nomor Pesanan                                                       |\n");
				printf("| 0.  |Kembali                                                                   |\n");
				printf("+================================================================================+\n");
				printf("Masukkan Pilihan anda   : "); scanf("%d", &pil);
				switch (pil) {
					case 1 :
						system("cls");
						struk();
						break;
					case 0 :
						system("cls");
						tabelmenu();
				}
				
				
			}
			if (n == 0) {
				printf("+======================================================================================+\n");
				printf("| Maaf, belum ada data yang dapat ditampilkan. Silahkan masukkan data terlebih dahulu. |\n");
				printf("+=================================+====================================================+\n");
				system("pause"); system("cls");
				tabelmenu(); 
				
			}
			system("pause");
			break;
		case 404 :
			system("cls");
			while(1==1){
			printf("Teknik Informatika UIN Jakarta 2021\n");
			printf("Created By : \n");
			printf("1) Faisal Ahmad Gifari              - 1121091000037\n");usleep(500000);
			printf("2) Fattahillah M. Ilham Tarigan     - 1121091000038\n");usleep(500000);
			printf("3) Fikri Dean Radityo               - 1121091000039\n");usleep(500000);
			printf("4) M. Syaddad.G.Al Farez            - 1121091000046\n");usleep(500000);
			printf("\n\n\n");
			}
	}
	
}

void struk()
{
	printf("+===============+\n");
	printf("|     Nomor     |\n");
	printf("|    Pesanan    |\n");
	printf("|       %-5d   |\n",nomor);
	printf("+===============+\n");
	printf("Silahkan Bayar Di Kasir!\n");
	system("pause");
	n = 0;
	totalHarga=0;
	nomor++;
	system("cls");
	tabelmenu();
	
}

void logo() {
	printf("\n\n");
	printf("                ****                       ****             \n"); usleep(30000);
	printf("              ********                  *********           \n"); usleep(30000);
	printf("            ************              *************         \n"); usleep(30000);
	printf("          ****       ****            ****       *****       \n"); usleep(30000);
	printf("        *****         *****        *****         *****      \n"); usleep(30000);
	printf("       *****           *****      *****           *****     \n"); usleep(30000);
	printf("      *****             *****    *****             *****    \n"); usleep(30000);
	printf("      *****              *****  *****              *****    \n"); usleep(30000);
	printf("     *****                **********                *****   \n"); usleep(30000);
	printf("    ******                 ********                 ******  \n"); usleep(30000);
	printf("    *****                   ******                   *****  \n"); usleep(30000);
	printf("    *****                   ******                   *****  \n"); usleep(30000);
	printf("   ******                   ******                   ****** \n"); usleep(30000);
	printf("   ******                   ******                   ****** \n"); usleep(30000);
	printf("   ******                   ******                   ****** \n"); usleep(30000);
	printf("  ******                    ******                    ******\n"); usleep(30000);
	printf("  ******                    ******                    ******\n"); usleep(30000);
	printf("  ******                    ******                    ******\n"); usleep(30000);
	printf("  ******                    ******                    ******\n"); usleep(30000);
	printf("  ******                    ******                    ******\n"); usleep(30000);
	printf("  ******                    ******                    ******\n"); usleep(30000);
	printf("  ******                                              ******\n"); usleep(30000);
	printf("  ******                                              ******\n"); usleep(30000);
}

void logo2() {
	printf("\n");
	printf("                ****                       ****             \n"); 
	printf("              ********                  *********           \n"); 
	printf("            ************              *************         \n"); 
	printf("          ****       ****            ****       *****       \n"); 
	printf("        *****         *****        *****         *****      \n"); 
	printf("       *****           *****      *****           *****     \n"); 
	printf("      *****             *****    *****             *****    \n"); 
	printf("      *****              *****  *****              *****    \n"); 
	printf("     *****                **********                *****   \n"); 
	printf("    ******                 ********                 ******  \n"); 
	printf("    *****                   ******                   *****  \n"); 
	printf("    *****                   ******                   *****  \n"); 
	printf("   ******                   ******                   ****** \n"); 
	printf("   ******                   ******                   ****** \n"); 
	printf("   ******                   ******                   ****** \n"); 
	printf("  ******                    ******                    ******\n"); 
	printf("  ******                    ******                    ******\n"); 
	printf("  ******                    ******                    ******\n"); 
	printf("  ******                    ******                    ******\n"); 
	printf("  ******                    ******                    ******\n"); 
	printf("  ******                    ******                    ******\n"); 
	printf("  ******                                              ******\n"); 
	printf("  ******                                              ******\n"); 
}

void logo3() {
	printf("\n"); printf("									");
	printf("                ****                       ****             \n"); usleep(30000); printf("									");
	printf("              ********                  *********           \n"); usleep(30000); printf("									");
	printf("            ************              *************         \n"); usleep(30000); printf("									");
	printf("          ****       ****            ****       *****       \n"); usleep(30000); printf("									");
	printf("        *****         *****        *****         *****      \n"); usleep(30000); printf("									");
	printf("       *****           *****      *****           *****     \n"); usleep(30000); printf("									");
	printf("      *****             *****    *****             *****    \n"); usleep(30000); printf("									");
	printf("      *****   CREATED    *****  *****       BY     *****    \n"); usleep(30000); printf("									");
	printf("     *****                **********                *****   \n"); usleep(30000); printf("									");
	printf("    ******                 ********                 ******  \n"); usleep(30000); printf("									");
	printf("    *****                   ******                   *****  \n"); usleep(30000); printf("									");
	printf("    *****     FATTAH        ******         DEAN      *****  \n"); usleep(30000); printf("									");
	printf("   ******                   ******                   ****** \n"); usleep(30000); printf("									");
	printf("   ******                   ******                   ****** \n"); usleep(30000); printf("									");
	printf("   ******                   ******                   ****** \n"); usleep(30000); printf("									");
	printf("  ******      SYADDAD       ******        FAISAL      ******\n"); usleep(30000); printf("									");
	printf("  ******                    ******                    ******\n"); usleep(30000); printf("									");
	printf("  ******                    ******                    ******\n"); usleep(30000); printf("									");
	printf("  ******                    ******                    ******\n"); usleep(30000); printf("									");
	printf("  ******                    ******                    ******\n"); usleep(30000); printf("									");
	printf("  ******                    ******                    ******\n"); usleep(30000); printf("									");
	printf("  ******                                              ******\n"); usleep(30000); printf("									");
	printf("  ******                                              ******\n"); usleep(30000); printf("									");
	
	
	printf("\n\n");
	
	printf("									"); printf("Teknik Informatika UIN Jakarta 2021\n");
	printf("									"); printf("Created By : \n");
	printf("									"); printf("1) Faisal Ahmad Gifari              - 1121091000037\n");usleep(30000);
	printf("									"); printf("2) Fattahillah M. Ilham Tarigan     - 1121091000038\n");usleep(30000);
	printf("									"); printf("3) Fikri Dean Radityo               - 1121091000039\n");usleep(30000);
	printf("									"); printf("4) M. Syaddad.G.Al Farez            - 1121091000046\n");usleep(30000);
	printf("									"); printf("\n\n\n");
}

void main() {
	getch();
	do{
		system("cls");
		tabelmenu();
		
	}while(pil == 0);
}
