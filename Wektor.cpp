#include "Wektor.hh"

/*
 * Metoda realizuje dodawanie wektorow.
 *
 * Argument:
 *      Wek - wektor, ktory zostanie dodany do
 *            drugiego wektora, bedacego obiektem
 *            klasy Wektor, dla ktorego zostanie
 *            wywołana ta metoda
 * Zwraca:
 *      Wektor, ktorego wspolrzedne sa suma 
 *      wspolrzednych wektorow bedacych skaldnikami.
 */
Wektor Wektor::operator + (const Wektor Wek) const
{
    unsigned int i;
    double wsp;
    Wektor pomWek;
    
    for (i = 0; i < ROZMIAR; i++)
    {
        wsp = this->get_wspolrzedna(i) + Wek.get_wspolrzedna(i);
        pomWek.set_wspolrzedna (i, wsp);
    }

    return pomWek;
}



/*
 * Metoda realizuje odejmowanie wektorow.
 * 
 * Argument:
 *      Wek - wektor, ktory zostanie odjety od
 *            drugiego wektora, bedacego obiektem
 *            klasy Wektor, dla ktorego zostanie
 *            wywolana ta metoda.
 * 
 * Zwraca:
 *      Wektor, ktorego wspolrzedne sa roznica
 *      wspolrzednych wektorw bedacych odjemna
 *      i odjemnikiem.
 */
Wektor Wektor::operator - (const Wektor Wek) const
{
    unsigned int i;
    double wsp;
    Wektor pomWek;

    for (i = 0; i < ROZMIAR; i++)
    {
        wsp = this->get_wspolrzedna(i) - Wek.get_wspolrzedna(i);
        pomWek.set_wspolrzedna (i, wsp);
    }

    return pomWek;
}



/*
 * Metoda realizuje mnozenie (iloczyn skalarny)
 * wektorow.
 * 
 * Argument:
 *      Wek - wektor, ktorego iloczyn skalarny
 *            z wektorem, bedacym obiektem klasy
 *            Wektor, dla ktorego zostanie wywolana
 *            ta metoda, zostanie obliczony.
 * 
 * Zwraca: 
 *      Liczbe rowna co do wartosci iloczynowi
 *      skalarnemu czynnikow.
 */ 
double Wektor::operator * (const Wektor Wek) const
{
    unsigned int i;
    double lic = 0;

    for (i = 0; i < ROZMIAR; i++)
    {
        lic += this->get_wspolrzedna(i) * Wek.get_wspolrzedna(i);
    }

    return lic;
}



/*
 * Metoda realizuje mnozenie wektora przez liczbe.
 * 
 * Argument:
 *      lic - liczba, przez ktora zostanie 
 *            pomnozony wektor, bedacy obiektem
 *            klasy Wektor, dla ktorego zostanie
 *            wywolana ta metoda.
 * 
 * Zwraca:
 *      Wektor, ktorego wspolrzedne sa iloczynem
 *      wspolrzednych wektora (obiektu) i liczby
 *      przekazanej przez argument. 
 */ 
Wektor Wektor::operator * (const double lic) const
{
    unsigned int i;
    double wsp;
    Wektor pomWek;

    for (i = 0; i < ROZMIAR; i++)
    {
        wsp = this->get_wspolrzedna(i) * lic;
        pomWek.set_wspolrzedna(i, wsp);
    }

    return pomWek;
}



/*
 * Metoda realizuje dzielenie wektora przez liczbe.
 * 
 * Argument:
 *      lic - liczba, przez ktora zostanie
 *            podzielony wektor, bedacy obiektem
 *            klasy Wektor, dla ktorego zostanie
 *            wywolana ta metoda.
 * 
 * Warunek wstepny:
 *      - Liczba lic, przekazana przez argument,
 *        musi byc rozna od zera. (jesli jest 
 *        rowna zeru to wyswietla sie stosowny
 *        komunikat o bledzie) 
 * 
 * Zwraca:
 *      Wektor, ktorego wspolrzedne sa ilorazem
 *      wspolrzednych wektora (obiektu) i liczby
 *      przekazanej przez argument.
 */ 
Wektor Wektor::operator / (const double lic) const
{
    unsigned int i;
    double wsp;
    Wektor pomWek;

    if (lic != 0)
    {
        for (i = 0; i < ROZMIAR; i++)
        {
            wsp = this->get_wspolrzedna(i) / lic;
            pomWek.set_wspolrzedna(i, wsp);
        }
    } else {
        std::cout << "Blad: dzielenie przez zero." << std::endl;
    }

    return pomWek;
}



/*
 * Metoda wczytuje wspolrzedne wektora
 * podane na strumienu wejsciowym.
 * 
 * Argumenty:
 *      Str - strumien wejsciowy,
 *      Wek - wektor, ktorego wspolrzedne
 *            zostana wczytane.
 * 
 * Warunki wstepne:
 *      - Pierwszy argument musi byc przekazany
 *        przez referencje.
 *      - Drugi argument tez musi byc przekazany
 *        przez referencje.
 *      - Dane podane na strumieniu wejsciowym
 *        musza byc liczbami.
 *
 * Zwraca:
 *      Strumien wejsciowy. 
 */ 
std::istream & operator >> (std::istream & Str, Wektor & Wek)
{
    unsigned int i;
    double pom;

    for (i = 0; i < ROZMIAR; i++)
    {
        Str >> pom;
        Wek.set_wspolrzedna(i , pom);
    }

    return Str;
}



/*
 * Metoda zapisuje wspolrzedne wektora
 * na strumienu wyjsciowym.
 * 
 * Argumenty:
 *      Str - strumien wyjsciowy,
 *      Wek - wektor, ktorego wspolrzedne
 *            zostana zapisane.
 * 
 * Warunki wstepne:
 *      - Pierwszy argument musi byc przekazany
 *        przez referencje.
 *      - Drugi argument tez musi byc przekazany
 *        przez referencje.   
 *
 * Zwraca:
 *      Strumien wyjsciowy. 
 */
std::ostream & operator << (std::ostream & Str, const Wektor & Wek)
{
    unsigned int i;

    for (i = 0; i < ROZMIAR; i++) 
    {
        Str << Wek.get_wspolrzedna(i) << " ";
    }

    return Str;
}

Wektor Wektor::iloczyn_wektorowy (Wektor Wek) const
{
    Wektor pomWek;
    double x, y, z;
    unsigned int i = 0, j = 1, k = 2;

    x = this->get_wspolrzedna(j) * Wek.get_wspolrzedna(k) - this->get_wspolrzedna(k) * Wek.get_wspolrzedna(j);
    y = this->get_wspolrzedna(i) * Wek.get_wspolrzedna(k) - this->get_wspolrzedna(k) * Wek.get_wspolrzedna(i);
    z = this->get_wspolrzedna(i) * Wek.get_wspolrzedna(j) - this->get_wspolrzedna(j) * Wek.get_wspolrzedna(i);

    pomWek.set_wspolrzedna(i, x);
    pomWek.set_wspolrzedna(j, y);
    pomWek.set_wspolrzedna(k, z);


    return pomWek;
}