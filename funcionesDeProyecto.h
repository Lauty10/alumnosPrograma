#ifndef FUNCIONESDEPROYECTO_H_INCLUDED
#define FUNCIONESDEPROYECTO_H_INCLUDED
#include <iostream>
#include <string>
void menuAlumnos(int opcion,std::string vectorA[],int TAMANIO);
void obtenerNombre(std::string&nombre);
void materiasAlumnos(std::string vectorA[],int TAMANIO,std::string nombre);
void calcularPromedioMateria(std::string vectorA[],int TAMANIO,float&promedioTotal,int&cantMaterias);
void totalNota(float promedioTotal,int cantMaterias,std::string nombre);
#endif // FUNCIONESDEPROYECTO_H_INCLUDED
