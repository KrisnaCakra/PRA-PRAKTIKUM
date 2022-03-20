/* 

KELOMPOK PRA PRAKTIKUM ALGORITMA PEMROGRAMAN 
ANGGOTA :

KRISNA CAKRA NINGRAT - 2100018449
ANELA INDRA - 2100018454
SASQIA AULIA NUR AINI - 2100018456

*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
  int bil1, bil2, pil;
  float hasil;
  string operasi;
  
  cout << "TUGAS KELOMPOK PRATIKUM ALGORITMA PEMROGRAMAN" << endl;
  cout << "------------------KALKULATOR-----------------" << endl;
  cout << "1. Penjumlahan" << endl;
  cout << "2. Pengurangan" << endl;
  cout << "3. Perkalian" << endl;
  cout << "4. Pembagian" << endl;
  cout << "5. Modulus" << endl;
  cout << "6. Perpangkatan" << endl;
  cout << "7. Akar (pilih nilai pada bilangan dua)" << endl;
  cout << "\n\nMasukkan Pilihan : ";
  cin >> pil;
  cout << "Masukkan Bilangan Pertama : ";
  cin >> bil1;
  cout << "Masukkan Bilangan Kedua : ";
  cin >> bil2;
  cin >> pil;
  cout << "Masukkan Bilangan Pertama : ";
  cin >> bil1;
  cout << "Masukkan Bilangan Kedua : ";
  cin >> bil2;

  switch(pil)
    {
      case 1:
        hasil = bil1 + bil2;
        operasi = '+';
        break;
      
      case 2:
        hasil = bil1 - bil2;
        operasi = '-';
        break;
      
      case 3:
        hasil = bil1 * bil2;
        operasi = 'x';
        break;
      
      case 4:
        hasil = bil1 / bil2;
        operasi = '/';
        break;
        
      case 5:
      	hasil = bil1 % bil2;
      	operasi = '%';
      	break;
		  
	  case 6:
        hasil = pow (bil1,bil2);
        operasi = '^';
        break;

      case 7:
        hasil = sqrt (bil2);
        operasi = 'V';
        break;

      default :
        cout << "\n\n---------- SALAH MEMASUKKAN PILIHAN ----------" << endl;
    }
  
  cout << "=====================================" << endl;
  cout << " " << bil1 << operasi << bil2 << " = " << hasil << endl;
  cout << "=====================================" << endl;

  return 0;
}

 
