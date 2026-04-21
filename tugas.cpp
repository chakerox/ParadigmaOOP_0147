#include<iostream>
using namespace std;

class barang{
    public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;


    void tampilan(){
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah Barang : " << jumlah << endl;
        cout << "Kategori Barang : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};// batas kelas

int main(){ 
    barang elektronik;
    barang nonelektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2001-01-20";
    elektronik.tampilan();

    cout << endl;

    nonelektronik.nama = "Meja";
    nonelektronik.jumlah = 5;
    nonelektronik.kategori = "Non Elektronik";
    nonelektronik.tanggalProduksi = "2015-02-24";
    nonelektronik.tampilan();
    return 0;
}