#include <iostream>

using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasakhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasakhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0;}
	virtual void cekKelulusan() {  }
	virtual void input() {  }

	void setpresensi(float nilai) {
		this->presensi = nilai;
	}

	float getpresensi() {
		return presensi;
	}

	void setP(int p) {
		this->presensi=p;
	}
	void setA(int a) {
		this->activity = a;
	}
	void setE(int e) {
		this->exercise = e;
	}
	void setUA(int ua) {
		this->tugasakhir = ua;
	}

	int getP() {
		return presensi;
	}

	int getA() {
		return activity;
	}

	int getE() {
		return exercise;
	}

	int getUA() {
		return tugasakhir;
	}

};

class Pemograman : 
	public MataKuliah {
public:
		void input() {
		{int p;
		cout << "Masukan nilai presensi: ";
		cin >> p;
		setP(p);

		int a;
		cout << "Masukan nilai activity: ";
		cin >> a;
		setA(a);

		int e;
		cout << "Masukan nilai exercise: ";
		cin >> e;
		setE(e);

		int ua;
		cout << "Masukan nilai Tugas Akhir: ";
		cin >> ua;
		setUA(ua);
		}
	}

	float hitungNilaiAkhir() {
		int p = getP();
		return p > 0,1;

		int a = getA();
		return a > 0,2;

		int e = getE();
		return e > 0,3;

		int ua = getUA();
		return ua > 0,4;
	}
	
	double kelulusan(double hitungNilaiAkhir)
	{
		return (hitungNilaiAkhir >= 75);
	}
	void cekKelulusan() {
		string status(double kelulusan) {
			if (nilai akhir >= 75)
				return "lulus";
			else
				return "tidak lulus";
		}
	}
};

int main() {
	Pemograman pemograman;
	pemograman.input();
	
	cout << "Selamat anda lulus mata kuliah pemograman dengan nilai akhir: " << pemograman.hitungNilaiAkhir() << endl;
	

	cout << " " << endl;
	cout << "-----" << endl;
	cout << " " << endl;

	return 0;

}