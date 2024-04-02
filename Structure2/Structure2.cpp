#include <iostream>
using namespace std;

// Mendefinisikan struktur DetailAlamat
struct DetailAlamat {
	string desa;  // Variabel untuk menyimpan nama desa
	string kota; // Variabel untuk menyimpan nama kota
};

// Mendefinisikan struktur Mahasiswa
struct Mahasiswa {
	string nim; // Variabel untuk menyimpan nomor induk mahasiswa
	string nama; // Variabel untuk menyimpan nama mahasiswa
	DetailAlamat alamat; // Variabel bertipe DetailAlamat untuk menyimpan detail alamat mahasiswa
	int umur; // Variabel untuk menyimpan usia mahasiswa
};

int main()
{
	Mahasiswa mhs; // Mendeklarasikan variabel bertipe Mahasiswa

	// Meminta pengguna untuk memasukkan nomor mahasiswa
	cout << "Nomor Mahasiswa : "; // Menampilkan pesan memasukkan nomor mahasiswa
	cin >> mhs.nim; // Memasukkan nomor mahasiswa dan menyimpannya di variabel nim

	// Meminta pengguna untuk memasukkan nama mahasiswa
	cout << "Nama Mahasiswa : "; // Menampilkan pesan memasukkan nama mahasiswa
	cin >> mhs.nama; // Memasukkan nama mahasiswa dan menyimpannya di variabel nama

	// Meminta pengguna untuk memasukkan alamat mahasiswa
	cout << "Alamat Mahasiswa : " << endl; // Menampilkan pesan memasukkan alamat mahasiswa
	cout << "\t Nama Desa : "; // Menampilkan pesan memasukkan nama desa
	cin >> mhs.alamat.desa; // Memasukkan nama desa dan menyimpannya di variabel desa
	cout << "\t Nama Kota : "; // Menampilkan pesan memasukkan nama kota
	cin >> mhs.alamat.kota; // Memasukkan nama kota dan menyimpannya di variabel kota

	// Meminta pengguna untuk memasukkan umur mahasiswa
	cout << " Umur Mahasiswa : "; // Menampilkan pesan memasukkan umur mahasiswa
	cin >> mhs.umur; // Memasukkan umur mahasiswa dan menyimpannya di variabel umur

	// Menampilkan informasi yang dimasukkan oleh pengguna
	cout << endl; // Baris kosong
	cout << "\n NIM : " << mhs.nim; // Menampilkan nomor mahasiswa
	cout << "\n Nama : " << mhs.nama; // Menampilkan nama mahasiswa
	cout << "\n Alamat : "; // Menampilkan label alamat
	cout << "\n \t Desa : " << mhs.alamat.desa; // Menampilkan nama desa
	cout << "\n \t Kota : " << mhs.alamat.kota; // Menampilkan nama kota
	cout << "\n Umur :" << mhs.umur; // Menampilkan umur mahasiswa
}