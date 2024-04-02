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

int main()
{
}