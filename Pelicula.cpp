//Actividad de Aprendizaje Presencial - Herencia
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024


#include "Pelicula.h"

//Metodos constructores: vacio y con par�metros
Pelicula::Pelicula():Video(){
    oscares = 100;
}

Pelicula::Pelicula(string _iD,string _titulo,int _duracion,string _genero,double _calificacion, int _oscares):Video(_iD,_titulo,_duracion,_genero,_calificacion){
    oscares = _oscares;
}


//M�todo modificador - set
void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}


//M�todo de acceso
int Pelicula::getOscares(){
    return oscares;
}


//Otros metodos
string Pelicula::str(){
    //Tenemos acceso directo a los atributos de las clase Padre porque son Protected
    return iD + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion) + ' ' + to_string(oscares);
}
