#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;	//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {	//constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi set
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran : public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukkan jejari: ";
		cin >> r;
		setX(r);
	}

	float Luas(int a) {
		return 3.14 * a * a;
	}

	float Keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class Bujursangkar : public bidangDatar {
public:
	void input() {
		int sisi;
		cout << "Masukkan sisi: ";
		cin >> sisi;
		setX(sisi);
	}

	float Luas(int a) {
		return a * a;
	}

	float Keliling(int a) {
		return 4 * a;
	}
};

int main() {
	cout << "Output Program" << endl;

	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran = " << lingkaran.Luas() << "\nKeliling Lingkaran = " << lingkaran.Keliling() << endl;

	Bujursangkar bujursangkar;
	bujursangkar.input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas() << "\nKeliling Bujursangkar = " << bujursangkar.Keliling() << endl;

	return 0;
}

