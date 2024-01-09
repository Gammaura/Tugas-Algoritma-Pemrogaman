/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

    double LuasPersegi (double Sisi){
    return pow(Sisi, 2);
    }
    
    double LuasPersegiPanjang (double Panjang, double Lebar){
    return Panjang * Lebar;
    }
    
    double LuasLingkaran (double JariJari){
    return pow(JariJari, 2);
    }
    
    double LuasSegitiga (double Alas, double Tinggi){
    return Alas * Tinggi / 2;
    }
    
    double VolumeKubus (double Sisi){
    return pow(Sisi, 3);
    }
    
    double VolumeBalok (double Panjang, double Lebar, double Tinggi){
    return Panjang * Lebar * Tinggi;
    }
    
    double VolumeBola (double JariJari){
    return pow(JariJari, 3);
    }
    
    double VolumeTabung (double JariJari, double Tinggi){
    return pow(JariJari, 2) * Tinggi;
    }
    
    double VolumePrismaSegitiga (double LuasAlas, double Tinggi){
    return LuasAlas * Tinggi;
    }

int main()
{
    
    while (true){
    
    string Bangun;
    
    cout << "\033[2J\033[1;1H";
    
    cout << endl;
    cout << " MADE BY GAMMAURA" << endl;
    cout << " IG : @ardityaa.id" << endl;
    
    cout << endl;
    cout << " PROGRAM PENGHITUNG LUAS DAN VOLUME" << endl << endl;
    cout << " 1. LUAS BANGUN DATAR" << endl;
    cout << " 2. VOLUME BANGUN RUANG" << endl << endl;
    
    cout << " 0. KELUAR DARI PROGRAM" << endl << endl;
    cout << " MASUKKAN PILIHAN : ";
    cin >> Bangun;
    cout << endl;
    
        if (Bangun == "1"){
            
            string BangunDatar;
    
            while (true){
                
            cout << "\033[2J\033[1;1H";
            
            cout << endl;
            cout << " PROGRAM PENGHITUNG LUAS BANGUN DATAR" << endl << endl;
            
            cout << " 1. LUAS PERSEGI" << endl;
            cout << " 2. LUAS PERSEGI PANJANG" << endl;
            cout << " 3. LUAS LINGKARAN" << endl;
            cout << " 4. LUAS SEGITIGA" << endl << endl;
            cout << " MASUKKAN PILIHAN : ";
            cin >> BangunDatar;
            
                if (BangunDatar == "1"){
        
                    double Sisi;
                    
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG LUAS PERSEGI" << endl << endl;
                    cout << " MASUKKAN PANJANG SISI PERSEGI : ";
                    cin >> Sisi;
                    cout << endl;

                    double Luas = LuasPersegi (Sisi);

                    cout << " LUAS PERSEGI DENGAN PANJANG SISI " << Sisi << " CM ADALAH " << Luas << " CM²";
                    break;
                    }
        
                else if (BangunDatar == "2"){
        
                    double Panjang;
                    double Lebar;
        
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG LUAS PERSEGI PANJANG" << endl << endl;
                    cout << " MASUKKAN PANJANG PERSEGI : ";
                    cin >> Panjang;
                    cout << endl;
        
                    cout << " MASUKKAN LEBAR PERSEGI : ";
                    cin >> Lebar;
                    cout << endl;

                    double Luas = LuasPersegiPanjang (Panjang, Lebar);

                    cout << " LUAS PERSEGI PANJANG DENGAN PANJANG " << Panjang << " CM DAN LEBAR " << Lebar << " CM ADALAH " << Luas << " CM²";
                    break;
                    }
        
                else if (BangunDatar == "3"){
    
                    int JariJari;
            
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG LUAS LINGKARAN" << endl << endl;
                    cout << " MASUKKAN JARI JARI LINGKARAN : ";
                    cin >> JariJari;
                    cout << endl;
        
                        if(JariJari % 7 == 0){
                    
                            double luas = LuasLingkaran (JariJari) * 22/7;

                            cout << " LUAS LINGKARAN DENGAN JARI JARI " << JariJari << " CM ADALAH " << luas << " CM²"; 
                            }
        
                        else if(JariJari % 7 != 0){
                            
                            double luas = LuasLingkaran (JariJari) * 3.14;

                            cout << " LUAS LINGKARAN DENGAN JARI JARI " << JariJari << " CM ADALAH " << luas << " CM²"; 
                            }
                            break;
                        }
                        
                else if (BangunDatar == "4"){
        
                    double Alas;
                    double Tinggi;
        
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG LUAS SEGITIGA" << endl << endl;
                    cout << " MASUKKAN PANJANG ALAS SEGITIGA : ";
                    cin >> Alas;
                    cout << endl;
                    
                    cout << " MASUKKAN TINGGI SEGITIGA : ";
                    cin >> Tinggi;
                    cout << endl;

                    double Luas = LuasSegitiga (Alas, Tinggi);

                    cout << " LUAS SEGITIGA DENGAN PANJANG ALAS " << Alas << " CM DAN TINGGI " << Tinggi << " CM ADALAH " << Luas << " CM²";
                    break;
                    }
                    
                else {
            
                    cout << " MAAF, PROGRAM YANG ANDA MASUKKAN TIDAK TERSEDIA" << endl << endl;
                    continue;
                }
            }
        }
        
        else if (Bangun == "2"){
        
            string BangunRuang;
    
            while (true){
            
            cout << "\033[2J\033[1;1H";
            
            cout << endl;
            cout << " PROGRAM PENGHITUNG VOLUME BANGUN RUANG" << endl << endl;
            
            cout << " 1. VOLUME KUBUS" << endl;
            cout << " 2. VOLUME BALOK" << endl;
            cout << " 3. VOLUME BOLA" << endl;
            cout << " 4. VOLUME TABUNG" << endl;
            cout << " 5. VOLUME PRISMA SEGITIGA" << endl << endl;
            cout << " MASUKKAN PILIHAN : ";
            cin >> BangunRuang;
            cout << endl;
    
                if (BangunRuang == "1"){
        
                    double Sisi;
        
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG VOLUME KUBUS" << endl << endl;
                    cout << " MASUKKAN PANJANG SISI KUBUS : ";
                    cin >> Sisi;
                    cout << endl;

                    double Volume = VolumeKubus (Sisi);

                    cout << " VOLUME KUBUS DENGAN PANJANG SISI " << Sisi << " CM ADALAH " << Volume << " CM³"; 
                    break;
                    }
        
                else if (BangunRuang == "2"){
        
                    double Panjang;
                    double Lebar;
                    double Tinggi;
        
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG VOLUME BALOK" << endl << endl;
                    cout << " MASUKKAN PANJANG BALOK : ";
                    cin >> Panjang;
                    cout << endl;
        
                    cout << " MASUKKAN LEBAR BALOK : ";
                    cin >> Lebar;
                    cout << endl;
                    
                    cout << " MASUKKAN TINGGI BALOK : ";
                    cin >> Tinggi;
                    cout << endl;

                    double Volume = VolumeBalok (Panjang, Lebar, Tinggi);

                    cout << " VOLUME BALOK DENGAN PANJANG " << Panjang << " CM, LEBAR " << Lebar << " CM, DAN TINGGI " << Tinggi << " CM ADALAH " << Volume << " CM³";
                    break;
                    }
        
                else if (BangunRuang == "3"){
    
                    int JariJari;
            
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG VOLUME BOLA" << endl << endl;
                    cout << " MASUKKAN JARI JARI LINGKARAN : ";
                    cin >> JariJari;
                    cout << endl;
        
                        if(JariJari % 7 == 0){
                    
                            double Volume = VolumeBola (JariJari) * 4/3 * 22/7;

                            cout << " VOLUME BOLA DENGAN JARI JARI " << JariJari << " CM ADALAH " << Volume << " CM³"; 
                            }
        
                        else if(JariJari % 7 != 0){
                            
                            double Volume = VolumeBola (JariJari) * 4/3 * 3.14;

                            cout << " VOLUME BOLA DENGAN JARI JARI " << JariJari << " CM ADALAH " << Volume << " CM³"; 
                            }
                            break;
                    }
                    
                else if (BangunRuang == "4"){
        
                    int JariJari;
                    double Tinggi;
        
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG VOLUME TABUNG" << endl << endl;
                    cout << " MASUKKAN JARI JARI TABUNG : ";
                    cin >> JariJari;
                    cout << endl;
        
                    cout << " MASUKKAN TINGGI TABUNG : ";
                    cin >> Tinggi;
                    cout << endl;

                        if(JariJari % 7 == 0){
                    
                            double Volume = VolumeTabung (JariJari, Tinggi) * 22/7;

                            cout << " VOLUME TABUNG DENGAN JARI JARI " << JariJari << " CM DAN TINGGI " << Tinggi << " CM ADALAH " << Volume << " CM³"; 
                            }
        
                        else if(JariJari % 7 != 0){
                            
                            double Volume = VolumeTabung (JariJari, Tinggi) * 3.14;

                            cout << " VOLUME TABUNG DENGAN JARI JARI " << JariJari << " CM DAN TINGGI " << Tinggi << " CM ADALAH " << Volume << " CM³"; 
                            }
                            break;
                    }
                    
                else if (BangunRuang == "5"){
        
                    double PanjangAlas;
                    double TinggiAlas;
                    double TinggiPrisma;
                    double LuasAlas;
        
                    cout << "\033[2J\033[1;1H";
            
                    cout << endl;
                    cout << " PROGRAM PENGHITUNG VOLUME PRISMA SEGITIGA" << endl << endl;
                    cout << " MASUKKAN PANJANG ALAS SEGITIGA : ";
                    cin >> PanjangAlas;
                    cout << endl;
        
                    cout << " MASUKKAN TINGGI ALAS SEGITIGA : ";
                    cin >> TinggiAlas;
                    cout << endl;
                    
                    cout << " MASUKKAN TINGGI PRISMA SEGITIGA : ";
                    cin >> TinggiPrisma;
                    cout << endl;
                    
                    LuasAlas = PanjangAlas * TinggiAlas / 2;

                    double Volume = VolumePrismaSegitiga (LuasAlas, TinggiPrisma);

                    cout << " VOLUME PRISMA SEGITIGA DENGAN PANJANG ALAS " << PanjangAlas << " CM, TINGGI ALAS " << TinggiAlas << " CM, DAN TINGGI PRISMA " << TinggiPrisma << " CM ADALAH " << Volume << " CM³";
                    break;
                    }
                    
                else {
                    cout << " MAAF, PROGRAM YANG ANDA MASUKKAN TIDAK TERSEDIA" << endl << endl;
                    continue;
                }
            }
        }
        
        else if(Bangun == "0"){
            
            break;
            
        }
        
        else {
            
            cout << " MAAF, PROGRAM YANG ANDA MASUKKAN TIDAK TERSEDIA" << endl << endl;
            continue;
        }
        
    cout << endl << endl;
       
    string Next;
    
    cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
    cin >> Next;
        
    }
    
    return 0;
}

