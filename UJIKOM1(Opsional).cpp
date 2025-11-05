#include <iostream>
using namespace std;

int main() {
    long long totalDetik;
    
    cout << "=== KONVERSI WAKTU ===" << endl;
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << " >> ";
    cin >> totalDetik;
    
    // Validasi input
    if (totalDetik <= 1) {
        cout << "Error: Masukkan bilangan lebih besar dari 1!" << endl;
        return 1;
    }
    
    // Konversi waktu dengan hari
    long long hari = totalDetik / 86400;      // 1 hari = 86400 detik
    long long sisaSetelahHari = totalDetik % 86400;
    long long jam = sisaSetelahHari / 3600;
    long long sisaDetik = sisaSetelahHari % 3600;
    long long menit = sisaDetik / 60;
    long long detik = sisaDetik % 60;
    
    // Output hasil
    cout << "Hasil Konversi:" << endl;
    cout << totalDetik << " detik = " << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    
    return 0;
}
