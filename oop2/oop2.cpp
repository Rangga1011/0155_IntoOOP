#include <iostream>
using namespace std;

class bangunDatar {
private:
	float panjang, lebar;
public:
	float luas;

	void input() { // metode input persegi panjang

		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> lebar;
	}

	float hitungluas(){
		return panjang * lebar;
	}
	void display() {
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << lebar << endl;
		cout << "Luasnya = " << hitungluas << endl;
	}
};

int main() {
	bangunDatar pp; // deklarasi objek pp dari class bangun datar
	pp.input();
	pp.display();

	return 0;
}


