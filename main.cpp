#include <iostream>
#include "funcionesDeProyecto.h"
#include <string>

using namespace std;
int main(){
int opcion;
int TAM;
cout<<"BIENVENIDO AL GESTOR DE NOTAS ALUMNOS UTN FRGP"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<"INGRESE LA CANTIDAD DE MATERIAS QUE INGRESARA PARA ESTE ALUMNO: ";
cin>>TAM;
const int TAMANIO=TAM;
std::string vectorA[TAMANIO];
menuAlumnos(opcion,vectorA,TAMANIO);
return 0;
}
