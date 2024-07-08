#include <iostream> 
using namespace std; 

class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
	}

	virtual void namaJalurMasuk() {
		return;
	}

	virtual void hitungTotalBiaya() {
		return;
	}

	virtual void tampilkanTotalBiaya() {
		return;
	}

	virtual void input() {
		return;
	}

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}

	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}

	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}

	float getUangBangunan() {
		return uangBangunan;
	}
	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}

	float getTotalBiaya() {
		return totalBiaya;
	}
};

class SNBT : public MasukUniversitas {
public:
	SNBT(int uangPendaftaran) :
		MasukUniversitas()
	{
		cout << "Masukan uang pendaftaran: ";
		cin >> uangPendaftaran;
	}

	SNBT(int uangSemesterPertama) :
		MasukUniversitas()
	{
		cout << "Masukan uang semester: ";
		cin >> uangSemesterPertama;
	}

	SNBT(int uangBangunan) :
		MasukUniversitas()
	{
		cout << "Masukan uang bangunan: ";
		cin >> uangBangunan;
	}
	
	void hitungTotalBiaya() {
		return;
	}

	void tampilkanTotalBiaya() {
		return;
	}
	void input() {
		return;
	}

};

class SNBP : public MasukUniversitas {
public:
	SNBP(int uangPendaftaran) :
		MasukUniversitas()
	{
		cout << "Masukan uang pendaftaran: ";
		cin >> uangPendaftaran;
	}

	SNBP(int uangSemesterPertama) :
		MasukUniversitas()
	{
		cout << "Masukan uang semester: ";
		cin >> uangSemesterPertama;
	}

	void hitungTotalBiaya() {
		return;
	}

	void tampilkanTotalBiaya() {
		return;
	}
	void input() {
		return;
	}

};

int main()
{
	int pilihan;
	{
		cout << "Pilih Jalur Masuk" << endl;
		cout << "1. SNBT" << endl;
		cout << "2. SNBP" << endl;
		cout << "3. Keluar" << endl;
		cout << "Pilih: ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			SNBT;
			cout << "SNBT = " << endl;
			break;
		case 2:
			SNBP;
			cout << "SNBP = " << endl;
			break;
		case 3:
			break;
		}
	}
	return 0;
}