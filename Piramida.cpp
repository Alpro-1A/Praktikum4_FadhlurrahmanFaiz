#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukan Tinggi Segitiga: ";
    cin >> n; // Input tinggi bintang

    // membuat bintang
    for(int i = 1, k = 0; i <= n; i++, k = 0) {
        for(int j = 1; j <= n-i; j++) {
            cout <<"  "; // Diberi spasi agar dapat membuat segitiga
        }
        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    return 0;
}
