#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
    cout << "=============== Awal Program ===============" << endl << endl;
    try {
        array<int, 3> data = {10, 20, 30};
        
        cout << "Mengakses Array ke-" << 5 << ": " << endl;
        cout << data.at(5) << endl;
    } catch (exception& e) {
        cout << "Terjadi kesalahan: " << e.what() << endl;
    }
    cout << endl << "=============== Akhir Program ===============" << endl;

    return 0;
}