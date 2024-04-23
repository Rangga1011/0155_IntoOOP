#include <iostream>
using namespace std;

class mahasiswa {
public: // akses modifier
	string nama;
	string umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}

};


class Matakuliah {
private:
	string kodeMk;
	string namaMk;
	string sks;
public:
	void input() {
		cout << "kode Mk: ";
		cout << kodeMk;
		cout << "Nama Mk: ";
		cout << namaMk;
		cout << "SKS: ";
		cout << sks;
	}
	
	void output() {
		cout << "Kode Mk: " << kodeMk << endl;
	}

};



