#pragma once
#include "obras.h"
#include <string>
using std::string;

class Literatura: public Obras{
	string genero;
	string epoca;
  public:
	Literatura(string,string,string,string,string);
	virtual ~Literatura();
	virtual string toString()const;
};