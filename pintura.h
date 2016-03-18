#pragma once
#include "obras.h"
#include <string>
using std::string;

class Pintura: public Obras{
	string material;
	string tecnica;
  public:
	Pintura(string,string,string,string,string);
	virtual ~Pintura();
	virtual string toString()const;
};