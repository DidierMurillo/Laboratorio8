#include "obras.h"
#include "escultura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Escultura::Escultura(string nombre, string autor, string fecha, double peso, string material):Obras(nombre, autor, fecha),
	peso(peso), material(material){
}

Escultura::~Escultura(){
}

string Escultura::toString()const{
	stringstream ss;
	ss << Obras::toString() << " Escultura: Peso: " << peso << ", Material:" << material;
	return ss.str();
}