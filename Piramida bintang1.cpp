#include<iostream>
using namespace std;
int main()
{
      int n, s, i, j;
      cout << "Masukkan jumlah baris: ";
      cin >> n;
      for (i = n; i >= 1; i--)
      {
            //for loop to put space
            for (s = i; s < n; s++)
                  cout << " ";
            //for loop for displaying star
            for (j = 1; j <= i; j++)
                  cout << "* ";
            // ending line after each row
            cout << "\n";
      }
      return 0;
}
