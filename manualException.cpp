#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 10;
        cout << "Baris ini tidak akan dieksekusi" << endl;
    } catch (int a) {
        // blok ini akan dieksekusi jika exception bertipe int
        cout << "Terjadi kesalahan: Baris ini dieksekusi" << endl;
        cout << "-> Exception (throw) bertipe int" << endl;
    } catch (...) {
        // blok ini akan dieksekusi jika exception bertipe selain int
        cout << "Terjadi kesalahan: Baris ini dieksekusi" << endl;
        cout << "-> Exception (throw) bertipe selain int" << endl;
    }

    return 0;
}