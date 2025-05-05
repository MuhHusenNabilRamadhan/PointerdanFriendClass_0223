#include <iostream>
using namespace std;

int main()
 {   //deference
    int a = 10;
    int b = 6;
    int y = 20; 
    int *c = &a; //aristik c 
    cout << "Alamat memori  : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;
    c = &y;
    cout << "Alamat memori : " << c << endl; //menampilkan lokasi memo
    cout << " Nilai dari C : " << *c << endl;

    //reference 
    int &d = b;
    cout << "Nilai" << d << endl;
    cout << "reference" << &d << endl;

    int f = 5;
    int g = f;
 };
