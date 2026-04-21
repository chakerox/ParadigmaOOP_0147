#include<iostream>
using namespace std;

class Mahasiswa{//blue print untuk membuat objek mahasiswa
    public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};// batas kelas

int main(){
    Mahasiswa mhs1;
    mhs1.nim = 12345;
    mhs1.nama = "Budi";
    mhs1.nilai = 85.5;

    mhs1.printData();
    return 0;
}