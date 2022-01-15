#include "vaci.hpp"

vaci::vaci() {

  numar_vaci = 0;
  nutret = 0;
}

vaci::vaci(int numar_vaci, int nutret) {
	this -> numar_vaci = numar_vaci;
 	this -> nutret = nutret;

}
void vaci::afisare() {
  cout << "vaci -- " << numar_vaci <<" animale -- "<< " nutret -- "<<nutret<<" kg/zi" <<endl;
}
int vaci::nutret_(){
	return nutret;
}
int vaci::graunte_(){
	return 0;
}
int vaci::iarba_(){
	return 0;
}
int vaci::total_(){
	return nutret;
}
