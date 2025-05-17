// 
#include <stdio.h>

int main() {
    int number, i;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    for(i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

class angka {
private:
    int *arr;
    int panjang;

public:
    angka(int); //Constructor
    angka(); //Destructor
    void cetakData();
    void isiData();
};

//Definisi member Functon
angka::angka(int i) { //Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::angka() { //Destructor
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = "; cin >> arr[i];
    }
    cout << endl;
}

int main() {
    angka belajarcpp(3); //Constructor Dipanggil
    angka  *ptrBelajarcpp = new angka(5); //Constructor Dipanggil
    delete ptrBelajarcpp; //Destructor Dipanggil
    return 0;
    //Destructor Dipanggil
}

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa() {
    nim = 0;
    nama = "";
}

mahasiswa::mahasiswa(int iNim) {
    nim = iNim;
}

mahasiswa::mahasiswa(string iNama) {
    nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << endl << "Nim  = " << nim << endl;
    cout << " Nama = " << nama << endl;
}

int main() {
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Indra");
    mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ }
    static int getNim() { return nim; } /*Definisi Function*/

    mahasiswa(string pnama) : nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
    id = ++nim;
}

void mahasiswa::printAll() {
    cout << " ID   = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

