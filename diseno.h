#pragma once
#include "obras.h"
#include <string>
using std::string;

class Diseno: public Obras{
	string terreno;
  public:
	Diseno(string,string,string,string);
	virtual ~Diseno();
	virtual string toString()const;
};