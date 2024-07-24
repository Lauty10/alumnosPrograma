#include <iostream>
#include "funcionesDeProyecto.h"
#include <string>
#include "rlutil.h"
using namespace std;
void menuAlumnos(int opcion,std::string vectorA[],int TAMANIO){
std::string nombre;
system("cls");
int condicion=true;
float promedioTotal=0;
int cantMaterias=0;
while(condicion==true){
cout<<"BIENVENIDO AL MENU DE ALUMNOS UTN"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"1-)AGREGAR EL NOMBRE DEL ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"2-)SI DESEA AGREGAR NOMBRE DE LAS MATERIAS DEL ALUMNO"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"3-)SI DESEA CALCULAR EL PROMEDIO DE EL ALUMNO POR MATERIA"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"4-)SI DESEA OBTENER EL PROMEDIO TOTAL DEL ALUMNO"<<endl;
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
    break;
case 2:
    system("cls");
    materiasAlumnos(vectorA,TAMANIO,nombre);
    system("cls");
    break;
case 3:
    system("cls");
    calcularPromedioMateria(vectorA,TAMANIO,promedioTotal,cantMaterias);
    system("cls");
    break;
case 4:
    system("cls");
    totalNota(promedioTotal,cantMaterias,nombre);
    system("cls");
    break;
}
}
}
//OBTENER NOMBRE
void obtenerNombre(std::string&nombre){
system("cls");
cout<<"INGRESAR EL NOMBRE DEL ALUMNO: ";
cin>>nombre;
cout<<"NOMBRE DEL ALUMNO CARGADO EN NUESTRO SISTEMA...."<<endl;
system("pause");
}

//MATERIAS DE LOS ALUMNOS
void materiasAlumnos(std::string vectorA[],int TAMANIO,std::string nombre){
cout<<"BIENVENIDO "<<nombre<<" DALE UN NOMBRE A TUS MATERIAS!!"<<endl;
for(int j=0;j<TAMANIO;j++){
    cout<<"INGRESE EL NOMBRE DE LA MATERIA "<<j+1<<" SIN ESPACIOS:";
    cin>>vectorA[j];
}
 system("pause");
}
//CALCULO DE PROMEDIO POR MATERIA
void calcularPromedioMateria(std::string vectorA[],int TAMANIO,float&promedioTotal,int&cantMaterias){
bool cicloUno=true;
bool cicloDos=true;
float resultado;
while(cicloUno==true){
for(int j=0;j<TAMANIO;j++){
    cout<<"MATERIA "<<j+1<<":"<<vectorA[j]<<endl;
}
int datoMateria,acumulador=0,nota,res,resDos,cantNotas=0;
std::string nombreMateria;
cout<<"SELECCIONE EL NUMERO DE MATERIA: ";
cin>>datoMateria;
for(int j=0;j!=datoMateria;j++){
    nombreMateria=vectorA[j];
}
cout<<"USTEDES SELECCIONO LA MATERIA: "<<nombreMateria<<endl;
cantMaterias++;
system("pause");
system("cls");
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
    promedioTotal+=resultado;
    system("pause");
    system("cls");
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
}

void totalNota(float promedioTotal,int cantMaterias,std::string nombre){
system("cls");
float resultado;
resultado=((float)promedioTotal/cantMaterias);
cout<<"EL PROMEDIO TOTAL DE "<<nombre<<" ES DE: "<<resultado;
system("pause");
}



