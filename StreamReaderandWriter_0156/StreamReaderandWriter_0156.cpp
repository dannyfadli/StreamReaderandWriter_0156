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
    }

}

