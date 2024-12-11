#include <iostream>
#include <cmath>

using namespace std;

double hasil;

void luasPersegi(int sisi) {
	hasil = sisi * sisi;
}

void kelilingPersegi(int sisi) {
	hasil = 4 * sisi;
}

void luasPersegiPanjang(int panjang, int lebar) {
	hasil = panjang * lebar;
}

void kelilingPersegiPanjang(int panjang, int lebar) {
	hasil = 2 * (panjang + lebar);
}

void luasSegitiga(int alas, int tinggi) {
	hasil = 0.5 * alas * tinggi;
}

void kelilingSegitiga(int alas, int tinggi) {
	double miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
	hasil = alas + tinggi + miring;
}

void luasLingkaran(int jari_jari) {
	hasil = 3.14 * jari_jari * jari_jari;
}

void kelilingLingkaran(int jari_jari) {
	hasil = 2 * 3.14 * jari_jari;
}

int main() {
	int pilihan;
	int sisi, panjang, lebar, alas, tinggi, jari_jari;

	cout << "TUGAS PERHITUNGAN LUAS DAN KELILING BANGUN DATAR\n";
	cout << "NAMA : SITI RAHMAWATI\n";
	cout << "NIM : 24104410009\n";
	cout << endl;

	cout << "1. Menghitung luas persegi\n";
	cout << "2. Menghitung keliling persegi\n";
	cout << "3. Menghitung luas persegi panjang\n";
	cout << "4. Menghitung keliling persegi panjang\n";
	cout << "5. Menghitung luas segitiga\n";
	cout << "6. Menghitung keliling segitiga\n";
	cout << "7. Menghitung luas lingkaran\n";
	cout << "8. Menghitung keliling lingkaran\n";

	cout << "pilih rumus dari (1-8)";
	cin >> pilihan;

	if (pilihan == 1) {
		cout << "Masukkan sisi persegi:";
		cin >> sisi;
		luasPersegi(sisi);
		cout << "luas persegi adalah:" << hasil << endl;
	}
	else if (pilihan == 2) {
		cout << "Masukkan sisi persegi:";
		cin >> sisi;
		kelilingPersegi(sisi);
		cout << "Keliling persegi adalah:" << hasil << endl;
	}
	else if (pilihan == 3) {
		cout << "Masukkan panjang persegi panjang:";
		cin >> panjang;
		cout << "Masukkan lebar persegi panjang:";
		cin >> lebar;
		luasPersegiPanjang(panjang, lebar);
		cout << "luas persegi panjang adalah:" << hasil << endl;
	}
	else if (pilihan == 4) {
		cout << "Masukkan panjang persegi panjang";
		cin >> panjang;
		cout << "Masukkan lebar persegi panjang:";
		cin >> lebar;
		kelilingPersegiPanjang(panjang, lebar);
		cout << "Keliling persegi panjang adalah:" << hasil << endl;
	}
	else if (pilihan == 5) {
		cout << "Masukkan alas segitiga:";
		cin >> alas;
		cout << "Masukkan tinggi segitiga:";
		cin >> tinggi;
		luasSegitiga(alas, tinggi);
		cout << "Luas segitiga adalah:" << hasil << endl;
	}
	else if (pilihan == 6) {
		cout << "Masukkan alas segitiga:";
		cin >> alas;
		cout << "Masukkan tinggi segitiga:";
		cin >> tinggi;
		kelilingSegitiga(alas, tinggi);
		cout << "Keliling segitiga adalah:" << hasil << endl;
	}
	else if (pilihan == 7) {
		cout << "Masukkan jari-jari lingkaran";
		cin >> jari_jari;
		luasLingkaran(jari_jari);
		cout << "Luas lingkaran adalah:" << hasil << endl;
	}
	else if (pilihan == 8) {
		cout << "Masukkan jari-jari lingkaran:";
		cin >> jari_jari;
		kelilingLingkaran(jari_jari);
		cout << "Keliling lingkaran adalah:" << hasil << endl;
	}
	else {
		cout << "Pilihan valid!" << endl;
	}
	return 0;
}