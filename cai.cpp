#include "cai.hpp"

cai::cai() {

  numar_cai = 0;
  nutret = 0;
}

cai::cai(int numar_cai, int nutret) {
	this -> numar_cai = numar_cai;
 	this -> nutret = nutret;

}
void cai::afisare() {
  cout << "cai -- " << numar_cai <<" animale -- "<< " nutret -- "<<nutret<<" kg/zi" <<endl;
}
int cai::nutret_(){
	return nutret;
}
int cai::graunte_(){
	return 0;
}
int cai::iarba_(){
	return 0;
}
int cai::total_(){
	return nutret;
}
