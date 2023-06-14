#ifdef _WIN32
#include <Windows.h>
#else
#endif //za funkciju sleep
//#include <unistd.h>
#include <string>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <utility>
#include <numeric>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <fstream>
using namespace std;

void pauziraj()
{
    cout << endl << endl << endl << " Pritisnite enter za nastavak...";
    string dummy;
    cin.ignore();
    getline(cin, dummy);
}

int main()
{
    int trebacin = 0;
    while (1)
    {
        double korisnik1, korisnik_1, korisnik2, korisnik3, korisnik4, korisnik5, korisnik6, korisnik7, korisnik8, korisnik9;
        double gotovina, kartica, novac_za_kredit, stopa, kszs = 0.015, stedionica, stedzarada, BUSD, BTC, ETC, ZLC, LTC, BNB, DASH, USDC, DGD, steduk, stanjeracunaT;
        double stanjeracuna[1000], stanjeracunaM[1000];
        unsigned long long int RezervaOIB[1000], RezervaOIBM[1000], RezervaOIBT;
        char a, b, c, d, e, f, odabirtransakcije, valuta, opcijaulog;
        int i, j, OIBtocan = 1, meduostatak, svota, KontrolnaZnmOIB, Zakljucavanje, Slovapostoje, iskoristeno, brojac, z1, z2, z3, z4, z5, z6, z7, z8, z9, z10, z11, cryptobroj, sec, TestG = 0;
        string lajna, linia;
        int klijenti = 0;
        int provjera = -1;
        fstream file;
        fstream penezi;
        fstream crypto;
        int flag2 = 0;
        int brojkica = 0;
        int brojk;
        int logout = 0;


        file.open("Zlatkovnici.txt", ios::in);
        while (getline(file, lajna))
            klijenti++;
        file.close();


        penezi.open("Novci.txt", ios::in);
        while (getline(penezi, linia))
            brojkica++;
        penezi.close();

        /*novo*/
        string c1, c2, Podatci;
        unsigned long long int c3;

        /**/
        unsigned long long int OIB[1000];
        string ime[1000], prezime[1000];
        string imeT, prezimeT;
        int BrojeviZaOIB[11];
        double kripto[10][3];
        double stediona[5][5];

        if (trebacin == 1)
            cin.ignore();
        cout << "\n Unesite ime: ";
        getline(cin, imeT);
        cout << "\n Unesite prezime: ";
        getline(cin, prezimeT);
        cout << "\n Unesite OIB: ";  /// 69435151530 RADI



        for (Zakljucavanje = 1; Zakljucavanje <= 3; Zakljucavanje++) // PROVJERA OIBA 
        {
            cin >> OIB[klijenti]; /// 69435151533 NE RADI
            RezervaOIB[klijenti] = OIB[klijenti];
            RezervaOIBT = OIB[klijenti];
            OIBtocan = 1;
            z1 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z2 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z3 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z4 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z5 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z6 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z7 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z8 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z9 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z10 = OIB[klijenti] % 10;
            OIB[klijenti] = OIB[klijenti] / 10;
            z11 = OIB[klijenti] % 10;

            meduostatak = z11 + 10;
            meduostatak = z11 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z10 += meduostatak;
            meduostatak = z10 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z9 += meduostatak;
            meduostatak = z9 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z8 += meduostatak;
            meduostatak = z8 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z7 += meduostatak;
            meduostatak = z7 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z6 += meduostatak;
            meduostatak = z6 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z5 += meduostatak;
            meduostatak = z5 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z4 += meduostatak;
            meduostatak = z4 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z3 += meduostatak;
            meduostatak = z3 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;
            z2 += meduostatak;
            meduostatak = z2 % 10;
            if (meduostatak == 0)
                meduostatak = 10;

            meduostatak *= 2;
            meduostatak %= 11;

            if (11 - meduostatak == 10 || 11 - meduostatak == 11)
            {
                if (11 - meduostatak == 10)
                {
                    meduostatak = 0;
                    if (meduostatak == z1)
                        break;
                    else
                    {
                        if (Zakljucavanje != 3)
                            cout << "\n" << "Opss, OIB nije ispravan. Pokušajte ponovno: ";
                    }
                }
                else if (11 - meduostatak == 11)
                {
                    meduostatak = 1;
                    if (meduostatak == z1)
                        break;
                    else
                    {
                        if (Zakljucavanje != 3)
                            cout << "\n" << "Opss, OIB nije ispravan. Pokušajte ponovno: ";
                    }
                }
                else
                    break;
            }
            else if (11 - meduostatak == z1)
                break;
            else
            {
                if (Zakljucavanje != 3)
                    cout << "\n" << "Opss, OIB nije ispravan. Pokušajte ponovno: ";
            }


            if (Zakljucavanje == 3)
            {
                cout << "\n" << "Vas račun je blokiran na 24 sata, broj neuspjelih pokušaja: 3";
                return 0;
            }
        }
        if (OIBtocan == 1) /// OSOBNI PODATCI
        {

            file.open("Zlatkovnici.txt", ios::in);
            for (int k = 0; k <= klijenti; k++)
            {

                file >> ime[klijenti];
                file >> prezime[klijenti];
                file >> RezervaOIB[klijenti];

                if (imeT == ime[klijenti] && prezimeT == prezime[klijenti] && RezervaOIBT == RezervaOIB[klijenti])
                {
                    cout << "\n Dobrodošli u ZlajaCash banku\n\n";
                    cout << " Uspješno ste ulogirani!\n\n\n\n\n";
                    flag2 = 1;
                    cout << " Ime: " << ime[klijenti] << "\n";
                    cout << " Prezime: " << prezime[klijenti] << "\n";
                    cout << " Vas OIB je: " << RezervaOIB[klijenti];


                    penezi.open("Novci.txt", ios::in);
                    for (int k = 0; k < brojkica; k++)
                    {
                        penezi >> brojk;
                        penezi >> RezervaOIBM[k];
                        penezi >> stanjeracunaM[k];
                    }
                    for (int k = brojkica - 1; k >= 0; k--)
                    {
                        penezi >> brojk;
                        penezi >> RezervaOIBM[k];
                        penezi >> stanjeracunaM[k];

                        if (RezervaOIBT == RezervaOIBM[k])
                        {
                            printf("\n Stanje vaseg računa je: %.2f €", stanjeracunaM[k]);
                            stanjeracuna[klijenti] = stanjeracunaM[k];
                            pauziraj();
                            system("clear");
                            break;
                        }
                    }
                    penezi.close();
                    break;
                }



            }
            file.close();








            if (flag2 == 0)
            {
                klijenti++;
                ime[klijenti] = imeT;
                prezime[klijenti] = prezimeT;
                RezervaOIB[klijenti] = RezervaOIBT;


                file.open("Zlatkovnici.txt", ios::out | ios::app);
                file << ime[klijenti] << " " << prezime[klijenti] << " ";
                file << RezervaOIB[klijenti] << endl;
                file.close();

                cout << "\n Dobrodošli u ZlajaCash banku\n\n";
                cout << " Uspješno ste kreirali račun!\n\n\n\n\n";
                cout << " Ime: " << ime[klijenti] << "\n";
                cout << " Prezime: " << prezime[klijenti] << "\n";
                cout << " Vas OIB je: " << RezervaOIB[klijenti];
                printf("\n Stanje vaseg računa je: %.2f €", stanjeracuna[klijenti]);
                pauziraj();
                system("clear");
            }
        }


        // SLOŽENO NAGORE



        for (i = 1; i > 0; i++)
        {
            printf("\n Stanje vaseg računa je: %.2f €", stanjeracuna[klijenti]);
            cout << "\n\n Opcije: a) Uplata\n\t\t b) Isplata\n\t\t c) Kriptovalute\n\t\t d) Ulaganje\n\t\t e) Prebacivanje na drugi račun\n\t\t f) Log out";




            penezi.open("Novci.txt", ios::out | ios::app);
            penezi << brojkica << " " << RezervaOIB[klijenti] << " " << stanjeracuna[klijenti] << endl;
            brojkica++;
            penezi.close();






            cout << "\n\n\n Odaberite sto zelite učiniti: ";
            for (i = 1; i > 0; i++) /// ODABIR TRANSAKCIJE
            {
                cin >> odabirtransakcije;
                if (odabirtransakcije == 'a') // UPLATA
                {
                    cout << "\n" << " Odaberite vrstu transakcije:  a) Gotovina\n\t\t\t\t\t\t\t   b) Kartica\n\n\t\t\t\t\t  Odabir:  ";
                    for (i = 1; i > 0; i++)
                    {
                        cin >> odabirtransakcije;
                        if (odabirtransakcije == 'a')
                        {
                            cout << "\n\n" << " Prebacujete gotovinu na račun\n Unesite svotu novca koju želite prebaciti: ";
                            for (i = 1; i > 0; i++)
                            {
                                cin >> gotovina;
                                if (gotovina <= 0)
                                {
                                    cout << "\n Morate upisati pozitivan broj veći od 0: ";
                                }
                                cout << "\n\n Odaberite valutu u kojoj uplaćujete novac: a) Euro\n\t\t\t\t\t\t\t\t\t\t\tb) Funta\n\t\t\t\t\t\t\t\t\t\t\tc) Američki dolar\n\t\t\t\t\t\t\t\t\t\t\td) Poljski zlot\n\t\t\t\t\t\t\t\t\t\t\te) Mađarska forinta\n\t\t\t\t\t\t\t\t\t\t\tf) Srpski dinar\n\t\t\t\t\t\t\t\t\t\t\tg) Švicarski franak\n\t\t\t\t\t\t\t\t\t\t\th) Rumunjski lej\n\t\t\t\t\t\t\t\t\t\t\ti) Konvertibilna marka\n\t\t\t\t\t\t\t\t\t\t\tj) Povratak\n\n\t\t\t\t\t\t\t\t\tOdabir: ";
                                for (i = 1; i > 0; i++)
                                {
                                    cin >> valuta;
                                    if (valuta == 'a')
                                    {
                                        stanjeracuna[klijenti] += gotovina;
                                        break;
                                    }
                                    else if (valuta == 'b')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 0.86;
                                        break;
                                    }
                                    else if (valuta == 'c')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 1.08;
                                        break;
                                    }
                                    else if (valuta == 'd')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 4.52;
                                        break;
                                    }
                                    else if (valuta == 'e')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 371.02;
                                        break;
                                    }
                                    else if (valuta == 'f')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 117.22;
                                        break;
                                    }
                                    else if (valuta == 'g')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 0.98;
                                        break;
                                    }
                                    else if (valuta == 'h')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 4.97;
                                        break;
                                    }
                                    else if (valuta == 'i')
                                    {
                                        stanjeracuna[klijenti] += gotovina / 1.96;
                                        break;
                                    }
                                    else if (valuta == 'j')
                                        break;
                                    else
                                    {
                                        cout << "\n Unesite jednu od ponuđenih valuta: ";
                                    }
                                }
                                TestG = gotovina;
                                sec = 0;
                                while (TestG > 0)
                                {
                                    TestG /= 10;
                                    sec++;
                                }

                                cout << "\n Priložite novac.";
                                cout.flush();
                                sleep(3);
                                cout << "\n\n Prebrojavanje u toku";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(3);
                                printf("\n\n Stanje vaseg racuna je: %.2f €", stanjeracuna[klijenti]);
                                pauziraj();
                                system("clear");
                                break;
                            }
                            break;
                        }
                        else if (odabirtransakcije == 'b')
                        {
                            cout << "\n\n Prebacujete novac sa kartice na racun\n Unesite svotu novca koju zelite prebaciti: ";
                            for (i = 1; i > 0; i++)
                            {
                                cin >> kartica;
                                if (kartica <= 0)
                                {
                                    cout << "\n Morate upisati pozitivan broj veci od 0: ";
                                }
                                cout << "\n\n Odaberite valutu u kojoj uplaćujete novac: a) Euro\n\t\t\t\t\t\t\t\t\t\t\tb) Funta\n\t\t\t\t\t\t\t\t\t\t\tc) Američki dolar\n\t\t\t\t\t\t\t\t\t\t\td) Poljski zlot\n\t\t\t\t\t\t\t\t\t\t\te) Mađarska forinta\n\t\t\t\t\t\t\t\t\t\t\tf) Srpski dinar\n\t\t\t\t\t\t\t\t\t\t\tg) Švicarski franak\n\t\t\t\t\t\t\t\t\t\t\th) Rumunjski lej\n\t\t\t\t\t\t\t\t\t\t\ti) Konvertibilna marka\n\t\t\t\t\t\t\t\t\t\t\tj) Povratak\n\n\t\t\t\t\t\t\t\t\tOdabir: ";
                                for (i = 1; i > 0; i++)
                                {
                                    cin >> valuta;
                                    if (valuta == 'a')
                                    {
                                        stanjeracuna[klijenti] += kartica;
                                        break;
                                    }
                                    else if (valuta == 'b')
                                    {
                                        stanjeracuna[klijenti] += kartica / 0.86;
                                        break;
                                    }
                                    else if (valuta == 'c')
                                    {
                                        stanjeracuna[klijenti] += kartica / 1.08;
                                        break;
                                    }
                                    else if (valuta == 'd')
                                    {
                                        stanjeracuna[klijenti] += kartica / 4.52;
                                        break;
                                    }
                                    else if (valuta == 'e')
                                    {
                                        stanjeracuna[klijenti] += kartica / 371.02;
                                        break;
                                    }
                                    else if (valuta == 'f')
                                    {
                                        stanjeracuna[klijenti] += kartica / 117.22;
                                        break;
                                    }
                                    else if (valuta == 'g')
                                    {
                                        stanjeracuna[klijenti] += kartica / 0.98;
                                        break;
                                    }
                                    else if (valuta == 'h')
                                    {
                                        stanjeracuna[klijenti] += kartica / 4.97;
                                        break;
                                    }
                                    else if (valuta == 'i')
                                    {
                                        stanjeracuna[klijenti] += kartica / 1.96;
                                        break;
                                    }
                                    else if (valuta == 'j')
                                        break;
                                    else
                                    {
                                        cout << "\n Unesite jednu od ponuđenih valuta: ";
                                    }
                                }
                                TestG = kartica;
                                sec = 0;
                                while (TestG > 0)
                                {
                                    TestG /= 10;
                                    sec++;
                                }

                                cout << "\n Priložite novac.";
                                cout.flush();
                                sleep(3);
                                cout << "\n\n Prebrojavanje u toku";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(3);
                                printf("\n\n Stanje vaseg racuna je: %.2f €", stanjeracuna[klijenti]);
                                pauziraj();
                                system("clear");
                                break;
                            }
                            break;
                        }
                        else
                            cout << "\n Pokusajte ponovo: ";
                    }
                    break;
                }
                else if (odabirtransakcije == 'b') /// ISPLATA
                {
                    cout << "\n Odaberite vrstu transakcije:  a) Gotovina\n\t\t\t\t\t\t\t   b) Kartica\n\n\t\t\t\t\t\t\t   ";
                    for (i = 1; i > 0; i++)
                    {
                        cin >> odabirtransakcije;
                        if (odabirtransakcije == 'a')
                        {
                            cout << "\n Novce sa racuna prebacujete u gotovinu.\n Unesite svotu novca koju zelite isplatiti (EUR): ";
                            for (i = 1; i > 0; i++)
                            {
                                cin >> gotovina;
                                printf("\n\n Odaberite valutu u kojoj zelite isplatiti novac: a) Euro (%.2f EUR)\n\t\t\t\t\t\t\t\t\t\t\t\t  b) Funte (%.2f GPB)\n\t\t\t\t\t\t\t\t\t\t\t\t  c) Americki dolar (%.2f USD)\n\t\t\t\t\t\t\t\t\t\t\t\t  d) Poljski zlot (%.2f PLN)\n\t\t\t\t\t\t\t\t\t\t\t\t  e) Mađarska forinta (%.2f FT)\n\t\t\t\t\t\t\t\t\t\t\t\t  f) Srpski dinar (%.2f RSD)\n\t\t\t\t\t\t\t\t\t\t\t\t  g) Svicarski franak (%.2f HUF)\n\t\t\t\t\t\t\t\t\t\t\t\t  h) Rumunjski lej (%.2f RON)\n\t\t\t\t\t\t\t\t\t\t\t\t  i) Konvertibilna marka (%.2f KM)\n\t\t\t\t\t\t\t\t\t\t\t\t  j) Povratak\n\n\t\t\t\t\t\t\t\t\t\t  Odabir: ", gotovina, gotovina * 0.86, gotovina * 1.08, gotovina * 4.52, gotovina * 371.02, gotovina * 117.22, gotovina * 0.98, gotovina * 4.97, gotovina * 1.96);
                                for (i = 1; i > 0; i++)
                                {
                                    iskoristeno = 1;
                                    cin >> valuta;
                                    if (valuta == 'a')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'b')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'c')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }

                                    }
                                    else if (valuta == 'd')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'e')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'f')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'g')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'h')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'i')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - gotovina) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= gotovina;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'j')
                                        break;
                                    else
                                    {
                                        cout << "\n Unesite jednu od ponuđenih valuta: ";
                                    }
                                    if (valuta == 'j' || iskoristeno == 0)
                                        break;
                                }
                                if (valuta == 'j' || iskoristeno == 0)
                                    break;
                            }

                            if (valuta == 'b')
                                gotovina *= 0.86;
                            else if (valuta == 'c')
                                gotovina *= 1.08;
                            else if (valuta == 'd')
                                gotovina *= 4.52;
                            else if (valuta == 'e')
                                gotovina *= 371.02;
                            else if (valuta == 'f')
                                gotovina *= 117.22;
                            else if (valuta == 'g')
                                gotovina *= 0.98;
                            else if (valuta == 'h')
                                gotovina *= 4.97;
                            else if (valuta == 'i')
                                gotovina *= 1.96;
                            TestG = gotovina;
                            sec = 0;
                            while (TestG > 0)
                            {
                                TestG /= 10;
                                sec++;
                            }

                            cout << "\n Priložite novac.";
                            cout.flush();
                            sleep(3);
                            cout << "\n\n Prebrojavanje u toku";
                            cout.flush();
                            sleep(sec);
                            cout << " .";
                            cout.flush();
                            sleep(sec);
                            cout << " .";
                            cout.flush();
                            sleep(sec);
                            cout << " .";
                            cout.flush();
                            sleep(3);
                            printf("\n\n Stanje vaseg racuna je: %.2f €", stanjeracuna[klijenti]);
                            pauziraj();
                            system("clear");
                            break;
                        }
                        else if (odabirtransakcije == 'b')
                        {
                            printf("\n Novce sa racuna prebacujete na karticu %.2f\n Unesite svotu novca koju zelite isplatiti (Kn): ", stanjeracuna[klijenti]);
                            for (i = 1; i > 0; i++)
                            {
                                cin >> kartica;
                                printf("\n\n Odaberite valutu u kojoj zelite isplatiti novac: a) Euro (%.2f EUR)\n\t\t\t\t\t\t\t\t\t\t\t\t  b) Funte (%.2f GBP)\n\t\t\t\t\t\t\t\t\t\t\t\t  c) Danske krune (%.2f DKK)\n\t\t\t\t\t\t\t\t\t\t\t\t  d) Poljski zlot (%.2f PLN)\n\t\t\t\t\t\t\t\t\t\t\t\t  e) Norveska kruna (%.2f NOK)\n\t\t\t\t\t\t\t\t\t\t\t\t  f) Hrvatska kuna (%.2f HRK)\n\t\t\t\t\t\t\t\t\t\t\t\t  g) Svicarski franak (%.2f HUF)\n\t\t\t\t\t\t\t\t\t\t\t\t  h) Americki dolar (%.2f USD)\n\t\t\t\t\t\t\t\t\t\t\t\t  i) Konvertibilna marka (%.2f KM)\n\t\t\t\t\t\t\t\t\t\t\t\t  j) Povratak\n\n\t\t\t\t\t\t\t\t\t\t  Odabir: ", kartica * 0.1329, kartica * 0.1135, kartica * 0.9888, kartica * 0.6126, kartica * 1.3583, kartica, kartica * 0.1381, kartica * 0.1398, kartica * 0.2583);
                                for (i = 1; i > 0; i++)
                                {
                                    iskoristeno = 1;
                                    cin >> valuta;
                                    if (valuta == 'a')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'b')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'c')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'd')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'e')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'f')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'g')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'h')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'i')
                                    {
                                        for (i = 1; i > 0; i++)
                                        {
                                            if ((stanjeracuna[klijenti] - kartica) < 0)
                                            {
                                                cout << "\n Ne mozete ici u minus pokusajte ponovo: ";
                                                break;
                                            }
                                            iskoristeno = 0;
                                            stanjeracuna[klijenti] -= kartica;
                                            break;
                                        }
                                    }
                                    else if (valuta == 'j')
                                        break;
                                    else
                                    {
                                        cout << "\n Unesite jednu od ponuđenih valuta: ";
                                    }
                                    break;
                                }
                                if (valuta == 'b')
                                    kartica *= 0.86;
                                else if (valuta == 'c')
                                    kartica *= 1.08;
                                else if (valuta == 'd')
                                    kartica *= 4.52;
                                else if (valuta == 'e')
                                    kartica *= 371.02;
                                else if (valuta == 'f')
                                    kartica *= 117.22;
                                else if (valuta == 'g')
                                    kartica *= 0.98;
                                else if (valuta == 'h')
                                    kartica *= 4.97;
                                else if (valuta == 'i')
                                    kartica *= 1.96;
                                TestG = kartica;
                                sec = 0;
                                while (TestG > 0)
                                {
                                    TestG /= 10;
                                    sec++;
                                }

                                cout << "\n Priložite novac.";
                                cout.flush();
                                sleep(3);
                                cout << "\n\n Prebrojavanje u toku";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(sec);
                                cout << " .";
                                cout.flush();
                                sleep(3);
                                printf("\n\n Stanje vaseg racuna je: %.2f €", stanjeracuna[klijenti]);
                                pauziraj();
                                system("clear");
                                break;
                            }
                            break;
                        }
                    }
                }
                else if (odabirtransakcije == 'c') /// CRYPTO
                {
                    system("clear");
                    for (;;) {
                        cout << "\n\n Pratite cijene kriptovaluta sa nama!\n\n\n";
                        for (i = 0; i < 10; i++) {
                            for (j = 0; j < 3; j++) {
                                if (i == 0 && j == 0) {
                                    cout << "  Crypto   |";
                                }
                                if (i == 0 && j == 1) {
                                    cout << "   Oznaka   |";
                                }
                                if (i == 0 && j == 2) {
                                    cout << "   Vrijednost";
                                }
                                if (i == 1 && j == 0) {
                                    cout << "\n Bitcoin";
                                }
                                if (i == 2 && j == 0) {
                                    cout << " Binance Coin";
                                }
                                if (i == 3 && j == 0) {
                                    cout << " Litecoin";
                                }
                                if (i == 4 && j == 0) {
                                    cout << " DigixDAO";
                                }
                                if (i == 5 && j == 0) {
                                    cout << " DASH";
                                }
                                if (i == 6 && j == 0) {
                                    cout << " Zlajacoin";
                                }
                                if (i == 7 && j == 0) {
                                    cout << " Ethereum";
                                }
                                if (i == 8 && j == 0) {
                                    cout << " Binance USD";
                                }
                                if (i == 9 && j == 0) {
                                    cout << " USD Coin";
                                }
                                if (i == 1 && j == 1) {
                                    cout << "         BTC";
                                }
                                if (i == 2 && j == 1) {
                                    cout << "    BNB";
                                }
                                if (i == 3 && j == 1) {
                                    cout << "        LTC";
                                }
                                if (i == 4 && j == 1) {
                                    cout << "        DGD";
                                }
                                if (i == 5 && j == 1) {
                                    cout << "            DASH";
                                }
                                if (i == 6 && j == 1) {
                                    cout << "       ZLC";
                                }
                                if (i == 7 && j == 1) {
                                    cout << "        ETH";
                                }
                                if (i == 8 && j == 1) {
                                    cout << "     BUSD";
                                }
                                if (i == 9 && j == 1) {
                                    cout << "        USDC";
                                }
                                if (i == 1 && j == 2) {
                                    srand(time(0));
                                    BTC = rand() % (28000 - 22000) + 22000; //max 28000 min 22000
                                    korisnik1 = BTC;
                                    korisnik_1 = BTC;
                                    cout << "        " << BTC << " €";
                                    crypto.open("Crypto.bin", ios::binary | ios::out);
                                    crypto.write(reinterpret_cast<char*>(&korisnik1), sizeof(korisnik1));
                                    crypto.close();
                                }
                                if (i == 2 && j == 2) {
                                    srand(time(0));
                                    BNB = rand() % (310 - 250) + 250; //max 310 min 250
                                    korisnik2 = BNB;
                                    cout << "        " << BNB << " €";
                                    crypto.open("Crypto.bin", ios::binary | ios::out);
                                    crypto.write(reinterpret_cast<char*>(&korisnik2), sizeof(korisnik2));
                                    crypto.close();
                                }
                                if (i == 3 && j == 2) {
                                    srand(time(0));
                                    LTC = rand() % (90 - 70) + 70; //max 90 min 70
                                    korisnik3 = LTC;
                                    cout << "        " << LTC << " €";
                                    crypto.open("Crypto.bin", ios::binary | ios::out);
                                    crypto.write(reinterpret_cast<char*>(&korisnik3), sizeof(korisnik3));
                                    crypto.close();
                                }
                                if (i == 4 && j == 2) {
                                    srand(time(0));
                                    DGD = rand() % (80 - 60) + 60; //max 80 min 60
                                    korisnik4 = DGD;
                                    cout << "        " << DGD << " €";
                                    crypto.open("Crypto.bin", ios::binary | ios::out);
                                    crypto.write(reinterpret_cast<char*>(&korisnik4), sizeof(korisnik4));
                                    crypto.close();
                                }
                                if (i == 5 && j == 2) {
                                    srand(time(0));
                                    DASH = rand() % (50 - 30) + 30; //max 50  min 30
                                    korisnik5 = DASH;
                                    cout << "       " << DASH << " €";
                                    crypto.open("Crypto.bin", ios::binary | ios::out);
                                    crypto.write(reinterpret_cast<char*>(&korisnik5), sizeof(korisnik5));
                                    crypto.close();
                                }
                                if (i == 6 && j == 2) {
                                    srand(time(0));
                                    ZLC = rand() % (30 - 20) + 20; //max 30 min 20
                                    korisnik6 = ZLC;
                                    cout << "        " << ZLC << " €";
                                    crypto.open("Crypto.bin", ios::binary | ios::out);
                                    crypto.write(reinterpret_cast<char*>(&korisnik6), sizeof(korisnik6));
                                    crypto.close();
                                }
                                if (i == 7 && j == 2) {
                                    srand(time(0));
                                    ETC = rand() % (20 - 14) + 14; //max 20 min 14
                                    korisnik7 = ETC;
                                    cout << "        " << ETC << " €";
                                    crypto.write(reinterpret_cast<char*>(&korisnik7), sizeof(korisnik7));
                                    crypto.close();
                                }
                                if (i == 8 && j == 2) {
                                    srand(time(0));
                                    BUSD = rand() % (8 - 4) + 4; // max 8 min 4
                                    korisnik8 = BUSD;
                                    cout << "       " << BUSD << " €";
                                    crypto.write(reinterpret_cast<char*>(&korisnik8), sizeof(korisnik8));
                                    crypto.close();
                                }
                                if (i == 9 && j == 2) {
                                    srand(time(0));
                                    USDC = rand() % (5 - 3) + 3; //max 5 min 3
                                    korisnik9 = USDC;
                                    cout << "       " << USDC << " €";
                                    crypto.write(reinterpret_cast<char*>(&korisnik9), sizeof(korisnik9));
                                    crypto.close();
                                }

                            }
                            cout << "\n";
                        }

                        for (i = 1; i > 0; i++) {
                            cout << "\n\n Unesite 0 ako zelite izaci \n Unesite 1 ako zelite refresh:\n :";
                            cin >> cryptobroj;
                            if (cryptobroj == 0) {
                                system("clear");
                                break;
                            }
                            else if (cryptobroj == 1)
                            {
                                crypto.open("Crypto.bin", ios::binary | ios::out | ios::trunc);
                                crypto.close();
                                cout << "\n Dohvaćanje novih podataka";
                                cout.flush();
                                sleep(2);
                                cout << " .";
                                cout.flush();
                                sleep(2);
                                cout << " .";
                                cout.flush();
                                sleep(2);
                                cout << " .";
                                cout.flush();
                                sleep(1);
                                system("clear");
                                break;
                            }
                            crypto.close();

                            crypto.open("Crypto.bin", ios::binary | ios::in);
                            for (i = 0; i < 10; i++)
                            {
                                for (j = 0; j < 3; j++)
                                {
                                    if (i == 0 && j == 0) {
                                        cout << "  Crypto   |";
                                    }
                                    if (i == 0 && j == 1) {
                                        cout << "   Oznaka   |";
                                    }
                                    if (i == 0 && j == 2) {
                                        cout << "   Vrijednost";
                                    }
                                    if (i == 1 && j == 0) {
                                        cout << "\n Bitcoin";
                                    }
                                    if (i == 2 && j == 0) {
                                        cout << " Binance Coin";
                                    }
                                    if (i == 3 && j == 0) {
                                        cout << " Litecoin";
                                    }
                                    if (i == 4 && j == 0) {
                                        cout << " DigixDAO";
                                    }
                                    if (i == 5 && j == 0) {
                                        cout << " DASH";
                                    }
                                    if (i == 6 && j == 0) {
                                        cout << " Zlajacoin";
                                    }
                                    if (i == 7 && j == 0) {
                                        cout << " Ethereum";
                                    }
                                    if (i == 8 && j == 0) {
                                        cout << " Binance USD";
                                    }
                                    if (i == 9 && j == 0) {
                                        cout << " USD Coin";
                                    }
                                    if (i == 1 && j == 1) {
                                        cout << "         BTC";
                                    }
                                    if (i == 2 && j == 1) {
                                        cout << "    BNB";
                                    }
                                    if (i == 3 && j == 1) {
                                        cout << "        LTC";
                                    }
                                    if (i == 4 && j == 1) {
                                        cout << "        DGD";
                                    }
                                    if (i == 5 && j == 1) {
                                        cout << "            DASH";
                                    }
                                    if (i == 6 && j == 1) {
                                        cout << "       ZLC";
                                    }
                                    if (i == 7 && j == 1) {
                                        cout << "        ETH";
                                    }
                                    if (i == 8 && j == 1) {
                                        cout << "     BUSD";
                                    }
                                    if (i == 9 && j == 1) {
                                        cout << "        USDC";
                                    }
                                    if (i == 1 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik1), sizeof(korisnik1));
                                        cout << "        " << korisnik_1 << " €";
                                    }
                                    if (i == 2 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik2), sizeof(korisnik2));
                                        cout << "        " << korisnik2 << " €";
                                    }
                                    if (i == 3 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik3), sizeof(korisnik3));
                                        cout << "        " << korisnik3 << " €";
                                    }
                                    if (i == 4 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik4), sizeof(korisnik4));
                                        cout << "        " << korisnik4 << " €";
                                    }
                                    if (i == 5 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik5), sizeof(korisnik5));
                                        cout << "       " << korisnik5 << " €";
                                    }
                                    if (i == 6 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik6), sizeof(korisnik6));
                                        cout << "        " << korisnik6 << " €";
                                    }
                                    if (i == 7 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik7), sizeof(korisnik7));
                                        cout << "        " << korisnik7 << " €";
                                    }
                                    if (i == 8 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik8), sizeof(korisnik8));
                                        cout << "       " << korisnik8 << " €";
                                    }
                                    if (i == 9 && j == 2) {
                                        crypto.read(reinterpret_cast<char*>(&korisnik9), sizeof(korisnik9));
                                        cout << "       " << korisnik9 << " €";
                                    }


                                }
                                cout << "\n";
                            }

                            crypto.close();
                            if (cryptobroj == 0)
                                break;
                        }
                        if (cryptobroj == 0)
                            break;
                    }
                    crypto.close();
                }
                else if (odabirtransakcije == 'd') /// ULAGANJE
                {
                    cout << "\n Ulazete novac u štedionicu\n Kamatna stopa na štednju banke je 1,5%\n Ukoliko se želite vratiti nazad unesite 0\n Unesite koliku svotu želite uložiti u štedionicu: ";
                    for (i = 1; i > 0; i++)
                    {
                        for (i = 1; i > 0; i++)
                        {
                            cin >> stedionica;
                            if (stedionica == 0)
                                break;
                            else if ((stanjeracuna[klijenti] - stedionica) < 0)
                                cout << "\n Ne možete ići u minus pokušajte ponovno: ";
                            else
                                break;
                        }
                        cout << "\n\t";
                        if (stedionica > 0 && stedionica < 1000)
                        {
                            for (i = 0; i < 5; i++)
                            {
                                for (j = 0; j < 5; j++)
                                {
                                    if (i == 0 && j == 1)
                                    {
                                        cout << "|";
                                        cout << " Godine ";
                                    }
                                    if (i == 0 && j == 2)
                                    {
                                        cout << "|";
                                        cout << " Ulozeno ";
                                    }
                                    if (i == 0 && j == 3)
                                    {
                                        cout << "| Zarada ";
                                    }
                                    if (i == 0 && j == 4)
                                    {
                                        cout << "| Ukupna zarada ";
                                    }
                                    if (i == 1 && j == 0)
                                    {
                                        cout << " \na)";
                                    }
                                    if (i == 2 && j == 0)
                                    {
                                        cout << " \nb)";
                                    }
                                    if (i == 3 && j == 0)
                                    {
                                        cout << " \nc)";
                                    }
                                    if (i == 4 && j == 0)
                                    {
                                        cout << " \nd)";
                                    }
                                    if (i == 1 && j == 1)
                                    {
                                        cout << "\t\t1";
                                    }
                                    if (i == 2 && j == 1)
                                    {
                                        cout << "\t\t2";
                                    }
                                    if (i == 3 && j == 1)
                                    {
                                        cout << "\t\t5";
                                    }
                                    if (i == 4 && j == 1)
                                    {
                                        cout << "\t\t10";
                                    }
                                    if (i == 1 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 2 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 3 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 4 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 1 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 1;
                                        printf("\t  %.2f", stedzarada);
                                    }
                                    if (i == 2 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 2;
                                        printf("\t  %.2f", stedzarada);
                                    }
                                    if (i == 3 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 5;
                                        printf("\t  %.2f", stedzarada);
                                    }
                                    if (i == 4 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 10;
                                        printf("\t  %.2f", stedzarada);
                                    }
                                    if (i == 1 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t %.2f", steduk);
                                    }
                                    if (i == 2 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t %.2f", steduk);
                                    }
                                    if (i == 3 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t %.2f", steduk);
                                    }
                                    if (i == 4 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t %.2f", steduk);
                                    }
                                }
                                printf("\n");
                            }
                            break;
                        }
                        else if (stedionica >= 1000 && stedionica < 10000)
                        {
                            for (i = 0; i < 5; i++)
                            {
                                for (j = 0; j < 5; j++)
                                {
                                    if (i == 0 && j == 1)
                                    {
                                        cout << "|";
                                        cout << " Godine ";
                                    }
                                    if (i == 0 && j == 2)
                                    {
                                        cout << "|";
                                        cout << "  Ulozeno  ";
                                    }
                                    if (i == 0 && j == 3)
                                    {
                                        cout << "|  Zarada  ";
                                    }
                                    if (i == 0 && j == 4)
                                    {
                                        cout << "|  Ukupno  ";
                                    }
                                    if (i == 1 && j == 0)
                                    {
                                        cout << " \na)";
                                    }
                                    if (i == 2 && j == 0)
                                    {
                                        cout << " \nb)";
                                    }
                                    if (i == 3 && j == 0)
                                    {
                                        cout << " \nc)";
                                    }
                                    if (i == 4 && j == 0)
                                    {
                                        cout << " \nd)";
                                    }
                                    if (i == 1 && j == 1)
                                    {
                                        cout << "\t\t1";
                                    }
                                    if (i == 2 && j == 1)
                                    {
                                        cout << "\t\t2";
                                    }
                                    if (i == 3 && j == 1)
                                    {
                                        cout << "\t\t5";
                                    }
                                    if (i == 4 && j == 1)
                                    {
                                        cout << "\t\t10";
                                    }
                                    if (i == 1 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 2 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 3 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 4 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 1 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 1;
                                        printf("\t\t%.2f", stedzarada);
                                    }
                                    if (i == 2 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 2;
                                        printf("\t\t%.2f", stedzarada);
                                    }
                                    if (i == 3 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 5;
                                        printf("\t\t%.2f", stedzarada);
                                    }
                                    if (i == 4 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 10;
                                        printf("\t\t%.2f", stedzarada);
                                    }
                                    if (i == 1 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 2 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 3 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 4 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                }
                                cout << "\n";
                            }
                            break;
                        }
                        else if (stedionica >= 10000 && stedionica < 100000)
                        {
                            for (i = 0; i < 5; i++)
                            {
                                for (j = 0; j < 5; j++)
                                {
                                    if (i == 0 && j == 1)
                                    {
                                        cout << "|";
                                        cout << " Godine ";
                                    }
                                    if (i == 0 && j == 2)
                                    {
                                        cout << "|";
                                        cout << "   Ulozeno   ";
                                    }
                                    if (i == 0 && j == 3)
                                    {
                                        cout << "|   Zarada   ";
                                    }
                                    if (i == 0 && j == 4)
                                    {
                                        cout << "|   Ukupno   ";
                                    }
                                    if (i == 1 && j == 0)
                                    {
                                        cout << " \na)";
                                    }
                                    if (i == 2 && j == 0)
                                    {
                                        cout << " \nb)";
                                    }
                                    if (i == 3 && j == 0)
                                    {
                                        cout << " \nc)";
                                    }
                                    if (i == 4 && j == 0)
                                    {
                                        cout << " \nd)";
                                    }
                                    if (i == 1 && j == 1)
                                    {
                                        cout << "\t\t1";
                                    }
                                    if (i == 2 && j == 1)
                                    {
                                        cout << "\t\t2";
                                    }
                                    if (i == 3 && j == 1)
                                    {
                                        cout << "\t\t5";
                                    }
                                    if (i == 4 && j == 1)
                                    {
                                        cout << "\t\t10";
                                    }
                                    if (i == 1 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 2 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 3 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 4 && j == 2)
                                    {
                                        printf("\t\t%.2f", stedionica);
                                    }
                                    if (i == 1 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 1;
                                        printf("\t   %.2f", stedzarada);
                                    }
                                    if (i == 2 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 2;
                                        printf("\t   %.2f", stedzarada);
                                    }
                                    if (i == 3 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 5;
                                        printf("\t   %.2f", stedzarada);
                                    }
                                    if (i == 4 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 10;
                                        printf("\t   %.2f", stedzarada);
                                    }
                                    if (i == 1 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 2 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 3 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 4 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                }
                                cout << "\n";
                            }
                            break;
                        }
                        else if (stedionica >= 100000 && stedionica < 1000000)
                        {
                            for (i = 0; i < 5; i++)
                            {
                                for (j = 0; j < 5; j++)
                                {
                                    if (i == 0 && j == 1)
                                    {
                                        cout << "|";
                                        cout << " Godine ";
                                    }
                                    if (i == 0 && j == 2)
                                    {
                                        cout << "|";
                                        cout << "    Ulozeno    ";
                                    }
                                    if (i == 0 && j == 3)
                                    {
                                        cout << "|    Zarada    ";
                                    }
                                    if (i == 0 && j == 4)
                                    {
                                        cout << "|    Ukupno    ";
                                    }
                                    if (i == 1 && j == 0)
                                    {
                                        cout << " \na)";
                                    }
                                    if (i == 2 && j == 0)
                                    {
                                        cout << " \nb)";
                                    }
                                    if (i == 3 && j == 0)
                                    {
                                        cout << " \nc)";
                                    }
                                    if (i == 4 && j == 0)
                                    {
                                        cout << " \nd)";
                                    }
                                    if (i == 1 && j == 1)
                                    {
                                        cout << "\t\t1";
                                    }
                                    if (i == 2 && j == 1)
                                    {
                                        cout << "\t\t2";
                                    }
                                    if (i == 3 && j == 1)
                                    {
                                        cout << "\t\t5";
                                    }
                                    if (i == 4 && j == 1)
                                    {
                                        cout << "\t\t10";
                                    }
                                    if (i == 1 && j == 2)
                                    {
                                        printf("\t\t %.2f", stedionica);
                                    }
                                    if (i == 2 && j == 2)
                                    {
                                        printf("\t\t %.2f", stedionica);
                                    }
                                    if (i == 3 && j == 2)
                                    {
                                        printf("\t\t %.2f", stedionica);
                                    }
                                    if (i == 4 && j == 2)
                                    {
                                        printf("\t\t %.2f", stedionica);
                                    }
                                    if (i == 1 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 1;
                                        printf("\t\t  %.2f", stedzarada);
                                    }
                                    if (i == 2 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 2;
                                        printf("\t\t  %.2f", stedzarada);
                                    }
                                    if (i == 3 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 5;
                                        printf("\t\t  %.2f", stedzarada);
                                    }
                                    if (i == 4 && j == 3)
                                    {
                                        stedzarada = stedionica * kszs * 10;
                                        printf("\t\t  %.2f", stedzarada);
                                    }
                                    if (i == 1 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 2 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 3 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                    if (i == 4 && j == 4)
                                    {
                                        steduk = stedzarada + stedionica;
                                        printf("\t\t  %.2f", steduk);
                                    }
                                }
                                printf("\n");
                            }
                            break;
                        }
                        else if (stedionica == 0)
                        {
                            pauziraj();
                            system("clear");
                            break;
                        }

                        else
                            cout << "\n\n Najveca svota je 999999 pokušajte ponovno: ";
                    }
                    if (stedionica == 0)
                        break;
                    cout << "\n Odaberite opciju koju zelite: ";
                    cin >> opcijaulog;
                    if (opcijaulog == 'a')
                    {
                        printf("\n U štedilicu ste stavili %.2f €, na 1 godinu!", stedionica);
                        stanjeracuna[klijenti] -= stedionica;
                        printf("\n Stanje vašeg računa je %.2f €", stanjeracuna[klijenti]);
                    }
                    else if (opcijaulog == 'b')
                    {
                        printf("\n U štedilicu ste stavili %.2f €, na 2 godine!", stedionica);
                        stanjeracuna[klijenti] -= stedionica;
                        printf("\n Stanje vašeg računa je %.2f €", stanjeracuna[klijenti]);
                    }
                    else if (opcijaulog == 'c')
                    {
                        printf("\n U štedilicu ste stavili %.2f €, na 5 godina!", stedionica);
                        stanjeracuna[klijenti] -= stedionica;
                        printf("\n Stanje vašeg računa je %.2f €", stanjeracuna[klijenti]);
                    }
                    else if (opcijaulog == 'd')
                    {
                        printf("\n U štedilicu ste stavili %.2f €, na 10 godina!", stedionica);
                        stanjeracuna[klijenti] -= stedionica;
                        printf("\n Stanje vašeg računa je %.2f €", stanjeracuna[klijenti]);
                    }
                    pauziraj();
                    system("clear");
                }
                else if (odabirtransakcije == 'e')
                {
                    unsigned long long int OIBzaPrebacivanje;
                    double SvotaZaPrebacivanje;
                    int flag5 = 0;
                    cout << endl << " Upišite OIB na koji želite prebaciti novac: ";
                    cin >> OIBzaPrebacivanje;



                    penezi.open("Novci.txt", ios::in);
                    for (int k = 0; k < brojkica; k++)
                    {
                        penezi >> brojk;
                        penezi >> RezervaOIBM[k];
                        penezi >> stanjeracunaM[k];
                    }
                    for (int k = brojkica - 1; k >= 0; k--)
                    {
                        penezi >> brojk;
                        penezi >> RezervaOIBM[k];
                        penezi >> stanjeracunaM[k];

                        if (OIBzaPrebacivanje == RezervaOIBM[k])
                        {
                            penezi.close();

                            cout << endl << " Upišite Svotu koju prebacujete: ";
                            cin >> SvotaZaPrebacivanje;
                            stanjeracuna[klijenti] -= SvotaZaPrebacivanje;

                            stanjeracunaM[k] += SvotaZaPrebacivanje;

                            penezi.open("Novci.txt", ios::out | ios::app);
                            penezi << brojkica << " " << OIBzaPrebacivanje << " " << stanjeracunaM[k] << endl;
                            penezi.close();



                            flag5 = 1;
                            pauziraj();
                            system("clear");
                            break;
                        }
                    }
                    if (flag5 == 0)
                    {
                        cout << endl << " U našem sistemu ne postoji osoba sa navedenim OIB-om: ";
                    }
                    penezi.close();
                }
                else if (odabirtransakcije == 'f')
                {
                    logout = 1;
                    trebacin = 1;
                    break;
                }
                else
                {
                    system("clear");
                    cout << endl << "Pokušajte ponovno:" << endl;
                }
                break;
            }
            if (logout == 1)
            {
                system("clear");
                break;
            }
        }

    }
    return 0;
}