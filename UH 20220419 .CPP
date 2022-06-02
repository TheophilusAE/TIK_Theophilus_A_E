#include <iostream>

using namespace std;

int main () {
    
    float a,b,c,hasil;
    
    cout << "masukan nilai Tugas : ";
    cin >> a;
    
    if ( a > 100){
        cout << "tidak boleh lebih dari 100";
        return 0;
    }
    
    cout << "masukan nilai UTS : ";
    cin >> b;
    
    if ( b > 100){
        cout << "tidak boleh lebih dari 100";
        return 0;
    }
    
    cout << "masukan Nilai UAS : ";
    cin >> c;
    
    if ( c > 100){
        cout << "tidak boleh lebih dari 100";
        return 0;
    }
    
    if (a <= 100 || b <=100 || c <= 100) {
         hasil = a * 30/100  + b * 30/100  + c * 40/100 ;
         
         if (hasil >= 75) {
             cout << "rata-rata : " << hasil << "(D)"<< endl;
         }
         else if (hasil >= 75 || hasil <= 82) {
             cout << "rata-rata : " << hasil << "(C)"<< endl;
         }
         else if (hasil >= 82 || hasil <= 92) {
             cout << "rata-rata : " << hasil << "(B)"<< endl;
         }
         else if (hasil >= 92 || hasil <= 100) {
             cout << "rata-rata : " << hasil << "(A)"<< endl;
         }
     }

}
