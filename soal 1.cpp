
#include <iostream>

using namespace std;

int main () {
    int b;
    cout << "Masukkan baris segitiga pascal: ";
    cin >> b;
    
    for (int i = 0; i < b; i++) {
        for (int s = 0; s < b - i; s++) {
            cout << " ";
            }
        int nilai = 1;
        for (int j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i-j) / (j+1);
            }
        cout << endl;    
        }
    return 0;
    }
