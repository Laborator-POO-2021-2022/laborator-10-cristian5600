#ifndef CAI_HPP
#define CAI_HPP
#include "baza.hpp"
class cai: public Baza {

  int numar_cai;
  int nutret; 
  public:
    cai();
  cai(int, int);
  void afisare();
  int nutret_();
  int graunte_();
  int iarba_();
  int total_();


};
#endif
