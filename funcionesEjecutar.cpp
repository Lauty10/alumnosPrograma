#include <iostream>
#include "funcionesDeProyecto.h"
using namespace std;
void menuAlumnos(int opcion){
int condicion=true;
while(condicion==true){
cout<<"BIENVENIDO AL MENU DE ALUMNOS UTN"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"1-)SI DESEA AGREGAR UN NUEVO ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"2-)SI DESEA AGREGAR NOTAS A UN ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"3-)SI DESEA ELIMINAR UN ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"3-)SI DESEA EDITAR NOTAS DE UN ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"INGRESE LA OPCION QUE DESEE"<<endl;
cin>>opcion;
switch(opcion){
case 1:
    condicion=false;
    break;
case 2:
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
