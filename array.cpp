#include <iostream>
using namespace std;

// array

int main()
{
    string nama [] = { 
        "david", 
        "kabila", 
        "bryan", 
        "sidmey",
        "gracia",
        "keysie",
        "yoel"
        
    };
    int a;
    
    cout << "masukan batas data: ";
    cin >> a;
 
   for (int i = 0; i < a; i ++) {
       cout << nama [i] << endl;
   }
    return 0;
}
