#include <iostream>

using namespace std;

int main()
{
    int ang, ang1 = 0, ang2 = 1, angSelanjutnya;
    cout << "Tentukan Jumlah Deret Fibonacci: ";
    cin >> ang;

    for (int i = 1; i <= ang; i++) {
        if (i == 1) {
            cout << ang1 << " ";
            continue;
        }
        if (i == 2) {
            cout << ang2 << " ";
        }
        angSelanjutnya = ang1 + ang2;
        ang1 = ang2;
        ang2 = angSelanjutnya;

        cout << angSelanjutnya << " ";
    }


   cout << endl;
    return 0;
}
