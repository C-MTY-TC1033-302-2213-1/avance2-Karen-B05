//Tarea3 - Polimorfismo
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 26-Mayo-2024
//¿Qué aprendí en el desarrollo de esta clase?:
/* En esta clase aprendi sobre el polimorfismo y los apuntadores. Los apuntadores almacenan la dirección de memoria de otra variable,
utilizandolos puedes tener a tu clase base apuntando a objetos de clases derivadas (polimorfismo). Utilizando los apuntadores se incrementa la eficiencia
del programa al dar acceso directo.
*/


#ifndef Polimorfismo_h
#define Polimorfismo_h

#include <typeinfo>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"
#include <stdio.h>

using namespace std;
const int MAX_VIDEOS = 100;
class Polimorfismo{
private:
    Video *arrPtrVideos[MAX_VIDEOS];
    int cantidad;

public:
    //Métodos constructores: vacio
    Polimorfismo();

    //Métodos modificadores - setters
    void setPtrVideo(int index, Video *video);
    void setCantidad(int _cantidad);

    //Métodos de acceso - getters
    Video* getPtrVideo(int index);
    int getCantidad();

    //Otros métodos
    void leerArchivo(string _nombre);
    void reporteInventario();
    void reporteCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void reportePeliculas();
    void reporteSeries();
};


#endif // Polimorfismo_h
