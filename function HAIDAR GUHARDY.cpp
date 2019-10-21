#include <iostream>
using namespace std;

void LuasSegitiga()
{
 int panjang,tinggi;

 cout << "KALKULATOR LUAS SEGITIGA\n";
 cout << "oleh HAIDAR GUHARDY MUHAMMAD\n\n";
 cout << "Masukkan panjang: "; cin >> panjang;
 cout << "Masukkan tinggi: "; cin >> tinggi;

 cout<<"Luas segitiga: " << 0.5*panjang*tinggi;
}

int main()
{
 LuasSegitiga();
 return 0;
}
