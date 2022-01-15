#include "gaini.hpp"

gaini::gaini() {

  numar_gaini = 0;
  graunte = 0;
}

gaini::gaini(int numar_gaini, int graunte) {
	this -> numar_gaini = numar_gaini;
 	this -> graunte = graunte;

}
void gaini::afisare() {
  cout << "gaini -- " << numar_gaini <<" animale -- "<< " graunte -- "<<graunte<<" kg/zi" <<endl;
}
int gaini::graunte_(){
	return graunte;
}
int gaini::nutret_(){
	return 0;
}
int gaini::iarba_(){
	return 0;
}
int gaini::total_(){
	return graunte;
}
