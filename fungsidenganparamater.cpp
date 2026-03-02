// library
#include <iostream>
using namespace std;



// implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
}

int luasPersegi(int a, int b){
    return a * b;
}

int jumlah(int x, int y, int z){
    return x + y + z;
}

void output(){
    cout << "Hasilnya : " << luasPersegi(panjang, lebar) << endl;
}

int main(){ // mulai
    input();
    output();
    cout << "Hasil dari Penjumlahan : " << jumlah(3, 2, 7);
} // selesai