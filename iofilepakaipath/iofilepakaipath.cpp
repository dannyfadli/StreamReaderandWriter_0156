#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukan Nama file : ";
    cin >> NamaFile;

    //Membuka file dalam mode menulis.
    ofstream outfile;
    //Menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //Unlimeted loop untuk menulis
    while (true)
    {
        cout << "-";
        //Mendapatkan setiap karakter dalam satu baris  
        getline(cin, baris);
        //Loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //Menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //Selesai dalam menulis sekarang tutup file
    outfile.close();

    //Membaca file dalam mode membaca
    ifstream infile;
    // Menunjuk ke sebuah file
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampikan disisni
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();

    }
    //JIka file tidak ditemukan maka tamoilkan ini
    else cout << "Unable to open file";
    return 0;
}

