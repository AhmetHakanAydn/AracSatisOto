#include <iostream>
#include <string>
using namespace std;

// 1. 'otomobil' ad�nda bir struct tan�ml�yoruz
struct otomobil {
    string marka;
    string model;
    int yil;
    char yakit;     // 'B' (Benzin), 'D' (Dizel), 'G' (Gaz-LPG), 'H' (Hibrit) gibi
    double km;
    double fiyat;
};

int main() {
    // otomobil yap�s�ndan 3 adet de�i�ken tan�ml�yoruz
    otomobil binek, suv, ticari;

    // Binek ara� bilgilerini alal�m
    cout << "Binek ara� bilgilerini giriniz:\n";
    cout << "Marka: ";
    cin >> binek.marka;
    cout << "Model: ";
    cin >> binek.model;
    cout << "Y�l: ";
    cin >> binek.yil;
    cout << "Yak�t Tipi (B, D, G, H): ";
    cin >> binek.yakit;
    cout << "Kilometre (km): ";
    cin >> binek.km;
    cout << "Fiyat: ";
    cin >> binek.fiyat;
    cout << endl;

    // SUV ara� bilgilerini alal�m
    cout << "SUV ara� bilgilerini giriniz:\n";
    cout << "Marka: ";
    cin >> suv.marka;
    cout << "Model: ";
    cin >> suv.model;
    cout << "Y�l: ";
    cin >> suv.yil;
    cout << "Yak�t Tipi (B, D, G, H): ";
    cin >> suv.yakit;
    cout << "Kilometre (km): ";
    cin >> suv.km;
    cout << "Fiyat: ";
    cin >> suv.fiyat;
    cout << endl;

    // Ticari ara� bilgilerini alal�m
    cout << "Ticari ara� bilgilerini giriniz:\n";
    cout << "Marka: ";
    cin >> ticari.marka;
    cout << "Model: ";
    cin >> ticari.model;
    cout << "Y�l: ";
    cin >> ticari.yil;
    cout << "Yak�t Tipi (B, D, G, H): ";
    cin >> ticari.yakit;
    cout << "Kilometre (km): ";
    cin >> ticari.km;
    cout << "Fiyat: ";
    cin >> ticari.fiyat;
    cout << endl;

    // Girilen verileri ekrana yazd�ral�m
    cout << "===== GIRILEN BILGILERIN LISTESI =====" << endl;

    cout << "\n[ Binek Arac ]" << endl;
    cout << "Marka : " << binek.marka << endl;
    cout << "Model : " << binek.model << endl;
    cout << "Y�l   : " << binek.yil << endl;
    cout << "Yak�t : " << binek.yakit << endl;
    cout << "KM    : " << binek.km << endl;
    cout << "Fiyat : " << binek.fiyat << endl;

    cout << "\n[ SUV Arac ]" << endl;
    cout << "Marka : " << suv.marka << endl;
    cout << "Model : " << suv.model << endl;
    cout << "Y�l   : " << suv.yil << endl;
    cout << "Yak�t : " << suv.yakit << endl;
    cout << "KM    : " << suv.km << endl;
    cout << "Fiyat : " << suv.fiyat << endl;

    cout << "\n[ Ticari Arac ]" << endl;
    cout << "Marka : " << ticari.marka << endl;
    cout << "Model : " << ticari.model << endl;
    cout << "Y�l   : " << ticari.yil << endl;
    cout << "Yak�t : " << ticari.yakit << endl;
    cout << "KM    : " << ticari.km << endl;
    cout << "Fiyat : " << ticari.fiyat << endl;

    return 0;
}

