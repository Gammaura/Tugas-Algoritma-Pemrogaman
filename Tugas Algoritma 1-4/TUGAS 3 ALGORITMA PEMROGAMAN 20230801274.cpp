/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Ekonomi = 100000;
    int Bisnis = 200000;
    int Eksekutif = 300000;
    
    int Total;
    
    string Home;
    string Kembali;
    string Nama;
    
    int JenisTiket;
    int Jumlah;
    int Harga;
    int Diskon;
    
    string Lain;
    
    while(true){
        
        cout << "\033[2J\033[1;1H";
    
        cout << endl;
        cout << " MADE BY GAMMAURA" << endl;
        cout << " IG : @ardityaa.id" << endl;

        cout << endl;
        cout << " ==========================================" << endl;
        cout << " ||  SELAMAT DATANG DI STASIUN GAMMAURA  ||" << endl;
        cout << " ==========================================" << endl;
        cout << " || 1. MENAMPILKAN DAFTAR TIKET          ||" << endl;
        cout << " || 2. MENAMPILKAN JADWAL KEBERANGKATAN  ||" << endl;
        cout << " || 3. PEMESANAN TIKET SECARA ONLINE     ||" << endl;
        cout << " ||                                      ||" << endl;
        cout << " || 0. KELUAR DARI PROGRAM               ||" << endl;
        cout << " ==========================================" << endl;
        cout << " ||    TANGERANG     |     YOGYAKARTA    ||" << endl;
        cout << " ==========================================" << endl;
    
        cout << endl;
        cout << " MASUKKAN PILIHAN : ";
        cin >> Home;
    
            if (Home == "1"){
        
                cout << "\033[2J\033[1;1H";
        
                cout << endl;
                cout << " ==================================================" << endl;
                cout << " ||     DAFTAR TIKET KERETA STASIUN GAMMAURA     ||" << endl;
                cout << " ==================================================" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  1. EKONOMI (RP 100.000)                     ||" << endl;
                cout << " ||  2. BISNIS (RP 200.000)                      ||" << endl;
                cout << " ||  3. EKSEKUTIF (RP 300.000)                   ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  PROMO :                                     ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  DISKON 10% :                                ||" << endl;
                cout << " ||  UNTUK PEMBELIAN MINIMAL RP 1.000.000        ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  DISKON 5% :                                 ||" << endl;
                cout << " ||  UNTUK PEMBELIAN MINIMAL RP 500.000          ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  DISKON 2% :                                 ||" << endl;
                cout << " ||  UNTUK PEMBELIAN MINIMAL RP 250.000          ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ==================================================" << endl;
        
                cout << endl;
                cout << " KETIK APA SAJA UNTUK KEMBALI : ";
                cin >> Kembali;
                continue;

            }
    
            else if(Home == "2"){
        
                cout << "\033[2J\033[1;1H";
        
                cout << endl;
                cout << " ==================================================" << endl;
                cout << " ||        JADWAL KERETA STASIUN GAMMAURA        ||" << endl;
                cout << " ==================================================" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  KELAS EKONOMI :                             ||" << endl;
                cout << " ||  G-1010 = 06.00 WIB, TIBA 12.00 WIB          ||" << endl;
                cout << " ||  G-1011 = 09.00 WIB, TIBA 15.00 WIB          ||" << endl;
                cout << " ||  G-1012 = 12.00 WIB, TIBA 18.00 WIB          ||" << endl;
                cout << " ||  G-1013 = 15.00 WIB, TIBA 21.00 WIB          ||" << endl;
                cout << " ||  G-1014 = 18.00 WIB, TIBA 24.00 WIB          ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  KELAS BISNIS :                              ||" << endl;
                cout << " ||  G-2010 = 07.00 WIB, TIBA 13.00 WIB          ||" << endl;
                cout << " ||  G-2011 = 10.00 WIB, TIBA 16.00 WIB          ||" << endl;
                cout << " ||  G-2012 = 13.00 WIB, TIBA 19.00 WIB          ||" << endl;
                cout << " ||  G-2013 = 16.00 WIB, TIBA 22.00 WIB          ||" << endl;
                cout << " ||  G-2014 = 19.00 WIB, TIBA 01.00 WIB          ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ||  KELAS EKSEKUTIF :                           ||" << endl;
                cout << " ||  G-3010 = 08.00 WIB, TIBA 14.00 WIB          ||" << endl;
                cout << " ||  G-3011 = 11.00 WIB, TIBA 17.00 WIB          ||" << endl;
                cout << " ||  G-3012 = 14.00 WIB, TIBA 20.00 WIB          ||" << endl;
                cout << " ||  G-3013 = 17.00 WIB, TIBA 23.00 WIB          ||" << endl;
                cout << " ||  G-3014 = 20.00 WIB, TIBA 02.00 WIB          ||" << endl;
                cout << " ||                                              ||" << endl;
                cout << " ==================================================" << endl;
        
                cout << endl;
                cout << " KETIK APA SAJA UNTUK KEMBALI : ";
                cin >> Kembali;
                continue;
        
        
            }
    
            else if(Home == "3"){
        
                cout << "\033[2J\033[1;1H";
        
                cout << endl;
                cout << " PEMESANAN TIKET ONLINE STASIUN GAMMAURA" << endl << endl;
        
                cout << " ==================================" << endl;
                cout << " ||                              ||" << endl;
                cout << " ||  1. EKONOMI (RP 100.000)     ||" << endl;
                cout << " ||  2. BISNIS (RP 200.000)      ||" << endl;
                cout << " ||  3. EKSEKUTIF (RP 300.000)   ||" << endl;
                cout << " ||                              ||" << endl;
                cout << " ==================================" << endl;
        
                cout << " MASUKKAN NAMA PEMESAN : ";
                cin >> Nama;
        
                cout << " MASUKKAN KODE TIKET (1/2/3) : ";
                cin >>  JenisTiket;
                cout << endl;
    
                cout << " MASUKKAN JUMLAH TIKET : ";
                cin >> Jumlah;
                cout << endl;
    
                    switch (JenisTiket) {
        
                        case 1 :
                        Total = Ekonomi * Jumlah;
                        break;
        
                        case 2 :
                        Total = Bisnis * Jumlah;
                        break;
        
                        case 3 :
                        Total = Eksekutif * Jumlah;
                        break;
        
                    }
                
                cout << " PESANAN ATAS NAMA : " << Nama << endl;
                cout << " ANDA MEMESAN : ";
                cout << Jumlah << " TIKET " << JenisTiket << endl;
                cout << " DENGAN TOTAL HARGA RP. " << Total << endl;
    
                if(Total >= 500000){
                Diskon = Total * 90 / 100;
                cout << " ANDA MENDAPAT DISKON SEBESAR 10%, ANDA HANYA PERLU MEMBAYAR SEBESAR RP. " << Diskon;
                }
    
                else if(Total >= 300000){
                Diskon = Total * 95 / 100;
                cout << " ANDA MENDAPAT DISKON SEBESAR 5%, ANDA HANYA PERLU MEMBAYAR SEBESAR RP. " << Diskon;
                }
    
                else if(Total >= 200000){
                Diskon = Total * 98 / 100;
                cout << " ANDA MENDAPAT DISKON SEBESAR 2%, ANDA HANYA PERLU MEMBAYAR SEBESAR RP. " << Diskon;
                }
        
                cout << endl;
                cout << " KETIK APA SAJA UNTUK KEMBALI : ";
                cin >> Kembali;
                continue;
            }
    
            else if(Home == "0"){
            break;
        
            }
    
            else{
            continue;
            }
    
    }

    return 0;
}
