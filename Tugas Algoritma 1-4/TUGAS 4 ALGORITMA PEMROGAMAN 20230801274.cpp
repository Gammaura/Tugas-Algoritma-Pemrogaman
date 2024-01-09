/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <chrono>
#include <thread>

#define Red ("\033[1;31m")
#define Clear ("\033[0m")

using namespace std;

int main()
{
    
    string Home;
    string Back;
    string Next;
    
    string Play;
    string Bantuan;
    string Level;
    
    string Karakter;
    string Kemampuan;
    string Game;
    string Ulti;
    
    int Obat = 5;
    int Ultimate = 3;
    int Gold = 2000;
    
    int HP = 1200;
    int Attack;
    int Attack1;
    double Penetration;
    int Energi = 120;
                    
    int HPZombie;
    int AttackZombie;
    int EnergiZombie;
    int Jumlah;
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              ___                            " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              ______                         " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              _________                      " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              ____________                   " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              _______________                " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              ____________________           " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              __________________________     " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                    MEMPERSIAPKAN GAME       " << endl;
    cout << "                                                              ============================== " << endl;
    cout << "                                                              ______________________________ " << endl;
    cout << "                                                              ============================== " << endl;
    this_thread::sleep_for(chrono::seconds(4));
    
    cout << "\033[2J\033[1;1H";
    
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << "                                                                                                                       " << endl;
    cout << Red;
    cout << "                                                 PPPPPPP   RRRRRRR   IIIIII  NN    NN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                 PPP  PPP  RR   RRR    II    NNN   NN  CC        EE                    " << endl;
    cout << "                                                 PPPPPPP   RRRRRR      II    NN N  NN  CC        EEEEEEEE              " << endl;
    cout << "                                                 PPP       RR   RR     II    NN  N NN  CC        EE                    " << endl;
    cout << "                                                 PPP       RR    RR  IIIIII  NN   NNN   CCCCCCC  EEEEEEEE              " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                       GGGGGGG   AAAAAA   MM    MM  MM    MM   AAAAAA   UU    UU  RRRRRRR    AAAAAA    " << endl;
    cout << "                                      GGG       AA    AA  MMM  MMM  MMM  MMM  AA    AA  UU    UU  RR   RRR  AA    AA   " << endl;
    cout << "                                      GG   GGG  AAAAAAAA  MM MM MM  MM MM MM  AAAAAAAA  UU    UU  RRRRRR    AAAAAAAA   " << endl;
    cout << "                                      GGG   GG  AA    AA  MM    MM  MM    MM  AA    AA  UU    UU  RR   RR   AA    AA   " << endl;
    cout << "                                       GGGGGGG  AA    AA  MM    MM  MM    MM  AA    AA   UUUUUU   RR    RR  AA    AA   " << endl;
    cout << Clear;
    cout << "                                                                                                                       " << endl;
    cout << "                                      ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||  ||==||   " << endl;
    cout << Red;
    cout << "                                    ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
    cout << Clear;
    cout << "                                      ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||   " << endl;
    cout << "                                            ||==||                          ||                          ||==||         " << endl;
    cout << "                                          ||==||==||                      ||==||                      ||==||==||       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                                                                                       " << endl;
    cout << "                                                           KETIK APA SAJA UNTUK MEMULAI GAME : ";
    cin >> Next;
    cout << "\033[2J\033[1;1H";
    
    for (int Time = 5; Time >= 1; --Time) {
    
    cout << endl << endl;    
    cout << "  GAME AKAN DIMULAI DALAM " << Time << endl;
    cout << "  MOHON MENUNGGU, SANG PANGERAN AKAN DATANG MENYELAMATKANMU " << "... " << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\033[2J\033[1;1H";
    }
    
    while(true){
        
        cout << "\033[2J\033[1;1H";

        cout << endl << endl;
        cout << Red;
        cout << "  ==||==||==||==||==||==||==||==||==" << endl;
        cout << Clear;
        cout << "  ||==||==||==||==||==||==||==||==||" << endl;
        cout << "  ==                              ==" << endl;
        cout << "  ||  1. MULAI GAME               ||" << endl;
        cout << "  ==  2. MUAT ULANG GAME          ==" << endl;
        cout << "  ||  3. CARA BERMAIN             ||" << endl;
        cout << "  ==  4. PENGATURAN               ==" << endl;
        cout << "  ||  5. KELUAR GAME              ||" << endl;
        cout << "  ==                              ==" << endl;
        cout << "  ||==||==||==||==||==||==||==||==||" << endl;
        cout << Red;
        cout << "  ==||==||==||==||==||==||==||==||==" << endl;
        cout << Clear;
        
        
        cout << endl << endl;
        cout << "  MASUKKAN PILIHAN : ";
        cin >> Home;
        
            if(Home == "1"){
                
                cout << "\033[2J\033[1;1H";
                
                cout << endl << endl;
                
                cout << "  ||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
                cout << "  ==                                                      == " << endl;
                cout << "  ||  PROLOG :                                            || " << endl;
                cout << "  ==                                                      == " << endl;
                cout << "  ||  DI SUATU KERAJAAN, HIDUPLAH SEORANG PUTRI BERNAMA   || " << endl;
                cout << "  ==  AURORA, AYAH DAN IBU NYA TELAH LAMA TIADA AKIBAT    == " << endl;
                cout << "  ||  PEPERANGAN YANG TERJADI SEBELUMNYA, SEKARANG AURORA || " << endl;
                cout << "  ==  MENJADI RATU DIKERAJAAN TERSEBUT UNTUK MENGGANTIKAN == " << endl;
                cout << "  ||  AYAHNYA, AURORA TERKENAL DENGAN KEBAIKAN SERTA      || " << endl;
                cout << "  ==  KECANTIKANNYA. SETIAP HARI IA SELALU MEMBERIKAN     == " << endl;
                cout << "  ||  MAKANAN GRATIS KEPADA RAKYATNYA, TAK LUPA JUGA IA   || " << endl;
                cout << "  ==  SELALU BERKUNJUNG KE MAKAM KEDUA ORANG TUANYA UNTUK == " << endl;
                cout << "  ||  BERCERITA TENTANG KESEHARIANNYA.                    || " << endl;
                cout << "  ==                                                      == " << endl;
                cout << "  ||  PADA SUATU HARI, DATANG SEORANG PANGERAN DARI       || " << endl;
                cout << "  ==  KERAJAAN SAHABAT AYAHNYA DULU, PANGERAN TERSEBUT    == " << endl;
                cout << "  ||  BERNAMA GAMMAURA, PUTRA MAHKOTA YANG DIKENAL AKAN   || " << endl;
                cout << "  ==  KEKUATAN DAN KEBERANIANNYA MENGHADAPI MUSUH. IA     == " << endl;
                cout << "  ||  DATANG UNTUK MEMBANTU RATU AURORA MELAWAN KEKUATAN  || " << endl;
                cout << "  ==  JAHAT YANG SELALU MENEROR KERAJAANNYA, SETIBANYA    == " << endl;
                cout << "  ||  DISANA KEADAAN DI SEKITAR KERAJAAN SUDAH MENJADI    || " << endl;
                cout << "  ==  HANCUR AKIBAT SEBUAH PERANG, SANG RATU JUGA TIDAK   == " << endl;
                cout << "  ||  ADA DI KERAJAAN.                                    || " << endl;
                cout << "  ==                                                      == " << endl;
                cout << "  ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||" << endl;
                
                cout << endl;
                cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                cin >> Next;
                
                while(true){
                    
                cout << "\033[2J\033[1;1H";
                
                cout << endl << endl;
                cout << "  PERSIAPKAN DIRIMU UNTUK MENYELAMATKAN" << endl;
                cout << "  SANG RATU, GAMMAURA..." << endl;
            
                cout << endl << endl;
                
                cout << "  ||==||==||==||==||==||==||==||==||==|| " << endl;
                cout << "  ==          ==          ==          == " << endl;
                cout << "  ||    " << Red << "/~" << Clear << "    ||     " << Red << "^" << Clear << "    ||    " << Red << "/~" << Clear << "    || " << endl;
                cout << "  ==    " << Red << "||" << Clear << "    ==     " << Red << "|" << Clear << "    ==    " << Red << "||" << Clear << "    == " << endl;
                cout << "  ||    " << Red << "||" << Clear << "    ||     " << Red << "|" << Clear << "    ||    " << Red << " |" << Clear << "    || " << endl;
                cout << "  ==    " << Red << "||" << Clear << "    ==    " << Red << ":|:" << Clear << "   ==    " << Red << " |" << Clear << "    == " << endl;
                cout << "  ||    " << Red << "||" << Clear << "    ||     " << Red << "|" << Clear << "    ||    " << Red << " |" << Clear << "    || " << endl;
                cout << "  ==   " << Red << "<==>" << Clear << "   ==     " << Red << "|" << Clear << "    ==    " << Red << "==" << Clear << "    == " << endl;
                cout << "  ||    " << Red << "||" << Clear << "    ||    " << Red << "{|}" << Clear << "   ||    " << Red << " |" << Clear << "    || " << endl;
                cout << "  ==    " << Red << "==" << Clear << "    ==     " << Red << "W" << Clear << "    ==    " << Red << "{=" << Clear << "    == " << endl;
                cout << "  ||          ||          ||          || " << endl;
                cout << "  ==    >1    ==    >2    ==    >3    == " << endl;
                cout << "  ||  PEDANG  ||   PANAH  ||  TOMBAK  || " << endl;
                cout << "  == DMG +150 == DMG +160 == DMG +170 == " << endl;
                cout << "  ||==||==||==||==||==||==||==||==||==|| " << endl;
                
                cout << endl;
                cout << "  PILIH SENJATA UTAMA : ";
                cin >> Karakter;
                
                    if(Karakter == "1"){
                        Kemampuan = "PEDANG";
                        Attack = 150;
                        Penetration = 0.1;
                        
                    }
                    
                    else if(Karakter == "2"){
                        Kemampuan = "PANAH";
                        Attack = 160;
                        Penetration = 0.1;
                        
                    }
                    
                    else if(Karakter == "3"){
                        Kemampuan = "TOMBAK";
                        Attack = 170;
                        Penetration = 0.1;
                    
                    }
                    
                    else{
                    continue;
                    }
                    
                    cout << endl;
                    cout << "  KAMU MEMILIH " << Kemampuan << endl;
                    cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                    cin >> Next;
                    
                    break;
                }
                
                while(true){
                    
                cout << "\033[2J\033[1;1H";
                
                cout << endl << endl;
                cout << "  1. " << Kemampuan << " API" << endl;
                cout << "  2. " << Kemampuan << " PETIR" << endl;
                cout << "  3. " << Kemampuan << " LAVA" << endl;
                
                cout << endl;
                cout << "  PILIH ULTIMATE : ";
                cin >> Karakter;
                
                    if(Karakter == "1"){
                        Ulti = "API";
                        Attack1 = 1000;
                    }
                    
                    else if(Karakter == "2"){
                        Ulti = "PETIR";
                        Attack1 = 1100;
                    }
                    
                    else if(Karakter == "3"){
                        Ulti = "LAVA";
                        Attack1 = 1200;
                    }
                    
                    else{
                    continue;
                    }
                    
                    cout << endl;
                    cout << "  KAMU MEMILIH " << Kemampuan << " " << Ulti << endl;
                    cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                    cin >> Next;
                    
                    break;
                }
                
                    while(true){
                
                        cout << "\033[2J\033[1;1H";
    
                        cout << endl;
                        cout << "  ==================================" << endl;
                        cout << "  ||        PRINCE GAMMAURA       ||" << endl;
                        cout << "  ==================================" << endl;
                        cout << "  || 1. SERANG MUSUH              ||" << endl;
                        cout << "  || 2. UPGRADE LEVEL SENJATA     ||" << endl;
                        cout << "  || 3. UPGRADE KEKUATAN SKILL    ||" << endl;
                        cout << "  || 4. KELUAR GAME               ||" << endl;
                        cout << "  ==================================" << endl;
                        
                        cout << endl;
                        cout << "  STATS MU SAAT INI : " << endl;
                        
                        cout << endl;
                        cout << "  HP          = " << HP << endl;
                        cout << "  ENERGI      = " << Energi << endl;
                        cout << "  ATTACK      = " << Attack << endl;
                        cout << "  PENETRATION = " << Attack * Penetration << endl;
        
                        cout << endl;
                        cout << "  MASUKKAN PILIHAN : ";
                        cin >> Game;
                
                            if(Game == "1"){
                
                                while (true){
                        
                                cout << "\033[2J\033[1;1H";
                    
                                cout << endl;
                                cout << "  SILAHKAN PILIH LEVEL MUSUH :" << endl;
                    
                                cout << endl;
                                cout << "  1. LEVEL 1" << endl;
                                cout << "  2. LEVEL 2" << endl;
                                cout << "  3. LEVEL 3" << endl;
                                cout << "  4. LEVEL 4" << endl;
                                cout << "  5. LEVEL 5" << endl;
                                cout << "  6. LEVEL 6" << endl;
                                cout << "  7. LEVEL 7" << endl;
                                cout << "  8. LEVEL 8" << endl;
                                cout << "  9. LEVEL 9" << endl;
                                
                                cout << endl;
                                cout << "  10. FINAL BOSS (RAJA KEGELAPAN)" << endl;
                    
                                cout << endl;
                                cout << "  MASUKKAN PILIHAN : ";
                                cin >> Level;
                    
                                    if(Level == "1"){
                            
                                        HPZombie = 1500;
                                        AttackZombie = 200;
                                        EnergiZombie = 100;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "2"){
                            
                                        HPZombie = 2000;
                                        AttackZombie = 250;
                                        EnergiZombie = 125;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "3"){
                            
                                        HPZombie = 2500;
                                        AttackZombie = 300;
                                        EnergiZombie = 150;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "4"){
                            
                                        HPZombie = 3000;
                                        AttackZombie = 350;
                                        EnergiZombie = 175;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "5"){
                            
                                        HPZombie = 3500;
                                        AttackZombie = 400;
                                        EnergiZombie = 200;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "6"){
                            
                                        HPZombie = 4000;
                                        AttackZombie = 450;
                                        EnergiZombie = 175;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "7"){
                            
                                        HPZombie = 4500;
                                        AttackZombie = 500;
                                        EnergiZombie = 200;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "8"){
                            
                                        HPZombie = 5000;
                                        AttackZombie = 550;
                                        EnergiZombie = 225;
                                        
                                        break;
                                    }
                        
                                    else if(Level == "9"){
                            
                                        HPZombie = 5500;
                                        AttackZombie = 600;
                                        EnergiZombie = 250;
                                        break;
                                    }
                        
                                    else if(Level == "10"){
                            
                                        HPZombie = 10000;
                                        AttackZombie = 1000;
                                        EnergiZombie = 500;
                                        
                                        break;
                                    }
                                    
                                    else{
                                    continue;
                                    }
                                    
                                }
                                
                                while(true){
                                
                                cout << "\033[2J\033[1;1H";
                    
                                cout << endl;
                                cout << "  KAMU BERTEMU MUSUH DI HUTAN, MUSUH ITU BERLARI KE ARAHMU!" << endl;
                            
                                cout << endl;
                                cout << "  HP TERSISA = " << HP << endl;
                                cout << "  ENERGI TERSISA = " << Energi << endl;
                                cout << "  OBAT TERSISA = " << Obat << endl;
                                cout << "  ULTIMATE TERSISA = " << Ultimate << endl;
                    
                                cout << endl;
                                cout << "  HP MUSUH TERSISA = " << HPZombie << endl;
                                
                                cout << endl;
                                cout << "  1. SERANG" << endl;
                                cout << "  2. GUNAKAN OBAT" << endl;
                                cout << "  3. SERANGAN ULTIMATE" << endl;
                                cout << "  4. MENYERAH" << endl;
                    
                                cout << endl;
                                cout << "  MASUKKAN PILIHAN : ";
                                cin >> Play;
                    
                                    if(Play == "1"){
                                        
                                        if (Energi >= 10){
                                            HP -= AttackZombie;
                                            HPZombie -= Attack + Penetration;
                                            Energi -= 10;
                                            EnergiZombie -= 10;
                                            
                                            Bantuan = "  MUSUH MENGERANG KESAKITAN TERKENA SERANGANMU";
                                        }
                                        
                                        else if (Energi <= 0){
                                            HP -= AttackZombie;
                                            EnergiZombie -= 10;
                                            
                                            Bantuan = "  ENERGIMU HABIS, KAMU TERKENA SERANGAN MUSUH";
                                        }
                                        
                                    }
                        
                                    else if(Play == "2"){
                            
                                        if (Obat >= 1){
                                            HP += 500;
                                            Energi += 20;
                                            Obat -= 1;
                            
                                            Bantuan = "  KAMU BERHASIL MENGGUNAKAN OBAT, KINI HP DAN ENERGIMU BERTAMBAH";
                                        }
                            
                                        else if(Obat < 1){
                                            Bantuan = "  KAMU GAGAL MENGGUNAKAN OBAT, KARENA PERSEDIAAN MU TELAH HABIS";
                                        }
                            
                                    }
                        
                                    else if(Play == "3"){
                                        
                                        if(Ultimate >= 1){
                                            HP -= AttackZombie;
                                            HPZombie -= Attack + Penetration + 500;
                                            Energi -= 10;
                                            EnergiZombie -= 10;
                                            Ultimate -= 1;
                            
                                            Bantuan = "  MUSUH TERJATUH AKIBAT SERANGAN ULTIMATE";
                                        }
                                        
                                        else if(Ultimate < 1){
                                            Bantuan = "  KAMU GAGAL MENGGUNAKAN ULTIMATE, PERSEDIAAN MU TELAH HABIS";
                                        }
                                        
                                    }
                        
                                    else if(Play == "4"){
                                        
                                    break;
                                    }
                                    
                                    else{
                                    continue;
                                    }
                                
                                if(HP < 0){
                                        
                                    cout << endl;
                                    cout << "  PERTANDINGAN SELESAI, KAMU DIKALAHKAN OLEH MUSUH" << endl;
                        
                                    cout << endl;
                                    cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                    cin >> Next;
                                    break;
                                    
                                    }
                    
                                else if(HPZombie < 0){
                                    
                                    cout << endl;
                                    cout << "  PERTANDINGAN SELESAI, KAMU BERHASIL MENGALAHKAN MUSUH";
                        
                                    cout << endl;
                                    cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                    cin >> Next;
                                    break;
                                    
                                    }
                                
                                while(true){
                    
                                cout << "\033[2J\033[1;1H";
                    
                                cout << endl;
                                cout << Bantuan << endl;
                    
                                cout << endl;
                                cout << "  HP TERSISA = " << HP << endl;
                                cout << "  ENERGI TERSISA = " << Energi << endl;
                                cout << "  OBAT TERSISA = " << Obat << endl;
                                cout << "  ULTIMATE TERSISA = " << Ultimate << endl;
                    
                                cout << endl;
                                cout << "  HP ZOMBIE TERSISA = " << HPZombie << endl;
                    
                                cout << endl;
                                cout << "  1. SERANG" << endl;
                                cout << "  2. GUNAKAN OBAT" << endl;
                                cout << "  3. SERANGAN ULTIMATE" << endl;
                                cout << "  4. MENYERAH" << endl;
                    
                                cout << endl;
                                cout << "  MASUKKAN PILIHAN : ";
                                cin >> Play;
                    
                                    if(Play == "1"){
                                        
                                        if (Energi >= 10){
                                            HP -= AttackZombie;
                                            HPZombie -= Attack + Penetration;
                                            Energi -= 10;
                                            EnergiZombie -= 10;
                                            
                                            Bantuan = "  MUSUH MENGERANG KESAKITAN TERKENA SERANGANMU";
                                        }
                                        
                                        else if (Energi <= 0){
                                            HP -= AttackZombie;
                                            EnergiZombie -= 10;
                                            
                                            Bantuan = "  ENERGIMU HABIS, KAMU TERKENA SERANGAN MUSUH";
                                        }
                                        
                                    }
                        
                                    else if(Play == "2"){
                            
                                        if (Obat >= 1){
                                            HP += 500;
                                            Energi += 20;
                                            Obat -= 1;
                            
                                            Bantuan = "  KAMU BERHASIL MENGGUNAKAN OBAT, KINI HP DAN ENERGIMU BERTAMBAH";
                                        }
                            
                                        else if(Obat < 1){
                                            Bantuan = "  KAMU GAGAL MENGGUNAKAN OBAT, KARENA PERSEDIAAN MU TELAH HABIS";
                                        }
                            
                                    }
                        
                                    else if(Play == "3"){
                                        
                                        if(Ultimate >= 1){
                                            HP -= AttackZombie;
                                            HPZombie -= Attack + Penetration + 500;
                                            Energi -= 10;
                                            EnergiZombie -= 10;
                                            Ultimate -= 1;
                            
                                            Bantuan = "  MUSUH TERJATUH AKIBAT SERANGAN ULTIMATE";
                                        }
                                        
                                        else if(Ultimate < 1){
                                            Bantuan = "  KAMU GAGAL MENGGUNAKAN ULTIMATE, PERSEDIAAN MU TELAH HABIS";
                                        }
                                        
                                    }
                        
                                    else if(Play == "4"){
                                        
                                    break;
                                    }
                                    
                                    else{
                                    continue;
                                    }
                    
                                if(HP <= 0){
                                    
                                cout << endl;
                                cout << "  PERTANDINGAN SELESAI, KAMU DIKALAHKAN OLEH MUSUH" << endl;
                                    
                                    if(Karakter == "1"){
                                            
                                        HP = 1200;
                                        Energi = 100;
                                        }
                    
                                    else if(Karakter == "2"){
                                            
                                        HP = 1100;
                                        Energi = 90;
                                        }
                    
                                    else if(Karakter == "3"){
                                            
                                        HP = 1000;
                                        Energi = 80;
                                        }
                                  
                                cout << endl;
                                cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                cin >> Next;
                                break;
                                
                                }
                                
                                else if(HPZombie <= 0){
                                    
                                cout << endl;
                                cout << "  PERTANDINGAN SELESAI, KAMU BERHASIL MENGALAHKAN MUSUH";
                                
                                    if(Level == "1"){
                            
                                        Gold += 1250;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 1200;
                                            Energi = 100;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 1100;
                                            Energi = 90;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 1000;
                                            Energi = 80;
                                        }
                                        
                                    }
                        
                                    else if(Level == "2"){
                            
                                        Gold += 1500;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 1400;
                                            Energi = 110;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 1300;
                                            Energi = 100;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 1200;
                                            Energi = 90;
                                        }
                                        
                                    }
                        
                                    else if(Level == "3"){
                            
                                        Gold += 1750;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 1600;
                                            Energi = 120;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 1500;
                                            Energi = 110;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 1300;
                                            Energi = 100;
                                        }
                                        
                                    }
                        
                                    else if(Level == "4"){
                            
                                        Gold += 2000;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 1800;
                                            Energi = 130;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 1700;
                                            Energi = 120;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 1600;
                                            Energi = 110;
                                        }
                                        
                                    }
                        
                                    else if(Level == "5"){
                            
                                        Gold += 2250;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 2000;
                                            Energi = 140;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 1900;
                                            Energi = 130;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 1800;
                                            Energi = 120;
                                        }
                                        
                                    }
                        
                                    else if(Level == "6"){
                            
                                        Gold += 2500;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 2200;
                                            Energi = 150;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 2100;
                                            Energi = 140;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 2000;
                                            Energi = 130;
                                        }
                                        
                                    }
                        
                                    else if(Level == "7"){
                            
                                        Gold += 2750;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 2400;
                                            Energi = 160;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 2300;
                                            Energi = 150;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 2200;
                                            Energi = 140;
                                        }
                                        
                                    }
                        
                                    else if(Level == "8"){
                            
                                        Gold += 3000;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 2600;
                                            Energi = 170;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 2500;
                                            Energi = 160;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 2400;
                                            Energi = 150;
                                        }
                                        
                                    }
                        
                                    else if(Level == "9"){
                            
                                        Gold += 3250;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 2800;
                                            Energi = 180;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 2700;
                                            Energi = 170;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 2600;
                                            Energi = 160;
                                        }
                                        
                                    }
                        
                                    else if(Level == "10"){
                            
                                        Gold += 3500;
                                        
                                        if(Karakter == "1"){
                                            
                                            HP = 3000;
                                            Energi = 200;
                                        }
                    
                                        else if(Karakter == "2"){
                                            
                                            HP = 2800;
                                            Energi = 190;
                                        }
                    
                                        else if(Karakter == "3"){
                                            
                                            HP = 2700;
                                            Energi = 180;
                                        }
                                
                                    }
                                
                                cout << endl;
                                cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                cin >> Next;
                                break;
                                
                                }
                                
                                }
                                
                                break;
                                
                                }
                    
                            }
                                
                            else if(Game == "2"){
                        
                                while(true){
                    
                                cout << "\033[2J\033[1;1H";
                
                                cout << endl;
                                cout << "  GOLD MU TERISA = " << Gold << endl;
                
                                cout << endl;
                                cout << "  1. UPGRADE PHYSICAL ATTACK SENJATA      (1000 GOLD) " << endl;
                                cout << "  2. UPGRADE PHYSICAL PENETRATION SENJATA (1000 GOLD)" << endl;
                                cout << "  3. UPGRADE HP KARAKTER                  (1000 GOLD)" << endl;
                                cout << "  4. UPGRADE ENERGI KARAKTER              (1000 GOLD)" << endl;
                                
                                cout << endl;
                                cout << "  0. KEMBALI" << endl;
                
                                cout << endl;
                                cout << "  MASUKKAN PILIHAN : ";
                                cin >> Play;
                
                                    if(Play == "1"){
                            
                                        if(Gold < 1000){
                                        cout << endl;
                                        cout << "  MAAF, GOLD KAMU TIDAK MENCUKUPI UNTUK UPGRADE PHYSICAL ATTACK SENJATA" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Play;
                            
                                        continue;
                                        }
                            
                                        else if(Gold >= 1000){
                                        Gold -= 1000;
                                        Attack += 250;
                                        cout << endl;
                                        cout << "  UPGRADE PHYSICAL ATTACK SENJATA BERHASIL" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Play;
                            
                                        continue;
                                        }
                            
                                    }
                                    
                                    else if(Play == "2"){
                            
                                        if(Gold < 1000){
                                        cout << endl;
                                        cout << "  MAAF, GOLD KAMU TIDAK MENCUKUPI UNTUK UPGRADE PHYSICAL PENETRATION SENJATA" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Play;
                            
                                        continue;
                                        }
                            
                                        else if(Gold >= 1000){
                                        Gold -= 1000;
                                        Penetration += 0.1;
                                        cout << endl;
                                        cout << "  UPGRADE PHYSICAL PENETRATION BERHASIL" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Next;
                            
                                        continue;
                                        }
                            
                                    }
                        
                                    else if(Play == "3"){
                            
                                        if(Gold < 1000){
                                        cout << endl;
                                        cout << "  MAAF, GOLD KAMU TIDAK MENCUKUPI UNTUK UPGRADE MAKS HP KARAKTER" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Next;
                            
                                        continue;
                                        }
                            
                                        else if(Gold >= 1000){
                                        Gold -= 1000;
                                        HP += 500;
                                        cout << endl;
                                        cout << "  UPGRADE MAKS HP KARAKTER BERHASIL" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Next;
                            
                                        continue;
                                        }
                            
                                    }
                        
                                    else if(Play == "4"){
                            
                                        if(Gold < 1000){
                                        cout << endl;
                                        cout << "  MAAF, GOLD KAMU TIDAK MENCUKUPI UNTUK UPGRADE MAKS ENERGI KARAKTER" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Next;
                            
                                        continue;
                                        }
                            
                                        else if(Gold >= 1000){
                                        Gold -= 1000;
                                        Energi += 50;
                                        cout << endl;
                                        cout << "  UPGRADE MAKS ENERGI KARAKTER BERHASIL" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Next;
                            
                                        continue;
                                        }
                            
                                    }
                                    
                                    else if(Play == "0"){
                                    break;
                                    }
                                        
                                    else{
                                    continue;
                                    }
                                        
                                    }
                    
                            }
                    
                            else if(Game == "3"){
                        
                                while(true){
                    
                                cout << "\033[2J\033[1;1H";
                
                                cout << endl;
                                cout << "  GOLD MU TERISA = " << Gold << endl;
                
                                cout << endl;
                                cout << "  1. OBAT (200 GOLD)" << endl;
                                cout << "  2. ULTIMATE (250 GOLD)" << endl;
                                
                                cout << endl;
                                cout << "  0. KEMBALI" << endl;
                
                                cout << endl;
                                cout << "  MASUKKAN PILIHAN : ";
                                cin >> Play;
                
                                    if(Play == "1"){
                                            
                                        cout << "  MASUKKAN JUMLAH OBAT : ";
                                        cin >> Jumlah;
                                        
                                        if(Gold < 200 * Jumlah){
                                        
                                        cout << endl;
                                        cout << "  MAAF, GOLD KAMU TIDAK MENCUKUPI UNTUK MEMBELI OBAT" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Play;
                            
                                        continue;
                                        }
                            
                                        else if(Gold >= 200 * Jumlah){
                                        Gold -= 200 * Jumlah;
                                        Obat += Jumlah;
                                        cout << endl;
                                        cout << "  PEMBELIAN OBAT BERHASIL" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Play;
                            
                                        continue;
                                        }
                            
                                    }
                                    
                                    else if(Play == "2"){
                                        
                                        cout << "  MASUKKAN JUMLAH ULTIMATE : ";
                                        cin >> Jumlah;
                                        
                                        if(Gold < 250 * Jumlah){
                                        cout << endl;
                                        cout << "  MAAF, GOLD KAMU TIDAK MENCUKUPI UNTUK MEMBELI ULTIMATE" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Play;
                            
                                        continue;
                                        }
                            
                                        else if(Gold >= 250 * Jumlah){
                                        Gold -= 250 * Jumlah;
                                        Ultimate += Jumlah;
                                        cout << endl;
                                        cout << "  PEMBELIAN ULTIMATE BERHASIL" << endl;
                            
                                        cout << endl;
                                        cout << "  KETIK APA SAJA UNTUK MELANJUTKAN : ";
                                        cin >> Next;
                            
                                        continue;
                                        }
                            
                                    }
                                    
                                    else if(Play == "0"){
                                    break;
                                    }
                                        
                                    else{
                                    continue;
                                    }
                            
                                    break;
                            
                                }
                    
                            }
                            
                            else if(Game == "4"){
                            break;
                            }
                    
                    continue;
                
            }
            
            }
            
            else if(Home == "2"){
                
                cout << "\033[2J\033[1;1H";
                
                Attack += 300;
                Obat += 12;
                Ultimate += 8;
                Gold += 100000;
                
                cout << endl;
                cout << " MUAT ULANG GAME BERHASIL" << endl;
                
                cout << endl;
                cout << " DIMAINKAN 4 JAM 36 MENIT LALU" << endl;
                            
                cout << endl;
                cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
                cin >> Next;
                            
                continue;
                
                
            }
            
            else if(Home == "3"){
                
                cout << "\033[2J\033[1;1H";
                
                cout << "                                                                      " << endl;
                cout << "                                                                      " << endl;
                cout << Red;
                cout << "  ==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||== " << endl;
                cout << Clear;
                cout << "  ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
                cout << "  ==                                                                  == " << endl;
                cout << "  ||      CARA BERMAIN :                                              || " << endl;
                cout << "  ==                                                                  == " << endl;
                cout << "  ||   1. GAME AKAN DIMULAI DENGAN MEMILIH " << Red << "SENJATA DAN KEKUATAN" << Clear << "       || " << endl; 
                cout << "  ==      KARAKTER DENGAN KEMAMPUAN YANG BERBEDA                      == " << endl;
                cout << "  ||                                                                  || " << endl;
                cout << "  ==   2. UNTUK MENYELESAIKAN GAME, KAMU HARUS MENYELAMATKAN          == " << endl; 
                cout << "  ||      SEORANG PUTRI YANG DICULIK OLEH " << Red << "RAJA KEGELAPAN" << Clear << "              || " << endl;
                cout << "  ==                                                                  == " << endl;
                cout << "  ||   3. UNTUK MENGALAHKAN RAJA KEGELAPAN, KAMU PERLU                || " << endl;
                cout << "  ==      MENGALAHKAN PASUKAN RAJA KEGELAPAN TERLEBIH DAHULU          == " << endl;
                cout << "  ||      UNTUK MERAMPAS " << Red << "GOLD " << Clear << "YANG MEREKA MILIKI                      || " << endl;
                cout << "  ==                                                                  == " << endl;
                cout << "  ||   4. GOLD YANG TELAH KAMU MILIKI DAPAT DIGUNAKAN UNTUK           || " << endl;
                cout << "  == " << Red << "     MENGUPGRADE " << Clear << "SENJATA DAN KEKUATAN KARAKTER                   ==" << endl;
                cout << "  ||                                                                  || " << endl;
                cout << "  ==   5. KAMU JUGA DAPAT MEMBELI PERLENGKPAN LAINNYA SEPERTI         == " << endl;
                cout << "  || " << Red << "     OBAT DAN SPEL " << Clear << "YANG DAPAT DIGUNAKAN SAAT PENYERANGAN         || " << endl;
                cout << "  ==      SEDANG BERLANGSUNG                                          == " << endl;
                cout << "  ||                                                                  || " << endl;
                cout << "  ==                                                                  == " << endl;
                cout << "  ||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==|| " << endl;
                cout << Red;
                cout << "  ==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||==||== " << endl;
                cout << Clear;
                cout << "                                                                      " << endl;
                cout << "                                                                      " << endl;
                
                cout << "  KETIK APA SAJA UNTUK KEMBALI : ";
                cin >> Back;
                continue;
                
            }
            
            else if(Home == "4"){
                
                cout << "\033[2J\033[1;1H";
                
                cout << endl << endl;
                cout << "  NYARI APA? NYARI YANG SEMPURNA? GAADA" << endl;
                
                cout << endl;
                cout << "  KETIK APA SAJA UNTUK KEMBALI : ";
                cin >> Back;
                
                continue;
            }
            
            else if(Home == "5"){
            break;
            }
            
            else{
            continue;
            }
            
    }
    return 0;
}
