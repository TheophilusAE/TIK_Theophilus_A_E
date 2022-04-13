#include <iostream>

using namespace std;

int main () 
{

 int nilai;
 cout << " masukan nilai = ";cin >> nilai;

 if (nilai > 100 || nilai < 0){
     cout <<" diluar jangkauan";
 }
 else if (nilai >= 90) {
     cout << "sangat memuaskan";
 }
 else if (nilai >=80) {
     cout << "memuaskan";
 }
 else if (nilai >= 75){
     cout << "cukup";
 }
 else {
   cout << " tidak lulus ";
 }
 


}
