#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int angka, jumlahDigit = 0;
    cout << "\t Menghitung Jumlah Digit Angka Integer \n\n";
    cin >> angka;
    
    while (angka !=0)
    {
      jumlahDigit = jumlahDigit + angka % 10;
      
      angka = angka / 10;
    }
    
    cout << "\ Jumlah Digit Angkanya : " << jumlahDigit;
} 