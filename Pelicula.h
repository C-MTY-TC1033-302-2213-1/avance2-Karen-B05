//Actividad de Aprendizaje Presencial - Herencia
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
//¿Qué aprendí en el desarrollo de esta clase?: Aprendi sobre herencia


#ifndef Pelicula_h
#define Pelicula_h

#include <string>
#include <iostream>
#include <stdio.h>
#include "Video.h"

using namespace std;
//Clase pelicula es derivada de Video
class Pelicula : public Video {
private:
    //Atributo de especializacion
    int oscares;

public:
    //Metodos constructores: vacio y con parámetros
    Pelicula();
    Pelicula(string _iD,string _titulo,int _duracion,string _genero,double _calificacion, int _oscares);

    //Método modificador - setters
    void setOscares(int _oscares);

    //Método de acceso - getters
    int getOscares();

    //Otros metodos
    string str();
};

#endif // Pelicula_h
