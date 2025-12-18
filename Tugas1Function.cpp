#include <iostream>
using namespace std;

// Deklarasi variabel global
int input = 0;
int jumlah = 0;
int banyakData = 0;
double rata;

// Deklarasi function
void hitungAverage(int jumlah, int banyakData);

int main() {
    cout << "Masukkan data" << endl;
    
    // Input sebanyak 3 kali
    for (int i = 0; i < 3; i++) {
        cin >> input;
        jumlah += input;  // Menjumlahkan semua input
        banyakData++;     // Menghitung banyaknya data
    }
    
    // Memanggil function hitungAverage
    hitungAverage(jumlah, banyakData);
    
    return 0;
}

// Implementasi function hitungAverage
void hitungAverage(int jumlah, int banyakData) {
    cout << "Jumlah Angka = " << jumlah << endl;
    cout << "Banyak Data = " << banyakData << endl;
    rata = (double)jumlah / banyakData;
    cout << "Rata-ratnya = " << rata << endl;
}
