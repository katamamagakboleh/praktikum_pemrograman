#include <iostream>

int main() {
    int n;
     std::cout << "angka: ";
    std::cin >> n;

    int suku = 2;
    int beda = 7;
    long long jumlah = 0;
    int ganjil = 0;

    std::cout << "deret: ";
    for (int i = 0; i < n; i++) {
        if (i > 0) std::cout << " ";
        std::cout << suku;
        jumlah += suku;
        if (suku % 2 != 0) {
            ganjil++;
        }
        suku += beda;
    }
    double rata_rata = static_cast<double>(jumlah) / n;

    std::cout << "\njumlah keseluruhan: " << jumlah << ".\n";
    std::cout << "Rata-rata: " << rata_rata << ".\n";
    std::cout << "nomor ganjil: " << ganjil << ".\n";
    
    return 0;
}