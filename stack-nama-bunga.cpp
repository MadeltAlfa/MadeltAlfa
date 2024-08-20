#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // Nanda Bagus Ramadhani 23103041071 A3
    // Struktur data
    int namaBunga[10];
    int count1 = 0, count2 = 0, j; // j = Jumlah bunga yang akan diinput

    cout << "Masukkan Jumlah Bunga[max=10]: ";
    cin >> j;
    cout << endl;

    for(int i=0; i<j; i++){
        count1+=1;
        cout << "Masukkan Nama Bunga " << i+1 << ": ";
        cin >> namaBunga[i];
    }
    system("cls");
    //jeda
    cout << "\nDaftar Bunga yang Di-input\n";

    for(int i=0; i<j; i++){
        count2+=1;
        cout << count2 << ". " << namaBunga[i] << endl;
    }

    return 0;
}
