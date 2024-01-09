/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int BilanganPertama;
    int BilanganTerakhir;
    
    string Pilihan;
    string Next;
    
    while(true){
        
    cout << "\033[2J\033[1;1H";
        
    cout << endl;
    cout << " MADE BY GAMMAURA" << endl;
    cout << " IG : @ardityaa.id" << endl;
    
    cout << endl;
    cout << " 1. SORTIR BILANGAN GANJIL" << endl;
    cout << " 2. SORTIR BILANGAN GENAP" << endl;
    
    cout << endl;
    cout << " 0. KELUAR DARI PROGRAM" << endl;
    
    cout << endl;
    cout << " MASUKKAN PILIHAN : ";
    cin >> Pilihan;
    
        if(Pilihan == "1"){
            
            cout << "\033[2J\033[1;1H";
            
            cout << endl;
            cout << " MASUKKAN BILANGAN PERTAMA : ";
            cin >> BilanganPertama;
    
            cout << endl;
            cout << " MASUKKAN BILANGAN TERAKHIR : ";
            cin >> BilanganTerakhir;
    
            cout << endl;
            cout << " BILANGAN GANJIL DARI " << BilanganPertama << " - " << BilanganTerakhir << " ADALAH : " << endl << endl;
            for (int i=BilanganPertama; i<=BilanganTerakhir; i++){
            if (i % 2 != 0){
            cout << " " << i;  
            }
        
            }
            
            cout << endl << endl;
            cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
            cin >> Next;
            
            continue;
    
        }
        
        else if(Pilihan == "2"){
            
            cout << "\033[2J\033[1;1H";
            
            cout << endl;
            cout << " MASUKKAN BILANGAN PERTAMA : ";
            cin >> BilanganPertama;
    
            cout << endl;
            cout << " MASUKKAN BILANGAN TERAKHIR : ";
            cin >> BilanganTerakhir;
    
            cout << endl;
            cout << " BILANGAN GENAP DARI " << BilanganPertama << " - " << BilanganTerakhir << " ADALAH : " << endl << endl;
            for (int i=BilanganPertama; i<=BilanganTerakhir; i++){
            if (i % 2 == 0){
            cout << " " << i;
            }
    
            }
            
            cout << endl << endl;
            cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
            cin >> Next;
            
            continue;
    
        }
        
        else if(Pilihan == "0"){
            
            break;
        }
        
        else{
            
            continue;
            
        }
    
    }

    return 0;
}
