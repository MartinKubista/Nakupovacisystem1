#include <iostream>
#include <fstream>
#include<string>
#include <cmath>
#include <ctime>

using namespace std;
int c = 0;
int b = 0;
string potraviny[15] = {};
string novepotraviny[15] = {};
int kg1[15] = {};
int novekg1[15] = {};
double prvacena[15] = {};
double druhacena[15] = {};
double cena = 0.0;


void tvojzoznammoznost()
{
    for (int i = 0; i <= b; i++)
    {
        cout << i + 1 << ". " << potraviny[i] << " Pocet kusov: " << kg1[i] << " Cena je: " << prvacena[i] << " €" << "\n";

    }
    b = 1 + b;
    cout << "----------------------------------------------\n";
    cout << "Cena: " << cena << "€" << endl;
    cout << "----------------------------------------------\n";
}


void tvojzoznam()
{
    cout << "Tvoj zoznam" << endl;
    for (int i = 0; i < b; i++)
    {
        cout << i + 1 << ". " << potraviny[i] << " Pocet kusov: " << kg1[i] << " Cena je: " << prvacena[i] << " €" << "\n";

    }
    cout << "----------------------------------------------\n";
    cout << "Cena: " << cena << "€" << endl;
    cout << "----------------------------------------------\n";
}


void vymena()
{
    for (int i = 0; i < 15; i++)
    {
        if (potraviny[i] != " ")
        {
            novepotraviny[c] = potraviny[i];
            novekg1[c] = kg1[i];
            druhacena[c] = prvacena[i];
            c++;

        }
    }
    for (int i = 0; i < 15; i++)
    {
        potraviny[i] = novepotraviny[i];
        kg1[i] = novekg1[i];
        prvacena[i] = druhacena[i];

    }
    b = b - 1;
}


