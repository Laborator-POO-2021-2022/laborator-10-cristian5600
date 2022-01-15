#ifndef BAZA_HPP
#define BAZA_HPP

#include <fstream>
#include <iostream>

using namespace std;

class Baza{
public:
	
	virtual void afisare() = 0;
	virtual ~Baza() = 0;
	
	virtual int nutret_() = 0;
	virtual int graunte_() = 0;
	virtual int iarba_() = 0;
	virtual int total_() = 0;
	
	
};

#endif
