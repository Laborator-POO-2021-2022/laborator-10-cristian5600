#include "capre.hpp"

capre::capre() {

  numar_capre = 0;
  nutret = 0;
}

capre::capre(int numar_capre, int nutret) {
	this -> numar_capre = numar_capre;
 	this -> nutret = nutret;

}
void capre::afisare() {
  cout << "capre -- " << numar_capre <<" animale -- "<< " nutret -- "<<nutret<<" kg/zi" <<endl;
}
int capre::nutret_(){
	return nutret;
}
int capre::graunte_(){
	return 0;
}
int capre::iarba_(){
	return 0;
}
int capre::total_(){
	return nutret;
}
