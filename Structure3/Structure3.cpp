#include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct DetailAlamat
struct DetailAlamat {
	string desa; // Variabel untuk menyimpan nama desa
	string kota; // Variabel untuk menyimpan nama kota
};

// Mendefinisikan struct mahasiswa
struct mahasiswa {
	string nim; // Variabel untuk menyimpan nomor induk mahasiswa
	string nama; // Variabel untuk menyimpan nama mahasiswa
	DetailAlamat alamat; // Variabel bertipe DetailAlamat untuk menyimpan detail alamat mahasiswa
	int umur; // Variabel untuk menyimpan usia mahasiswa
};

int main()
{
	mahasiswa mhs; // Mendeklarasikan variabel mhs bertipe mahasiswa

	// Meminta pengguna untuk memasukkan nomor mahasiswa
	cout << "Nomor mahasiswa : "; // Menampilkan pesan untuk memasukkan nomor mahasiswa
	getline(cin, mhs.nim); // Memasukkan nomor mahasiswa dan menyimpannya di variabel nim

	// Meminta pengguna untuk memasukkan nama mahasiswa
	cout << "Nama Mahasiswa : "; // Menampilkan pesan untuk memasukkan nama mahasiswa
	getline(cin, mhs.nama); // Memasukkan nama mahasiswa dan menyimpannya di variabel nama

	// Meminta pengguna untuk memasukkan alamat mahasiswa
	cout << "alamat mahasiswa : " << endl; // Menampilkan pesan untuk memasukkan alamat mahasiswa
	cout << "\t nama Desa : "; // Menampilkan pesan untuk memasukkan nama desa
	cin >> mhs.alamat.desa; // Memasukkan nama desa dan menyimpannya di variabel desa
	cout << "\t Nama kota : "; // Menampilkan pesan untuk memasukkan nama kota
	cin >> mhs.alamat.kota; // Memasukkan nama kota dan menyimpannya di variabel kota
	cout << "Umur mahasiswa : "; // Menampilkan pesan untuk memasukkan umur mahasiswa
	cin >> mhs.umur; // Memasukkan umur mahasiswa dan menyimpannya di variabel umur

	cout << endl; // Baris kosong
	cout << "\n Nim :" << mhs.nim; // Menampilkan nomor mahasiswa
	cout << "\n Nama : " << mhs.nama; // Menampilkan nama mahasiswa
	cout << "\n alamat : "; // Menampilkan label alamat
	cout << "\n \t Desa : " << mhs.alamat.desa; // Menampilkan nama desa
	cout << "\n \t Kota : " << mhs.alamat.kota; // Menampilkan nama kota
	cout << "\n Umur : " << mhs.umur; // Menampilkan umur mahasiswa
}