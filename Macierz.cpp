#include "Macierz.hh"

#include <iostream>

/*
 * Metoda zapisuje kolumny macierzy
 * na strumienu wyjsciowym.
 * 
 * Argumenty:
 *      Str - strumien wyjsciowy,
 *      Mac - macierz, ktorej kolumny
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
std::ostream & operator << (std::ostream & Str, const Macierz & Mac)
{
    unsigned int i;

    for (i = 0; i < ROZMIAR; i++)
    {
        Str << Mac.get_kolumna(i) << std::endl;
    }

    return Str;
}



/*
 * Metoda wczytuje kolumny macierzy
 * podane na strumienu wejsciowym.
 * 
 * Argumenty:
 *      Str - strumien wejsciowy,
 *      Mac - macierz, ktorej kolumny
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
std::istream & operator >> (std::istream & Str, Macierz & Mac)
{
    unsigned int i;
    Wektor pom;

    for (i = 0; i < ROZMIAR; i++)
    {
        Str >> pom;
        Mac.set_kolumna(i, pom);
    }

    return Str;
}