// 


#include <iostream>
using namespace std;

class buku
{
    private:
    string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; // chain function
    }

    string getJudul()
    {
        return this->judul;
    }
};

buku bukunya;

int main()
{
    // bukunya.setJudul ("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul(); // chain function calls
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

angka::~angka() { //Destructor
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

void angka :: isiData() {
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
mahasiswa() : nim(0), nama("") {} // Default constructor definition
mahasiswa(int iNim = 0);
mahasiswa(string);
mahasiswa(int, string); // Declare the constructor without default definition
void cetak();
};

mahasiswa :: mahasiswa(int iNim) {
    nim = iNim;
}

mahasiswa :: mahasiswa(string iNama) {
    nama = iNama;
}

mahasiswa :: mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void mahasiswa :: cetak() {
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
    void cetak(); // Add the cetak method declaration

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

void mahasiswa::cetak() { // Define the cetak method
    cout << " ID   = " << id << endl;
    cout << "Nama = " << nama << endl;
}
}

int main() {
    mahasiswa mhs1("Sri Dadi");
    mahasiswa mhs2("Budi Jatmiko");
    mahasiswa::setNim(9); //mengakses nim melalui static member function "setNim"
    mahasiswa mhs3("Andi Janu");
    mahasiswa mhs4("Joko Wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengakses nim melalui static member function "getNim"

    return 0;
}

