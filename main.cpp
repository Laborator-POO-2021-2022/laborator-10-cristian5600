#include "vaci.hpp"
#include "cai.hpp"
#include "gaini.hpp"
#include "porci.hpp"
#include "capre.hpp"
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char ** argv) {
  int cantitate_graunte = 0, cantitate_nutret = 0, cantitate_iarba = 0, total = 0, nr_zile = 0;
  int capacitate = 2000, cantitate, nr_umpleri;
  Baza ** animale;
  Baza * aux;
  animale = new Baza * [5];
  animale[0] = new vaci(10, 30);
  animale[1] = new gaini(100, 5);
  animale[2] = new cai(2, 8);
  animale[3] = new porci(8, 4, 5);
  animale[4] = new capre(4, 4);
  cout << "          afisare animale " << endl << endl;
  for (int i = 0; i < 5; i++)
    animale[i] -> afisare();

  cout << endl << "   calculare cantitate --" << endl << endl;
  for (int i = 0; i < 5; i++) {
    cantitate_graunte += animale[i] -> graunte_();
    cantitate_iarba += animale[i] -> iarba_();
    cantitate_nutret += animale[i] -> nutret_();
    total += animale[i] -> total_();
  }
  cout << "graunte/zi --" << cantitate_graunte << "kg" << endl;
  cout << "nutret/zi --" << cantitate_nutret << "kg" << endl;
  cout << "iarba/zi --" << cantitate_iarba << "kg" << endl;
  cout << "total/zi --" << total << "kg " << endl;

  nr_zile = capacitate / total;
  cantitate = nr_zile * total;
  cout << "nr_zile -> " << nr_zile << "  (cate zile ajunge mancarea din depozit)" << endl;
  cout << "cantitate necesara->" << cantitate << "kg " << endl;
  cout << endl << "in depozit trebuie sa avem:" << endl;
  cout << cantitate_graunte * nr_zile << "kg graunte" << endl;
  cout << cantitate_iarba * nr_zile << "kg iarba" << endl;
  cout << cantitate_nutret * nr_zile << "kg nutret" << endl;

  //de cate ori trebuie umplut depozitul?
  cout << endl << "De cate ori trebuie umplut depozitul?" << endl;
  nr_umpleri = 365 / nr_zile;
  if (365 % nr_zile != 0)
    nr_umpleri += 1;
  cout << "depozitul trebuie umplut de " << nr_umpleri << " ori intr-un an" << endl;

  cout << endl << "\t ~~Cata mancare va ramane la finalul anului (in total si pe fiecare categorie)?~~" << endl;
  //	cout<<"\t Din datele problemei deducem ca la o umplere a depozitului se alimenteaza fiecare \n departament (iarba/graunte/nutret) in aceeasi zi."<<endl;
  //	cout<<"\t Daca am umple fiecare departament al depozitului in zile separate nu ar mai avea sens sa calculam \n de cate ori trebuie umplut tot depozitul pe an."<<endl;
  cout << "\t La finalul anului vor ramane in total " << capacitate - cantitate << "kg." << endl;

  cout << endl << "\t  ~~cata mancare se consuma pe zi(in total si pe fiecare categorie)? ~~" << endl;
  cout << "graunte/zi --" << cantitate_graunte << "kg" << endl;
  cout << "nutret/zi --" << cantitate_nutret << "kg" << endl;
  cout << "iarba/zi --" << cantitate_iarba << "kg" << endl;
  cout << "total/zi --" << total << "kg " << endl;

  cout << endl << "\t ~~Top 3 consumatori de mancare (ca si cantitate in kg, nu conteaza tipul mancarii)  ~~" << endl;

  bool ok = false;
  while (ok == false) {
    ok = true;
    for (int i = 0; i < 4; i++) {
      if (animale[i] -> total_() < animale[i + 1] -> total_()) {
        aux = animale[i];
        animale[i] = animale[i + 1];
        animale[i + 1] = aux;
        ok = false;
      }
    }
  }
  for (int i = 0; i < 3; i++)
    animale[i] -> afisare();

  return 0;
}
