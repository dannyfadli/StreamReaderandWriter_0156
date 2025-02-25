#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    //untuk menyimpan data berbentuk string
    string baris;

    //Membuka file dalam mode menulis
    ofstream outfile;

    //menunjuk ke sebuah file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q")break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // Selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //Membaca file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    //Jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulang setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //Tutup file tersebut setelah selesai
        infile.close();

    }
    // JIka tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;



}

