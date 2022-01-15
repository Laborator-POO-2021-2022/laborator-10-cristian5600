#ifndef GAINI_HPP
#define GAINI_HPP
#include "baza.hpp"
class gaini: public Baza {

  int numar_gaini;
  int graunte; 
  public:
    gaini();
  gaini(int, int);
  void afisare();
  int nutret_();
  int graunte_();
  int iarba_();
  int total_();


};
#endif
