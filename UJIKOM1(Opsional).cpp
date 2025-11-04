#include <iostream>
using namespace std;

int main() {
    long long totalDetik;
    
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << " >> ";
    cin >> totalDetik;

    if (totalDetik <= 0) {
        cout << "Input harus lebih dari 0 detik!" << endl;
        return 0;
    }

    // Konversi detik ke hari, jam, menit, dan detik
    int hari = totalDetik / 86400;               // 1 hari = 86400 detik
    int sisaSetelahHari = totalDetik % 86400;
    int jam = sisaSetelahHari / 3600;
    int sisaSetelahJam = sisaSetelahHari % 3600;
    int menit = sisaSetelahJam / 60;
    int detik = sisaSetelahJam % 60;

    cout << "Hasil Konversi:" << endl;
    cout << totalDetik << " detik = ";
    if (hari > 0)
        cout << hari << " Hari, ";
    cout << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;

    return 0;
}
