#include <iostream>

using namespace std;

int main () 
{

 int nilai;
 string keterangan;
 cout << " masukan nilai = ";cin >> nilai;

 if (nilai > 100 || nilai < 0){
     keterangan = " diluar jangkauan";
 }
 else if (nilai >= 90) {
     keterangan = " sangat memuaskan";
 }
 else if (nilai >=80) {
     keterangan = " memuaskan";
 }
 /*
 else if (nilai >= 75){
     cout << "cukup";
 }
 */
 else {
   cout << " tidak lulus ";
 }
 
 return 0;
}
