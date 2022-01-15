#ifndef PORCI_HPP
#define PORCI_HPP
#include "baza.hpp"
class porci: public Baza {

  int numar_porci;
  int graunte;
  int iarba;
  public:
    porci();
  porci(int, int, int);
  void afisare();
  int nutret_();
  int graunte_();
  int iarba_();
  int total_();


};
#endif
