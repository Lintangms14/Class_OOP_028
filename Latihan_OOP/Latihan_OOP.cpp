#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();
};

void matakuliah::InputMK() {
	cout << "\nMasukkan kode mata kuliah : ";
	cin >> kode;
	cout << "Masukkan nama mata kuliah : ";
	cin >> namamk;
	cout << "Masukkan sks mata kuliah : ";
	cin >> sks;
}
void matakuliah::TampilMK() {

}

int main() 
{
	Mahasiswa mhs;
	matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.InputMK();
	mk.TampilMK();
}