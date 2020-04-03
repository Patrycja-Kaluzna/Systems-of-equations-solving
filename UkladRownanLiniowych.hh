#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
  
  public:
  
};

/*
 * Wczytuje uklad rownan ze strumienia wejsciowego.
 */
std::istream & operator >> (std::istream & Strm, UkladRownanLiniowych & UklRown);

/*
 * Zapisuje uklad rownan na strumieniu wyjsciowym.
 */ 
std::ostream& operator << (std::ostream & Strm, const UkladRownanLiniowych & UklRown);

#endif