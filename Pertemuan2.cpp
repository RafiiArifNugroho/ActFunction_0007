#include <iostream>
using namespace std;

// Function untuk menghitung luas segitiga
float hitungLuas(float alas, float tinggi)
{
    return 0.5 * alas * tinggi;
}

// Procedure untuk input dan output
void prosesLuasSegitiga()
{
    float alas, tinggi, luas;

    // Input
    cout << "Masukkan alas segitiga : ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;

    // Memanggil function untuk kalkulasi
    luas = hitungLuas(alas, tinggi);

    // Output
    cout << "Luas segitiga adalah : " << luas << endl;
}

int main()
{
    prosesLuasSegitiga();
    return 0;
}