#pragma once

#include <string>
using std::string;

class Obras{
  private:
  	string nombre;
  	string autor;
  	string fecha;
  public:
	Obras(string,string,string);
	virtual ~Obras();
	virtual string toString()const;	
};