int main(){
    double ncena;
    int moznost = 0;
    int o, odstranenie, miesto, kg2, kg;
    double kgc = 0.0;
    ifstream zacatek;
    do
    {
        zacatek.open("zacatek.txt");
        cout << zacatek.rdbuf() << endl;
        zacatek.close();
        cin.get();
        system("CLS");
        tvojzoznam();
        while (cout << "1. Pridaj\n2. Odober\n3. Skonci\n" && !(cin >> moznost))
        {
            system("CLS");
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Mas zadat cislo\n";
        }
        
        system("CLS");

        switch (moznost)
        {
        case  1:
            
            cout << "1. Ovocie\n2. Zelenina\n3. Pecivo\n4. Napoje\n5. Mliecne vyrobky a vajcia\n6. Trvanlive potraviny\n";
            cin >> miesto;

            system("CLS");

            switch(miesto)
            {
            case 1:
                cout << "1. Banany 1 kg__1,29€" << endl;
                cout << "2. Pomarance 1 kg__1,69€" << endl;
                cout << "3. Citrony 1 kg__1,99€" << endl;
                cout << "4. Jablka 1 kg__1,29€" << endl;
                cout << "5. Hrozno 1 kg__1,99€" << endl;
                cout << "6. Avokado 1 kg__1,49€" << endl;
                cout << "7. Kiwi 1 kg__2,29€" << endl;

                while (cout << "Zadaj cislo riadku\n" && !(cin >> kg2))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }
                if (kg2 == 1) {
                    potraviny[b] = "Banany 1 kg";
                }
                else if (kg2 == 2) {
                    potraviny[b] = "Pomarance 1 kg";
                }
                else if (kg2 == 3) {
                    potraviny[b] = "Citrony 1 kg";
                }
                else if (kg2 == 4) {
                    potraviny[b] = "Jablka 1 kg";
                }
                else if (kg2 == 5) {
                    potraviny[b] = "Hrozno 1 kg";
                }
                else if (kg2 == 6) {
                    potraviny[b] = "Avokado 1 kg";
                }
                else if (kg2 == 7) {
                    potraviny[b] = "Kiwi 1 kg";
                }
                else {
                    cout << "Zle cislo\n";
                }


                while (cout << "Kolko kusov\n" && !(cin >> kg))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }
                
                kgc = (double)kg;

                switch (kg2)
                {
                case 1:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;
                    
                case 2:
                    ncena = 1.69 * kgc;
                    cena = cena + ncena;
                    break;
                    
                case 3:
                    ncena = 1.99 * kgc;
                    cena = cena + ncena;
                    break;
                    
                case 4:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;
                    
                case 5:
                    ncena = 1.99 * kgc;
                    cena = cena + ncena;
                    break;
                    
                case 6:
                    ncena = 1.49 * kgc;
                    cena = cena + ncena;
                    break;
                    
                case 7:
                    ncena = 2.29 * kgc;
                    cena = cena + ncena;
                    break;

                default:
                    cout << "Zle cislo\n";
                  
                }

                kg1[b] = kg;
                prvacena[b] = ncena;
                system("CLS");
                cin.get();
                tvojzoznammoznost();
                cin.get();
                system("CLS");
              
                break;

            case 2:
                cout << "1. Cibula 1 kg__0,79€" << endl;
                cout << "2. Mrkva 1 kg__0,69€" << endl;
                cout << "3. Zemiaky 1 kg__0,80€" << endl;
                cout << "4. Paprika 1 kg__1,29€" << endl;
                cout << "5. Paradajky 1 kg__1,99€" << endl;
                cout << "6. Cesnak 1 kg__2,49€" << endl;
                cout << "7. Kapusta biela 1 kg__0,59€" << endl;

                while (cout << "Zadaj cislo riadku\n" && !(cin >> kg2))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                if (kg2 == 1) {
                    potraviny[b] = "Cibula 1 kg";
                }
                else if (kg2 == 2) {
                    potraviny[b] = "Mrkva 1 kg";
                }
                else if (kg2 == 3) {
                    potraviny[b] = "Zemiaky 1 kg";
                }
                else if (kg2 == 4) {
                    potraviny[b] = "Paprika 1 kg";
                }
                else if (kg2 == 5) {
                    potraviny[b] = "Paradajky 1 kg";
                }
                else if (kg2 == 6) {
                    potraviny[b] = "Cesnak 1 kg";
                }
                else if (kg2 == 7) {
                    potraviny[b] = "Kapusta biela 1 kg";
                }
                else {
                    cout << "Zle cislo\n";
                }

                while (cout << "Kolko kusov\n" && !(cin >> kg))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                kgc = (double)kg;

                switch (kg2)
                {
                case 1:
                    ncena = 0.79 * kgc;
                    cena = cena + ncena;
                    break;

                case 2:
                    ncena = 0.69 * kgc;
                    cena = cena + ncena;
                    break;

                case 3:
                    ncena = 0.80 * kgc;
                    cena = cena + ncena;
                    break;

                case 4:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;

                case 5:
                    ncena = 1.99 * kgc;
                    cena = cena + ncena;
                    break;

                case 6:
                    ncena = 2.49 * kgc;
                    cena = cena + ncena;
                    break;

                case 7:
                    ncena = 0.59 * kgc;
                    cena = cena + ncena;
                    break;

                default:
                    cout << "Zle cislo\n";

                }

                kg1[b] = kg;
                prvacena[b] = ncena;
                system("CLS");
                cin.get();
                tvojzoznammoznost();
                cin.get();
                system("CLS");
                break;

            case 3:
                cout << "1. Kajzerka cerealna 60 g__0,14€" << endl;
                cout << "2. Chlieb 1000 g__0,99€" << endl;
                cout << "3. Bageta svetla 50 g__0,11€" << endl;
                cout << "4. Kajzerka Natural 60 g__0,11€" << endl;
                cout << "5. Syrovy pagac 72 g__0,49€" << endl;
                cout << "6. Kornbageta 115 g__ 0,29€" << endl;
                cout << "7. Vianocka 350 g__1,29€" << endl;

                while (cout << "Zadaj cislo riadku\n" && !(cin >> kg2))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                if (kg2 == 1) {
                    potraviny[b] = "Kajzerka cerealna 60 g";
                }
                else if (kg2 == 2) {
                    potraviny[b] = "Chlieb 1000 g";
                }
                else if (kg2 == 3) {
                    potraviny[b] = "Bageta svetla 50 g";
                }
                else if (kg2 == 4) {
                    potraviny[b] = "Kajzerka Natural 60 g";
                }
                else if (kg2 == 5) {
                    potraviny[b] = "Syrovy pagac 72 g";
                }
                else if (kg2 == 6) {
                    potraviny[b] = "Kornbageta 115 g";
                }
                else if (kg2 == 7) {
                    potraviny[b] = "Vianocka 350 g";
                }
                else {
                    cout << "Zle cislo\n";
                }

                while (cout << "Kolko kusov\n" && !(cin >> kg))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                kgc = (double)kg;

                switch (kg2)
                {
                case 1:
                    ncena = 0.14 * kgc;
                    cena = cena + ncena;
                    break;

                case 2:
                    ncena = 0.99 * kgc;
                    cena = cena + ncena;
                    break;

                case 3:
                    ncena = 0.11 * kgc;
                    cena = cena + ncena;
                    break;

                case 4:
                    ncena = 0.11 * kgc;
                    cena = cena + ncena;
                    break;

                case 5:
                    ncena = 0.49 * kgc;
                    cena = cena + ncena;
                    break;

                case 6:
                    ncena = 0.29 * kgc;
                    cena = cena + ncena;
                    break;

                case 7:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;

                default:
                    cout << "Zle cislo\n";

                }

                kg1[b] = kg;
                prvacena[b] = ncena;
                system("CLS");
                cin.get();
                tvojzoznammoznost();
                cin.get();
                system("CLS");
                break;

            case 4:
                cout << "1. Rauch Happy Day 100% pomaranc 1 l__1,09€" << endl;
                cout << "2. Rauch Happy Day 100% jablko 1 l__1,09€" << endl;
                cout << "3. Rauch Happy Day 100% multivitamin 1 l__1,09€" << endl;
                cout << "4. Relax 100% cerveny grapefruit 1 l__1,49€" << endl;
                cout << "5. Kofola Original 2 l__1,29€" << endl;
                cout << "6. Coca-Cola, 2,25 l__1,49€" << endl;
                cout << "7. Vinea Biela 1,5 l__0,75€" << endl;
                cout << "8. Kinley Tonic Water 1,5 l__1,15€" << endl;

                while (cout << "Zadaj cislo riadku\n" && !(cin >> kg2))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                if (kg2 == 1) {
                    potraviny[b] = "Rauch Happy Day 100% pomaranc 1 l";
                }
                else if (kg2 == 2) {
                    potraviny[b] = "Rauch Happy Day 100% jablko 1 l";
                }
                else if (kg2 == 3) {
                    potraviny[b] = "Rauch Happy Day 100% multivitamin 1 l";
                }
                else if (kg2 == 4) {
                    potraviny[b] = "Relax 100% cerveny grapefruit 1 l";
                }
                else if (kg2 == 5) {
                    potraviny[b] = "Kofola Original 2 l";
                }
                else if (kg2 == 6) {
                    potraviny[b] = "Coca-Cola, 2,25 l";
                }
                else if (kg2 == 7) {
                    potraviny[b] = "Vinea Biela 1,5 l";
                }
                else if (kg2 == 8) {
                    potraviny[b] = "Kinley Tonic Water 1,5 l";
                }
                else {
                    cout << "Zle cislo\n";
                }

                while (cout << "Kolko kusov\n" && !(cin >> kg))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                kgc = (double)kg;

                switch (kg2)
                {
                case 1:
                    ncena = 1.09 * kgc;
                    cena = cena + ncena;
                    break;

                case 2:
                    ncena = 1.09 * kgc;
                    cena = cena + ncena;
                    break;

                case 3:
                    ncena = 1.09 * kgc;
                    cena = cena + ncena;
                    break;

                case 4:
                    ncena = 1.49 * kgc;
                    cena = cena + ncena;
                    break;

                case 5:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;

                case 6:
                    ncena = 1.49 * kgc;
                    cena = cena + ncena;
                    break;

                case 7:
                    ncena = 0.75 * kgc;
                    cena = cena + ncena;
                    break;
                case 8:
                    ncena = 1.15 * kgc;
                    cena = cena + ncena;
                    break;

                default:
                    cout << "Zle cislo\n";

                }

                kg1[b] = kg;
                prvacena[b] = ncena;
                system("CLS");
                cin.get();
                tvojzoznammoznost();
                cin.get();
                system("CLS");
                break;

            case 5:
                cout << "1. Rajo Mlieko plnotucne 1 l__0,99€" << endl;
                cout << "2. Vajcia L 10 ks__1,59€" << endl;
                cout << "3. Zvolensky Smotanovy jogurt biely 145 g__0,45€" << endl;
                cout << "4. Zvolensky Smotanovy jogurt jahoda 145 g__0,42€" << endl;
                cout << "5. Zvolensky Smotanovy jogurt stracciatella 145 g__0,42€" << endl;
                cout << "6. Zvolensky Smotanovy jogurt cokolada 145 g__0,42€" << endl;
                cout << "7. Tami Tatranske maslo 250 g__2,19€" << endl;

                while (cout << "Zadaj cislo riadku\n" && !(cin >> kg2))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                if (kg2 == 1) {
                    potraviny[b] = "Rajo Mlieko plnotucne 1 l";
                }
                else if (kg2 == 2) {
                    potraviny[b] = "Vajcia L 10 ks";
                }
                else if (kg2 == 3) {
                    potraviny[b] = "Zvolensky Smotanovy jogurt biely 145 g";
                }
                else if (kg2 == 4) {
                    potraviny[b] = "Zvolensky Smotanovy jogurt jahoda 145 g";
                }
                else if (kg2 == 5) {
                    potraviny[b] = "Zvolensky Smotanovy jogurt stracciatella 145 g";
                }
                else if (kg2 == 6) {
                    potraviny[b] = "Zvolensky Smotanovy jogurt cokolada 145 g";
                }
                else if (kg2 == 7) {
                    potraviny[b] = "Tami Tatranske maslo 250 g";
                }
                else {
                    cout << "Zle cislo\n";
                }

                while (cout << "Kolko kusov\n" && !(cin >> kg))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                kgc = (double)kg;

                switch (kg2)
                {
                case 1:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;

                case 2:
                    ncena = 1.69 * kgc;
                    cena = cena + ncena;
                    break;

                case 3:
                    ncena = 1.99 * kgc;
                    cena = cena + ncena;
                    break;

                case 4:
                    ncena = 1.29 * kgc;
                    cena = cena + ncena;
                    break;

                case 5:
                    ncena = 1.99 * kgc;
                    cena = cena + ncena;
                    break;

                case 6:
                    ncena = 1.49 * kgc;
                    cena = cena + ncena;
                    break;

                case 7:
                    ncena = 2.29 * kgc;
                    cena = cena + ncena;
                    break;

                default:
                    cout << "Zle cislo\n";

                }

                kg1[b] = kg;
                prvacena[b] = ncena;
                system("CLS");
                cin.get();
                tvojzoznammoznost();
                cin.get();
                system("CLS");
                break;

            case 6:
                cout << "1. Morska jedla sol jodovana jemna 1 kg__0,68€" << endl;
                cout << "2. Sweet Family Krystalovy cukor 1 kg__0,79€" << endl;
                cout << "3. Muka hladka__0,59€" << endl;
                cout << "4. Muka polohruba__0,59" << endl;
                cout << "5. Hearty Food spagety 500 g__0,39€" << endl;
                cout << "6. Bask Ryza lupana gulatozrnna 1 kg__1,59€" << endl;
                cout << "7. Palma Raciol Slnecnicovy olej 1 l__1,99€" << endl;

                while (cout << "Zadaj cislo riadku\n" && !(cin >> kg2))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                if (kg2 == 1) {
                    potraviny[b] = "Morska jedla sol jodovana jemna 1 kg";
                }
                else if (kg2 == 2) {
                    potraviny[b] = "Sweet Family Krystalovy cukor 1 kg";
                }
                else if (kg2 == 3) {
                    potraviny[b] = "Muka hladka";
                }
                else if (kg2 == 4) {
                    potraviny[b] = "Muka polohruba";
                }
                else if (kg2 == 5) {
                    potraviny[b] = "Hearty Food spagety 500 g";
                }
                else if (kg2 == 6) {
                    potraviny[b] = "Bask Ryza lupana gulatozrnna 1 kg";
                }
                else if (kg2 == 7) {
                    potraviny[b] = "Palma Raciol Slnecnicovy olej 1 l";
                }
                else {
                    cout << "Zle cislo\n";
                }

                while (cout << "Kolko kusov\n" && !(cin >> kg))
                {
                    system("CLS");
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Mas zadat cislo\n";
                }

                kgc = (double)kg;

                switch (kg2)
                {
                case 1:
                    ncena = 0.68 * kgc;
                    cena = cena + ncena;
                    break;

                case 2:
                    ncena = 0.79 * kgc;
                    cena = cena + ncena;
                    break;

                case 3:
                    ncena = 0.59 * kgc;
                    cena = cena + ncena;
                    break;

                case 4:
                    ncena = 0.59 * kgc;
                    cena = cena + ncena;
                    break;

                case 5:
                    ncena = 0.39 * kgc;
                    cena = cena + ncena;
                    break;

                case 6:
                    ncena = 1.59 * kgc;
                    cena = cena + ncena;
                    break;

                case 7:
                    ncena = 1.99 * kgc;
                    cena = cena + ncena;
                    break;

                default:
                    cout << "Zle cislo\n";

                }

                kg1[b] = kg;
                prvacena[b] = ncena;
                system("CLS");
                cin.get();
                tvojzoznammoznost();
                cin.get();
                system("CLS");


                break;

            default:
                cout << "Zadal si zle cislo" << endl;
          
            }
            break;
            
        case 2:
            do {
                tvojzoznam();
                cout << "Zadaj prvok na odstranenie\n";
                cin >> odstranenie;
                cena = cena - prvacena[odstranenie - 1];
                potraviny[odstranenie - 1] = " ";                      
                vymena();
                cout << "Chces odstranit dalsi prvok\n1 Ano\n2 Nie\n";
                cin >> o;
                system("CLS");

            } while (o == 1);

        }
        
    }while (moznost != 3);

    tvojzoznam();
    srand(time(NULL));
    double pc = (rand() % 6);
    cena = cena - ((cena / 100) * pc);
    cena = ceil(cena * 100.0) / 100.0;
    cout << "Otvor subor koniec.txt a zistis konecnu cenu :DD" << endl;

    ofstream myfile;
    myfile.open("koniec.txt");
    myfile <<"Zlava je: " << pc << "%\n";
    myfile <<"Cena je: " << cena << "€";
    myfile.close();
    return 0;
}
	


