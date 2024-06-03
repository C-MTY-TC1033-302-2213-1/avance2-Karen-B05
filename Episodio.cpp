//Tarea 2
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024

#include "Episodio.h"

//Constructores
Episodio::Episodio(){
    titulo = "TC1030";
    temporada = 2;
    calificacion = 100;
}

Episodio::Episodio(string _titulo,int _temporada,int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}


//Métodos modificadores
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}

void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

void Episodio::setCalificacion(int _calificacion){
}


//Métodos de acceso
string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

int Episodio::getCalificacion(){
    return calificacion;
}

//Otros metodos
string Episodio::str(){
    return titulo + ' ' + to_string(temporada) + ' ' + to_string(calificacion);
}
