#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Obras::Obras(string nombre, string autor, string fecha): nombre(nombre), autor(autor), fecha(fecha){
}

Obras::~Obras(){
}

string Obras::toString()const{
	stringstream ss;
	ss << "Obra de Arte: Nombre: " << nombre << ", Autor: " << autor << ", Fecha: " << fecha;
	return ss.str();
}


