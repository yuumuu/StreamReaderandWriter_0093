#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    // membuka file dalam mode menulis
    ofstream ofs;
    // menunjuk ke sebuah nama file
    ofs.open("ex.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while(true) {
        cout << "- ";
        // input setiap karakter dalam satu baris
        getline(cin, line);
        // jika input 'q', maka keluar dari input baris
        if (line == "q") break;
        // menulis dan memasukkan nilai dari variabel ke dalam file
        ofs << line << endl;
    }

    return 0;
}