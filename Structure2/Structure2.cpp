#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cout << "Nama Mahasiswa : ";
	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa : ";
	cout << "\t Nama Kota : ";
	cout << " Umur Mahasiswa : ";
}