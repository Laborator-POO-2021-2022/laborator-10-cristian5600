#include "porci.hpp"

porci::porci() {

  numar_porci = 0;
  graunte = 0;
  iarba = 0;
}

porci::porci(int numar_porci, int graunte, int iarba) {
	this -> numar_porci = numar_porci;
 	this -> graunte = graunte;
 	this -> iarba = iarba;

}
void porci::afisare() {
  cout << "porci -- " << numar_porci <<" animale -- "<< " graunte -- "<<graunte<<" kg/zi -- iarba "<<iarba<<" kg/zi" <<endl;
}
int porci::nutret_(){
	return 0;
}
int porci::graunte_(){
	return graunte;
}
int porci::iarba_(){
	return iarba;
}
int porci::total_(){
	return iarba+graunte;
}
