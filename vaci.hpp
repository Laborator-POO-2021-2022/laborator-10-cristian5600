#ifndef VACI_HPP
#define VACI_HPP
#include "baza.hpp"
class vaci: public Baza {

  int numar_vaci;
  int nutret;
  public:
    vaci();
  vaci(int, int);
  void afisare();
  int nutret_();
  int graunte_();
  int iarba_();
  int total_();


};
#endif
