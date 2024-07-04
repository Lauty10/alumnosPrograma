#include <iostream>
#include "funcionesDeProyecto.h"
#include <string>
using namespace std;
void menuAlumnos(int opcion){
std::string nombre;
int condicion=true;
int TAM;
cout<<"BIENVENIDO AL GESTOR DE NOTAS ALUMNOS UTN FRGP"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<"INGRESE LA CANTIDAD DE MATERIAS QUE INGRESARA PARA ESTE ALUMNO: ";
cin>>TAM;
const int TAMANIO=TAM;
std::string vectorA[TAMANIO];
system("cls");
while(condicion==true){
cout<<"BIENVENIDO AL MENU DE ALUMNOS UTN"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"1-)AGREGAR EL NOMBRE DEL ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"2-)SI DESEA AGREGAR NOMBRE DE LAS MATERIAS DEL ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"3-)SI DESEA OBTENER EL PROMEDIO DE EL ALUMNO POR MATERIA"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"3-)SI DESEA OBTENER EL PROMEDIO TOTAL"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"INGRESE LA OPCION QUE DESEE"<<endl;
cin>>opcion;
switch(opcion){
case 1:
    system("cls");
    obtenerNombre(nombre);
    break;
case 2:
    system("cls");
    materiasAlumnos(vectorA,TAMANIO);
    condicion=false;
    break;
case 3:
  condicion=false;
    break;
case 4:
    condicion=false;
    break;
}
}
}
//OBTENER NOMBRE
std::string obtenerNombre(std::string nombre){
system("cls");
cout<<"INGRESAR EL NOMBRE DEL ALUMNO: ";
cin>>nombre;
cout<<"NOMBRE DEL ALUMNO CARGADO EN NUESTRO SISTEMA....";
return nombre;
}

//MATERIAS DE LOS ALUMNOS
void materiasAlumnos(std::string vectorA[],int TAMANIO){
for(int j=0;j<TAMANIO;j++){
    cout<<"INGRESE EL NOMBRE DE LA MATERIA "<<j<<":";
    cin>>vectorA[j];
}
}


