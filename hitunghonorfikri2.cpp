#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	//MENGHITUNG HONOR KARYAWAN
	string nama;
	char golongan;
	int jam_kerja, jam_lembur, upah_per_jam, total_upah, upah_lembur;
	
	// proses input
	cout << "\n---- HITUNG HONOR KARYAWAN ----\n";
 	cout << "Nama Karyawan: ";
 	getline(cin,nama);
 
 	cout << "Golongan(A/B/C): ";
 	cin >> golongan;
 	
 	cout << "Jumlah Jam Kerja: ";
 	cin >> jam_kerja;
 
 	
 	// tentukan jumlah upah per jam berdasarkan golongan
 	switch (golongan) {
 	 case 'A':
    upah_per_jam = 5000;
    break;
 	 case 'B':
    upah_per_jam = 7000;
    break;
 	 case 'C':
    upah_per_jam = 10000;
    break;
  
  }
  	// tentukan jumlah upah lembur berdasarkan golongan
 	switch (golongan) {
 	 case 'A':
    upah_lembur = 3000;
    break;
 	 case 'B':
    upah_lembur = 5000;
    break;
 	 case 'C':
    upah_lembur = 7000;
    break;
  }
  
  	// proses hitung
  	if (jam_kerja <= 48) {
  		total_upah =  upah_per_jam* jam_kerja;
	 } 	
	 else {
        float jam_lembur = jam_kerja - 48;
        total_upah = 48 * upah_per_jam + jam_lembur * upah_lembur;
    }
 // Menampilkan hasil
 	system("cls"); //untuk menghapus layar screen
 	cout << "\n---- HASIL HITUNG HONOR KARYAWAN  ----\n";
 	cout<<endl;
	cout<<"Nama Anda : "<<nama<<endl;
    cout << "Honor Karyawan Golongan " << golongan << " Dengan " << jam_kerja << " Jam Kerja: Rp " << total_upah << endl;

    return 0;
}
