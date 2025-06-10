#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    string filename;

    cout << "Masukkan nama file: ";
    cin >> filename;

    // membuka file dalam mode menulis
    ofstream ofs;
    ofs.open(filename + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    return 0;
}