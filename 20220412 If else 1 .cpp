#include <iostream>

using namespace std;

int main ()
{
  
  /*
  jika nilai habis di bagi (%) 0, bilangan genap
  jika bukan, bilangan ganjil
  */
  
  int angka;
  cout << "masukan angka = "; cin >> angka;
  if (angka % 2 == 0) {
      cout << "bilanngan genap" << endl;
  }
  else {
      cout << "bilangan ganjil";
  }
}
