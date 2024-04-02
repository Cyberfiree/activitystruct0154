#include <iostream>
using namespace std;

struct Mahasiswa { //Mendefinisikan sebuah struct untuk Mahasiswa 
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs; //Mendeklarasikan variabel struktur Mahasiswa
	cout << "Nomor Mahasiswa : ";  // Menampilkan pesan untuk meminta nomor mahasiswa
	cin >> mhs.nim; // Meminta input nomor mahasiswa dari pengguna dan menyimpannya di variabel nim
	cout << "Nama Mahasiswa : "; // Menampilkan pesan untuk meminta nama mahasiswa
	cin >> mhs.nama; // Meminta input nama mahasiswa dari pengguna dan menyimpannya di variabel nama
	cout << "Alamat Mahasiswa :"; // Menampilkan pesan untuk meminta alamat mahasiswa
	cin >> mhs.alamat; // Meminta input alamat mahasiswa dari pengguna dan menyimpannya di variabel alamat
	cout << "Umur Mahasiswa :"; // Menampilkan pesan untuk meminta umur mahasiswa
	cin >> mhs.umur; // Meminta input umur mahasiswa dari pengguna dan menyimpannya di variabel umur

	cout << endl; // Menampilkan baris kosong
	cout << "\n NIM : " << mhs.nim; // Menampilkan nomor mahasiswa yang telah dimasukkan
	cout << "\n Nama : " << mhs.nama; // Menampilkan nama mahasiswa yang telah dimasukkan
	cout << "\n Alamat : " << mhs.alamat; // Menampilkan alamat mahasiswa yang telah dimasukkan
	cout << "\n Umur : " << mhs.umur; // Menampilkan umur mahasiswa yang telah dimasukkan
}
