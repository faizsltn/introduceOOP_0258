#include <iostream>
using namespace std;

class mahasiswa{
public :
int nim;
string nama;
float nilai;

void print_data(){
    cout << "NIM = " << nim << endl;
    cout << "NAMA = " << nama << endl;
    cout << "Nilai = " << nilai << endl;
    } 
};

int main(){
    mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Faizsltn";
    mhs.nilai = 99;
  
    mhs.print_data();
}