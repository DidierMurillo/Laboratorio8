#include "obras.h"
#include "diseno.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Diseno::Diseno(string nombre, string autor, string fecha, string terreno):Obras(nombre, autor, fecha),
	terreno(terreno){
}

Diseno::~Diseno(){
}

string Diseno::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Diseno: Terreno: " << terreno;
	return ss.str();
}