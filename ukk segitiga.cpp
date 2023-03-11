#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int alas,tinggi,luas;
    cout << "MENGHITUNG LUAS SEGITIGA\n\n";
    
    cout << "Masukan alas : ";
    cin >> alas;
    cout >> "Masukan tinggi : ";
    cin >> tinggi;
    
    luas = 0.5*alas*tinggi;
    
    cout << "Luas segitiga adalah " << luas;
    
    
    
    
    return 0;
}