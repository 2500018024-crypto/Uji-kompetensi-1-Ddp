#include <iostream>
#include <string>

using namespace std;
int main() {
   int score 0 
   int sum = 0
   double average;
   int JumlahSiswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> JumlahSiswa;

    int counter = 1;
    while (counter <= JumlahSiswa) {
        cout<<"masukkan nilai siswa"<< counter <<": ";
        cin>>score;
        sum += score;
        counter++;
        return 0;
    }
