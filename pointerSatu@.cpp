#include <iostream>
using namespace std;

class mahasiswa 
{
public :
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim <<endl;
    }
};

int main() 
{
    mahasiswa mhs; //object mhs
    mhs.nim = 2024;
    mhs.showNim(); //akses member

    mahasiswa &refMhs = mhs; //pointer reference refMhs
    refMhs.nim = 2; //akses member
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointerr dereferece pMhs
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
    return 0;  

};