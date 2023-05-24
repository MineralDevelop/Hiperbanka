#include <iostream>
#include<string>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
#include <time.h>
int main()
{
	double gotovina, kartica, stanjeracuna = 0, novac_za_kredit, stopa, kszs = 0.015, stedionica, stedzarada, BUSD, BTC, ETC, ZLC, LTC, BNB, DASH, USDC, DGD, steduk;
	unsigned long long int OIB, RezervaOIB;
	char a, b, c, d, e, odabir, odabirtrnsakcije, valuta, opcijaulog;
	int i, j, OIBtocan = 1, meduostatak, svota, KontrolnaZnmOIB, Zakljucavanje, Slovapostoje, iskoristeno, brojac, z1, z2, z3, z4, z5, z6, z7, z8, z9, z10, z11, cryptobroj;
    int test = 1;
	int BrojeviZaOIB[11];
	double kripto[10][3];
	double stediona[5][5];
	string* imeprezime = new string[1000];
	int izbor;
	int brojkorisnika = 0;
	while (1) 
	{
		cin >> izbor;
		if(izbor==1)
		{
		 cin.ignore();
		 cout << "Unesite ime i prezime:" << endl;
		 getline(cin, imeprezime[brojkorisnika]);
		 cout << "Unesite vas OIB:"
			 cin >> OIB;

		}
        RezervaOIB = OIB;
        for (Zakljucavanje = 1; Zakljucavanje < 3; Zakljucavanje++) // PROVJERA OIBA 
        {
            RezervaOIB = OIB;
            OIBtocan = 1;
            z1 = OIB % 10;
            OIB = OIB / 10;
            z2 = OIB % 10;
            OIB = OIB / 10;
            z3 = OIB % 10;
            OIB = OIB / 10;
            z4 = OIB % 10;
            OIB = OIB / 10;
            z5 = OIB % 10;
            OIB = OIB / 10;
            z6 = OIB % 10;
            OIB = OIB / 10;
            z7 = OIB % 10;
            OIB = OIB / 10;
            z8 = OIB % 10;
            OIB = OIB / 10;
            z9 = OIB % 10;
            OIB = OIB / 10;
            z10 = OIB % 10;
            OIB = OIB / 10;
            z11 = OIB % 10;

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
                        printf("\n Opss, OIB nije ispravan. Pokusajte ponovno: ");
                        cin>>OIB;
                    }
                }
                else if (11 - meduostatak == 11)
                {
                    meduostatak = 1;
                    if (meduostatak == z1)
                        break;
                    else
                    {
                        cout<<"\n Opss, OIB nije ispravan. Pokusajte ponovno: ";
                        cin>>OIB;
                    }
                }
                else
                    break;
            }
            else if (11 - meduostatak == z1)
                break;
            else
            {
                cout"\n Opss, OIB nije ispravan. Pokusajte ponovno: ";
                cin>>OIB;
            }


            if (Zakljucavanje == 2)
            {
                cout"\n Vas racun je blokiran na 24 sata, broj neuspjelih pokusaja : 3";
                return 0;
            }
        }
        if (OIBtocan == 1) /// OSOBNI PODATCI
        {
            cout"\n Dobrodosli u ZlajaCash banku\n\n\n\n";
            cout"\n Uspjesno ste ulogirani\n\n";
            cout" Ime: %s\n"<<ime;
            cout" Prezime:"<<prezime";
            cout" Vas OIB je:"<<RezervaOIB;
            cout << "Stanje vasega racuna je: "<<stanjeracuna<<"kn"<<endl;
        }
	}
}