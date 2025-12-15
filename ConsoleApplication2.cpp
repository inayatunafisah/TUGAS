#include <iostream>
using namespace std;

int main()
{
    double harga, diskon, jumlahDiskon, hargaSetelahDiskon;

    cout << "Selamat Datang di Toko Unisba Blitar\n ";
    cout << "======================================\n";
    cout << "\n";

    cout << "Masukkan ";
    cout << "Harga barang (Rp) = ";
    cin >> harga;

    cout << " Diskon barang (%) = ";
    cin >> diskon;
    cout << "\n";

    jumlahDiskon = harga * (diskon / 100);
    hargaSetelahDiskon = harga - jumlahDiskon;

    cout << "Hasil : " << endl;
    cout << "jumlah diskon    = Rp " << jumlahDiskon << endl;
    cout << "Harga setelah Diskon = Rp " << hargaSetelahDiskon << endl;

    return 0;
}
