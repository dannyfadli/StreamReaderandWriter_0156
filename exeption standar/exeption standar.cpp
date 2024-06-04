#include <iostream>
#include <exception>
//Untuk obyek exeption yang akan digunakan
#include <array>
//untuk obyek array yag akan digunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda 1.
    try
    {
        array<int, 3> data = { 1,2,3 };
        //Pesan array integer 3 elemen
        //cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e)
    {
        //Penangkap menggunakan objek exeption
        cout << e.what() << endl;
        //Akan dieksekusi karna array data hanya memiliki 3 array

    }
    cout << "Baris Program yang terakhir" << endl;
    //penanda 2:Bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan
    return 0;
}

