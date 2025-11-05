#include <iostream>
using namespace std;

int main() {
    long long totalDetik;
    
    cout << "Masukkan bilangan >1 (satuan detik)" << endl;
    cout << " >> ";
    cin >> totalDetik;
    
    // Validasi input
    if (totalDetik <= 1) {
        cout << "Error: Masukkan bilangan lebih besar dari 1!" << endl;
        return 1;
    }
    
    // Konversi detik,jam,menit
    long long jam = totalDetik / 3600;
    long long sisaDetik = totalDetik % 3600;
    long long menit = sisaDetik / 60;
    long long detik = sisaDetik % 60;
    
    // Output hasil
    cout << "Hasil Konversi:" << endl;
    cout << totalDetik << " detik = " << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;
    
    return 0;
}
