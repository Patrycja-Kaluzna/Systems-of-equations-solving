#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"

#include <iostream>

using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */

int main () 
{   /*
    cout << endl << "TEST WCZYTYWANIA I WYSWIETLANIA WEKTORA:" << endl;
    Wektor Wek;

    cin >> Wek;
    cout << endl << Wek << endl;
    
    cout << endl << "TEST WCZYTYWANIA I WYŚWIETLANIA MACIERZY:" << endl;
    Macierz Mac;

    cin >> Mac;
    cout << endl << Mac;
    
    cout << endl << "TEST DZIALAN NA WEKTORACH:" << endl;
    Wektor Wek1, Wek2, WynikW;

    Wek1.set_wspolrzedna(0,1);
    Wek1.set_wspolrzedna(1,2);
    Wek1.set_wspolrzedna(2,3);

    Wek2.set_wspolrzedna(0,4);
    Wek2.set_wspolrzedna(1,5);
    Wek2.set_wspolrzedna(2,6);

    double Lic, WynikL;

    Lic = 2;

    cout << "DODAWANIE:" << endl;
    WynikW = Wek1 + Wek2;
    cout << WynikW << endl << endl;

    cout << "ODEJMOWANIE:" << endl;
    WynikW = Wek1 - Wek2;
    cout << WynikW << endl << endl;

    cout << "MNOZENIE (ILOCZYN SKALARNY):" << endl;
    WynikL = Wek1 * Wek2;
    cout << WynikL << endl << endl;

    cout << "MNOZENIE PRZEZ LICZBE:" << endl;
    WynikW = Wek1 * Lic;
    cout << WynikW << endl << endl;

    cout << "DZIELENIE PRZEZ LICZBE:" << endl;
    WynikW = Wek1 / Lic;
    cout << WynikW << endl;

    cout << endl << "KONIEC TESTOW" << endl;
    */

    cout << "TEST PODNOSZNIA DO KWADRATU ELEMENTÓW MACIERZY:" << endl;
    Macierz M1, M2;
    cin >> M1;
    M2 = M1.elementy2();
    cout << endl << M2 << endl;

    cout << "TEST ILOCZYNU WEKTOROWEGO:" << endl;
    Wektor W1, W2, Wynik;
    cin >> W1;
    cin >> W2;
    Wynik = W1.iloczyn_wektorowy(W2);
    cout << endl << Wynik << endl;
    
}