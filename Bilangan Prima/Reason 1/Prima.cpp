#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Angka Prima  ##" << endl;
  cout << "===============================" << endl;
  cout << endl;

  int n,i, pembagi;
  bool angka_prima = true;

  cout << "Input satu angka bulat: ";
  cin >> n;

  // 0 dan 1 bukan angka prima
  if (n == 0 || n == 1) {
    angka_prima = false;
  }
  else {
    for (i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        pembagi = i;
        angka_prima = false;
        break;
      }
    }
  }

  cout << endl;
  if (angka_prima)
    cout << n << " adalah angka prima";
  else
    cout << n << " bukan angka prima, karena bisa dibagi " << pembagi;

 cout << endl;
 return 0;
}
