#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
	mahasiswa mhs;
	cout << "Nomor mahasiswa : ";
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa : ";
	getline(cin, mhs.nama);

	cout << "alamat mahasiswa : " << endl;
	cout << "\t nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama kota : ";
	cin >> mhs.alamat.kota;
	cout << "Umur mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
}