#include <iostream>
#include "funcionesDeProyecto.h"
#include <string>
using namespace std;
void menuAlumnos(int opcion,std::string vectorA[],int TAMANIO){
std::string nombre;
system("cls");
int condicion=true;
while(condicion==true){
cout<<"BIENVENIDO AL MENU DE ALUMNOS UTN"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"1-)AGREGAR EL NOMBRE DEL ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"2-)SI DESEA AGREGAR NOMBRE DE LAS MATERIAS DEL ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"3-)SI DESEA CALCULAR EL PROMEDIO DE EL ALUMNO POR MATERIA"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"4-)SI DESEA OBTENER EL PROMEDIO TOTAL"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"4-)SI DESEA SALIR DEL JUEGO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"INGRESE LA OPCION QUE DESEE"<<endl;
cin>>opcion;
switch(opcion){
case 1:
    system("cls");
    obtenerNombre(nombre);
    system("cls");
    menuAlumnos(opcion,vectorA,TAMANIO);
    break;
case 2:
    system("cls");
    materiasAlumnos(vectorA,TAMANIO);
    system("cls");
    menuAlumnos(opcion,vectorA,TAMANIO);
    break;
case 3:
    system("cls");
    calcularPromedioMateria(vectorA,TAMANIO);
    system("cls");
    menuAlumnos(opcion,vectorA,TAMANIO);
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
cout<<"NOMBRE DEL ALUMNO CARGADO EN NUESTRO SISTEMA...."<<endl

 ;
system("pause");
return nombre;
}

//MATERIAS DE LOS ALUMNOS
void materiasAlumnos(std::string vectorA[],int TAMANIO){
for(int j=0;j<TAMANIO;j++){
    cout<<"INGRESE EL NOMBRE DE LA MATERIA "<<j+1<<" SIN ESPACIOS:";
    cin>>vectorA[j];
}
 system("pause");
}
//CALCULO DE PROMEDIO POR MATERIA
int calcularPromedioMateria(std::string vectorA[],int TAMANIO){
bool cicloUno=true;
bool cicloDos=true;
float resultado;
while(cicloUno==true){
for(int j=0;j<TAMANIO;j++){
    cout<<"MATERIA: "<<vectorA[j]<<" SU NUMERO ES: "<<j+1<<endl;
}
int datoMateria,acumulador=0,nota,res,resDos,cantNotas=0;
std::string nombreMateria;
cout<<"SELECCIONE EL NUMERO DE MATERIA: ";
cin>>datoMateria;
for(int j=0;j!=datoMateria;j++){
    nombreMateria=vectorA[j];
}
cout<<"USTEDES SELECCIONO LA MATERIA: "<<nombreMateria<<endl;
while(cicloDos==true){
cantNotas++;
cout<<"POR FAVOR INGRESE UNA NOTA: ";
cin>>nota;
acumulador+=nota;

cout<<"DESEA AGREGAR OTRA NOTA? 1-)SI 2-)NO: ";
cin>>res;
if(res==2){
    cout<<"CARGA DE NOTAS FINALIZADA..."<<endl;
    resultado=((float)acumulador/cantNotas);
    cout<<"EL PROMEDIO DE ESTA MATERIA ES: "<<resultado<<endl;
     cicloDos=false;
}else if(res!=1&&res!=2){
cout<<"OPCION INCORRECTA"<<endl;
}
}
cout<<"DESEA CARGAR OTRA MATERIA?1-)SI 2-)NO: ";
cin>>resDos;
if(resDos==1){
    cicloDos=true;
    system("cls");
}else if(resDos==2){
cicloUno=false;
}
}
return 1;
}




