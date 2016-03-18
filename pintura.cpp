#include "obras.h"
#include "pintura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Pintura::Pintura(string nombre, string autor, string fecha, string material, string tecnica):Obras(nombre, autor, fecha),
	material(material), tecnica(tecnica){
}

Pintura::~Pintura(){
}

string Pintura::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Pintura: Material: " << material << ", Tecnica:" << tecnica;
	return ss.str();
}