#include <iostream>
using namespace std;


int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        //Throw 0.5; //Melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        //Blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...)
    {
        //jika selain integer maka block ini akan dieksekusi
        cout << "default pengcualian dieksekusi" << endl;
    }

    return 0;

}

