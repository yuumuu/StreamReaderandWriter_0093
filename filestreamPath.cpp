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

    while(true) {
        cout << "- ";
        getline(cin, line);
        if (line == "q") break;
        ofs << line << endl;
    }
    ofs.close();

    ifstream ifs;
    ifs.open(filename + ".txt", ios::in);

    if (ifs.is_open()) {
        while (getline(ifs, line)) {
            cout << line << endl;
        }
        ifs.close();
    } else cout << "Gabisa buka file karna gaada" << endl;

    return 0;
}