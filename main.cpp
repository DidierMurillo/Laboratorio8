#include "obras.h"
#include "diseno.h"
#include "escultura.h"
#include "literatura.h"
#include "pintura.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stringstream;

void imprimirAgregar(vector<Obras>);

int main(int argc, char* argv[]){
	vector<Obras> agregar;
	vector<Obras> eliminar;
	int respuesta=0;
	int agre=0;
	int elim=0;
	int repor=0;
	while(respuesta!=4){
		cout<<"-----------menu-----------------"<<endl;
		cout<<"1) Crear Obras"<<endl;
		cout<<"2) Transferir Obras"<<endl;
		cout<<"3) Reportes"<<endl;
		cout<<"4) Salir"<<endl;
		cin>>respuesta;
		if(respuesta==1){
			agre=0;
			while(agre!=5){
				string nombre,autor,fecha;
				cout<<"-----------Agregar-----------------"<<endl;
				cout<<"1) literatura"<<endl;
				cout<<"2) escultura"<<endl;
				cout<<"3) pintura"<<endl;
				cout<<"4) diseno"<<endl;
				cout<<"5) salir"<<endl;
				cin>>agre;
				if(agre==1){
					string genero,epoca;
					cout<<"Ingrese el nombre de la obra:"<<endl;
					cin>>nombre;
					cout<<"Ingrese el autor de la obra:"<<endl;
					cin>>autor;
					cout<<"Ingrese el fecha de la obra:"<<endl;
					cin>>fecha;
					cout<<"Ingrese el genero de la obra:"<<endl;
					cin>>genero;
					cout<<"Ingrese el epoca de la obra:"<<endl;
					cin>>epoca;
					agregar.push_back(Literatura(nombre,autor,fecha,genero,epoca));
				}else if(agre==2){
					string material;
					double peso;
					cout<<"Ingrese el nombre de la obra:"<<endl;
					cin>>nombre;
					cout<<"Ingrese el autor de la obra:"<<endl;
					cin>>autor;
					cout<<"Ingrese el fecha de la obra:"<<endl;
					cin>>fecha;
					cout<<"Ingrese el peso de la obra:"<<endl;
					cin>>peso;
					cout<<"Ingrese el material de la obra:"<<endl;
					cin>>material;
					agregar.push_back(Escultura(nombre,autor,fecha,peso,material));
				}else if(agre==3){
					string material,tecnica;
					cout<<"Ingrese el nombre de la obra:"<<endl;
					cin>>nombre;
					cout<<"Ingrese el autor de la obra:"<<endl;
					cin>>autor;
					cout<<"Ingrese el fecha de la obra:"<<endl;
					cin>>fecha;
					cout<<"Ingrese el material de la obra:"<<endl;
					cin>>material;
					cout<<"Ingrese el tecnica de la obra:"<<endl;
					cin>>tecnica;
					agregar.push_back(Pintura(nombre,autor,fecha,material,tecnica));
				}else if(agre==4){
					string terreno;
					cout<<"Ingrese el nombre de la obra:"<<endl;
					cin>>nombre;
					cout<<"Ingrese el autor de la obra:"<<endl;
					cin>>autor;
					cout<<"Ingrese el fecha de la obra:"<<endl;
					cin>>fecha;
					cout<<"Ingrese el terreno de la obra:"<<endl;
					cin>>terreno;
					agregar.push_back(Diseno(nombre,autor,fecha,terreno));
				}else if(agre==5){
				}else{
					cout<<"Opcion ingresada no valida"<<endl;
				}
			}
		}else if(respuesta==2){
			cout<<"-------Transferir a otro Museo------"<<endl;
			imprimirAgregar(agregar);
			int pos;
			cout<<"Ingrese posicion :";
			cin>>pos;
			eliminar.push_back(agregar[pos]);
			agregar.erase(agregar.begin()+pos);
		}else if(respuesta==3){
			repor=0;
			while(repor!=3){
				cout<<"-------Reportes------"<<endl;
				cout<<"1) Obras Disponibles"<<endl;
				cout<<"2) Obras Transferidas"<<endl;
				cout<<"3) salir"<<endl;
				cin>>repor;
				if(repor==1){
					cout<<"-------Obras Disponibles------"<<endl;
					imprimirAgregar(agregar);
				}else if(repor==2){
					cout<<"-------Obras Transferidas------"<<endl;
					imprimirAgregar(eliminar);
				}else if(repor==3){
				}else{
					cout<<"Opcion ingresada no valida"<<endl;
				}
			}
		}else if(respuesta==4){
		}else{
			cout<<"Opcion ingresada no valida"<<endl;
		}
	}
}	

void imprimirAgregar(vector<Obras> arreglo){
	for (int i = 0; i < arreglo.size(); i++){
		cout<<i<<")  ";
		cout<<arreglo[i].toString();
		cout<<endl;
	}
}
