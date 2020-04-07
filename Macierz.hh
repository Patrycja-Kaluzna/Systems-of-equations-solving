#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "Wektor.hh"
#include "rozmiar.h"

#include <iostream>

/*
 * Modeluje pojecie macierzy, ktorej
 * glowna cecha sa jej kolumny.
 */
class Macierz {
  
  Wektor kolumny [ROZMIAR];   // Kolumny macierzy
 
  public: 

  Wektor get_kolumna (const unsigned int indeks) const {    // Umozliwia czytanie kolumn macierzy
    return kolumny [indeks]; }

  void set_kolumna (const unsigned int indeks, const Wektor Kol) {    // Umozliwia wczytywanie kolumn macierzy
    kolumny [indeks] = Kol; }    

  Macierz elementy2 () const; 

};

/*
 * Wczytuje kolumny macierzy ze strumienia wejsciowego.
 */ 
std::ostream & operator << (std::ostream & Str, const Macierz & Mac);

/*
 * Zapisuje kolumny macierzy na strumieniu wyjsciowym. 
 */ 
std::istream & operator >> (std::istream & Str, Macierz & Mac);

#endif