#include <iostream>
using namespace std;

// array

int main()
{
   int angka [] = {
   };
   for (int j = 0; j < 5 ; j++) {
       cout << "masukan angka: ";
       cin >>  angka [j];
   }
   
   for (int i = 0; i < 5; i++){ 
        cout << "angka ke - "<< i << "=" << angka [i] * angka [i] << endl;
    }
   
    return 0;
}
