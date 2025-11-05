#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long totalDetik;
    
    cout << "===============================" << endl;
    cout << "    KONVERSI DETIK -> WAKTU   " << endl;
    cout << "===============================" << endl;
    
    cout << "Masukkan jumlah detik (>1): ";
    cin >> totalDetik;
    
    if (totalDetik <= 1) {
        cout << "Error: Input harus > 1" << endl;
        return 1;
    }
    
    long long jam = totalDetik / 3600;
    long long sisaDetik = totalDetik % 3600;
    long long menit = sisaDetik / 60;
    long long detik = sisaDetik % 60;
    
    cout << "-------------------------------" << endl;
    cout << "HASIL KONVERSI:" << endl;
    cout << "-------------------------------" << endl;
    cout << totalDetik << " detik = " 
         << jam << " jam, " 
         << menit << " menit, " 
         << detik << " detik" << endl;
    cout << "===============================" << endl;
    
    return 0;
}
