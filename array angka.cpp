#include <iostream>
using namespace std;

int main()
{
    int angka [] = { 123,123,445,5456,67,6678,867,678,6786,678};
    
    int a;
    
    cout << "masukan batas data: ";
    cin >> a;
    for (int i = 0; i < a; i++){
        cout << angka [i] << endl;
    }

    return 0;
}
