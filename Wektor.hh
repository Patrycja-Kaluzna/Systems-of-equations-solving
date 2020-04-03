#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"

#include <iostream>

/*
 * Modeluje pojecie wektora, ktorego
 * glowna cecha sa jego wspolrzedne.
 */ 
class Wektor {

  double wspolrzedne [ROZMIAR];   // Wspolrzedne wektora

  public:

  double get_wspolrzedna (const unsigned int indeks) const {    // Umozliwia czytanie wspolrzednych wektora
    return wspolrzedne [indeks]; }                              

  void set_wspolrzedna (const unsigned int indeks, const double wsp) {    // Umozliwia wczytywanie wspolrzednych wektora
    wspolrzedne [indeks] = wsp; }                                         

  Wektor operator + (const Wektor Wek) const;   // Realizuje dodawanie wektorow

  Wektor operator - (const Wektor Wek) const;   // Realizuje odejmowanie wektorow

  double operator * (const Wektor Wek) const;   // Realizuje mnozenie (iloczyn skalarny) wektorow

  Wektor operator * (const double lic) const;   // Realizuje mnozenie wektora przez liczbe

  Wektor operator / (const double lic) const;   // Realizuje dzielenie wektora przez liczbe

};

/*
 * Wczytuje wspolrzedne wektora ze strumienia wejsciowego.
 */ 
std::istream & operator >> (std::istream & Str, Wektor & Wek);

/*
 * Zapisuje wspolrzedne wektora na strumieniu wyjsciowym.
 */
std::ostream & operator << (std::ostream & Str, const Wektor & Wek);

#endif