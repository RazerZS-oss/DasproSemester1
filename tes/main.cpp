#include <iostream>

using namespace std;

int main()
{
    //soal 1 menentukan bilangan genap ganjil

    int i;
    cout << "MAsukan ANgka: ";
    cin >> i;

    if(i == 0){
        cout << "Bilangan 0";
    }
    else if (i % 2 == 0){
        cout << "positif genap";
    }
    else if (i % 2 == 1){
        cout << "positif ganjil";
    }
    else if (i % -2 == -0){
        cout << "negatif genap";
    }
    else if (i % -2 == -1){
        cout << "negatif ganjil";
    }

    //soal 2 25-10
    /*
    for (int i = 25; i >=10; i--){
    if (i % 2 == 1)
        {
        cout << i << endl;
    }
    }
    */
    //soal 3 bilangan prima
    /*
    int bil ;
    cout << "masukkan bilangan  :   ";
    cin >> bil ;

    int jumlah_faktor = 0;
    for (int i = 1; i <= bil; i++)
    {
        if (bil % i == 0)
        {
            jumlah_faktor++;
        }
    }
    if (jumlah_faktor==2)
    {
        cout << "bilangan prima" << endl;
    }
    else {
        cout << "Bukan bilangan prima" << endl;
    }
    */
    /*
    int bil, y;
    cout << "Masukan Angka: ";
    cin >> bil;

    y = 0;
    for(int i = 1; i <= bil; i++){
        if(bil % i == 0){
            y++;
        }
    }
    if(y == 2){
        cout << "Bilangan Prima";
    }
    else{
        cout << "Bukan Bilangan Prima";
    }*/
    //soal 4 faktorial

    /*int x, y;
    cout << "masukkan angka :" ;
    cin >> x;

    y = 1;
    for (int i = 1 ; i <= x; i++){
        y = y * i;
    }
    cout << x << "! =   " << y ;
    cout << endl;
    */



    return 0;
}
