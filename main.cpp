#include <iostream>
using namespace std;

// Fungsi untuk menampilkan menu makanan dan minuman
void tampilkanMenu() {
    cout << "=== MENU MINI KASIR ===" << endl;
    cout << "1. Pecel      : Rp 10.000" << endl;
    cout << "2. Minum Teh  : Rp  3.000" << endl;
    cout << "3. Kopi       : Rp  5.000" << endl;
    cout << "=======================" << endl;
}

// Fungsi utama program kasir
void hitungKasir() {
    int pilihan, jumlah;
    int totalBayar = 0;
    int harga = 0;

    tampilkanMenu();

    while (true) {
        cout << "Masukkan nomor menu (1/2/3) atau 0 untuk selesai: ";
        cin >> pilihan;

        if (pilihan == 0) {
            break; // Keluar dari loop jika input 0
        }

        // Menentukan harga berdasarkan pilihan menggunakan switch case
        switch (pilihan) {
            case 1:
                harga = 10000; // Harga Pecel
                break;
            case 2:
                harga = 3000;  // Harga Minum Teh
                break;
            case 3:
                harga = 5000;  // Harga Kopi
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n" << endl;
                continue; // Kembali ke awal loop jika salah input
        }

        cout << "Masukkan jumlah pesanan: ";
        cin >> jumlah;

        int subtotal = harga * jumlah;
        totalBayar += subtotal;
        cout << "Subtotal: Rp " << subtotal << "\n" << endl;
    }

    cout << "=======================" << endl;
    cout << "TOTAL YANG HARUS DIBAYAR: Rp " << totalBayar << endl;
    cout << "=======================" << endl;
}

int main() {
    // Memanggil fungsi kasir di dalam main
    hitungKasir();
    return 0;
}
