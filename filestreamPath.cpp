#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    string filePath;

    cout << "Masukkan path file: ";
    cin >> filePath;

    // membuka file dalam mode menulis
    ofstream ofs;
    ofs.open(filePath);

    return 0;
}