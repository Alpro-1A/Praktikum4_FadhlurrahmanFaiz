#include <iostream>

using namespace std;

int main()
{
    int batas;
    int JumlahGanjil = 0;
    int JumlahGenap = 0;
    int JumlahPrima = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima." << endl;

    cout << "Masukan Batas Akhir: ";
    cin >> batas; // masukan batas sesuai keinginan

    cout << "Bilangan Ganjil: " << endl;
    // Output untuk bilangan ganjil, cout ini di atas agar tidak mencetak banyak baris

    for (int i = 0; i <= batas; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " "; // menampilkan bilangan ganjil
            JumlahGanjil += i; // operasi penjumlahan bilangan ganjil


        }
    }

    cout << endl;

    // Hal yang sama berlaku

    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2)
    {
        cout << i << " ";
        JumlahGenap += i;
    }
    cout << endl;

    // Hal yang sama berlaku

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++)
    {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
        {
        }

        if (j * j > i)
        {
            cout << i << " ";
            JumlahPrima += i;
        }
    }
    cout << endl;

    // Output jumlah masing-masing bilangan

    cout << "Jumlah Bilangan Ganjil: " << JumlahGanjil<< endl;
    cout << "Jumlah Bilangan Genap: " << JumlahGenap << endl;
    cout << "Jumlah Bilangan Prima: " << JumlahPrima << endl;



    // langkah terakhir menentukan faktor-faktor dari jumlah masing-masing bilangan

    // untuk bilangan ganjil
    cout << "Faktor-faktor dari penjumlahan bilangan ganjil adalah: ";
    for (int i = 1; i <= JumlahGanjil; i++) {
     if (JumlahGanjil % i == 0) {
        cout << i << " ";
     }
    }
    cout << endl;



    // untuk bilangan genap
    cout << "Faktor-faktor dari penjumlahan bilangan genap adalah: ";
    for (int i = 1; i <= JumlahGenap; i++) {
     if (JumlahGenap % i == 0) {
        cout << i << " ";
     }
    }
    cout << endl;


    // untuk bilangan prima
    cout << "Faktor-faktor dari penjumlahan bilangan prima adalah: ";
    for (int i = 1; i <= JumlahPrima; i++) {
     if (JumlahPrima % i == 0) {
        cout << i << " ";
     }
    }

    return 0;
}
