#include <iostream>
#include <string>
using namespace std;

// 1. 'otomobil' adýnda bir struct tanýmlýyoruz
struct otomobil {
    string marka;
    string model;
    int yil;
    char yakit;     // 'B' (Benzin), 'D' (Dizel), 'G' (Gaz-LPG), 'H' (Hibrit) gibi
    double km;
    double fiyat;
};

int main() {
    // otomobil yapýsýndan 3 adet deðiþken tanýmlýyoruz
    otomobil binek, suv, ticari;

    // Binek araç bilgilerini alalým
    cout << "Binek araç bilgilerini giriniz:\n";
    cout << "Marka: ";
    cin >> binek.marka;
    cout << "Model: ";
    cin >> binek.model;
    cout << "Yýl: ";
    cin >> binek.yil;
    cout << "Yakýt Tipi (B, D, G, H): ";
    cin >> binek.yakit;
    cout << "Kilometre (km): ";
    cin >> binek.km;
    cout << "Fiyat: ";
    cin >> binek.fiyat;
    cout << endl;

    // SUV araç bilgilerini alalým
    cout << "SUV araç bilgilerini giriniz:\n";
    cout << "Marka: ";
    cin >> suv.marka;
    cout << "Model: ";
    cin >> suv.model;
    cout << "Yýl: ";
    cin >> suv.yil;
    cout << "Yakýt Tipi (B, D, G, H): ";
    cin >> suv.yakit;
    cout << "Kilometre (km): ";
    cin >> suv.km;
    cout << "Fiyat: ";
    cin >> suv.fiyat;
    cout << endl;

    // Ticari araç bilgilerini alalým
    cout << "Ticari araç bilgilerini giriniz:\n";
    cout << "Marka: ";
    cin >> ticari.marka;
    cout << "Model: ";
    cin >> ticari.model;
    cout << "Yýl: ";
    cin >> ticari.yil;
    cout << "Yakýt Tipi (B, D, G, H): ";
    cin >> ticari.yakit;
    cout << "Kilometre (km): ";
    cin >> ticari.km;
    cout << "Fiyat: ";
    cin >> ticari.fiyat;
    cout << endl;

    // Girilen verileri ekrana yazdýralým
    cout << "===== GIRILEN BILGILERIN LISTESI =====" << endl;

    cout << "\n[ Binek Arac ]" << endl;
    cout << "Marka : " << binek.marka << endl;
    cout << "Model : " << binek.model << endl;
    cout << "Yýl   : " << binek.yil << endl;
    cout << "Yakýt : " << binek.yakit << endl;
    cout << "KM    : " << binek.km << endl;
    cout << "Fiyat : " << binek.fiyat << endl;

    cout << "\n[ SUV Arac ]" << endl;
    cout << "Marka : " << suv.marka << endl;
    cout << "Model : " << suv.model << endl;
    cout << "Yýl   : " << suv.yil << endl;
    cout << "Yakýt : " << suv.yakit << endl;
    cout << "KM    : " << suv.km << endl;
    cout << "Fiyat : " << suv.fiyat << endl;

    cout << "\n[ Ticari Arac ]" << endl;
    cout << "Marka : " << ticari.marka << endl;
    cout << "Model : " << ticari.model << endl;
    cout << "Yýl   : " << ticari.yil << endl;
    cout << "Yakýt : " << ticari.yakit << endl;
    cout << "KM    : " << ticari.km << endl;
    cout << "Fiyat : " << ticari.fiyat << endl;

    return 0;
}

