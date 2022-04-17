#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cout << "**  Welcome To Diza Corp **" << endl;
    char choice;
    string namaperusahaan;
    string deskripsiperusahaan;
    string hapusperusahaan;
    string keterangan;
    string hapusperusahaan;
    string logoperusahaan;
    vector<string> arrayP;

    do {
        cout << " a. Nama Perusahaan" << endl;
        cout << " b. Deskripsi Perusahaan" << endl;
        cout << " c. Logo Perusahaan" << endl;
        cout << "f . Keluar" << endl;
        cin >> choice;
        if (choice == 'f') {
            printf("Menjalankan Program...");
        }
        else {
            if (choice == 'a') {
                cout << "Masukkan Nama Perusahaan: ";
                cin >> namaperusahaan;
                cout << "Masukkan Deskripsi Perusahaan :";
                cin >> deskripsiperusahaan;
                cout << "Masukkan Logo Perusahaan :";
                cin >> logoperusahaan;
                keterangan = namaperusahaan + " " + deskripsiperusahaan + " " + logoperusahaan;
                arrayP.push_back(keterangan);
                cout << "Data Telah Tersimpan" << endl;
            }
            else if (choice == 'b') {
                cout << "Please enter book number to delete: ";
                cin >> hapusperusahaan;
                for (int i = 0; i < arrayP.size(); i++) {
                    if (arrayP[i].find(hapusperusahaan) != std::string::npos) {
                        arrayP.erase(arrayP.begin() + i);
                        break;
                    }
                }
                cout << " " << endl;
                cout << "Perusahaan Berhasil Dihapus" << endl;
                cout << " " << endl;
            }
            else if (choice == 'c') {
                arrayP.clear();
                cout << "Database cleared" << endl;
                cout << " " << endl;
            }
            else if (choice == 'e') {
                cout << "Nama Perusahaan in Array " << endl;
                for (int i = 0; i < arrayP.size(); i++) {
                    cout << i << " " << arrayP[i] << " " << endl; ;

                }
                cout << " " << endl;
            }
        }
    } while (choice != 'f');

    return 0;
}