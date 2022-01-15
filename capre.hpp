#ifndef CAPRE_HPP
#define CAPRE_HPP
#include "baza.hpp"
class capre: public Baza {

  int numar_capre;
  int nutret; 
  public:
    capre();
  capre(int, int);
  void afisare();
  int nutret_();
  int graunte_();
  int iarba_();
  int total_();


};
#endif
