#include <iostream> // Menyertakan library input-output standar C++
#include <string>
using namespace std; // Menggunakan namespace std untuk menggunakan fungsi-fungsi dari standar C++

struct DetailAlamat { // Mendefinisikan struktur DetailAlamat
	string desa; // Mendefinisikan anggota desa berjenis string
	string kota; // Mendefinisikan anggota kota berjenis string
};

struct mahasiswa { // Mendefinisikan struktur mahasiswa
	string nim; // Mendefinisikan anggota nim berjenis string
	string nama; // Mendefinisikan anggota nama berjenis string
	DetailAlamat alamat; // Mendefinisikan anggota alamat berjenis DetailAlamat
	int umur; // Mendefinisikan anggota umur berjenis int
};

int main() // Fungsi utama program
{
	mahasiswa mhs[3]; // Mendeklarasikan array mhs yang berisi 3 objek mahasiswa


    // Input data untuk setiap mahasiswa
    for (int i = 0; i < 3; i++) { // Mulai loop untuk setiap objek mahasiswa
        cout << "Data ke-" << (i + 1) << ":" << endl; // Menampilkan pesan untuk data ke-i
        cout << "Nomor mahasiswa: "; // Menampilkan pesan untuk nomor mahasiswa
        getline(cin, mhs[i].nim); // Mendapatkan nomor mahasiswa dari input user

        cout << "Nama Mahasiswa: "; // Menampilkan pesan untuk nama mahasiswa
        getline(cin, mhs[i].nama); // Mendapatkan nama mahasiswa dari input user

        cout << "Alamat Mahasiswa:" << endl; // Menampilkan pesan untuk alamat mahasiswa
        cout << "\tNama Desa: "; // Menampilkan pesan untuk nama desa
        cin >> mhs[i].alamat.desa; // Mendapatkan nama desa dari input user

        cout << "\tNama Kota: "; // Menampilkan pesan untuk nama kota
        cin >> mhs[i].alamat.kota; // Mendapatkan nama kota dari input user

        cout << "Umur Mahasiswa: "; // Menampilkan pesan untuk umur mahasiswa
        cin >> mhs[i].umur; // Mendapatkan umur mahasiswa dari input user
        cin.ignore(1, '\n'); // Membersihkan karakter newline dari buffer input
        cout << endl; // Mencetak baris kosong untuk memisahkan setiap input mahasiswa
    }
}