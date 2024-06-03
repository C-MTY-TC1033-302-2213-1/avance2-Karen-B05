//Tarea3 - Polimorfismo
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 26-Mayo-2024
//�Qu� aprend� en el desarrollo de esta clase?:
/* En esta clase aprendi sobre el polimorfismo y los apuntadores. Los apuntadores almacenan la direcci�n de memoria de otra variable,
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
    //M�todos constructores: vacio
    Polimorfismo();

    //M�todos modificadores - setters
    void setPtrVideo(int index, Video *video);
    void setCantidad(int _cantidad);

    //M�todos de acceso - getters
    Video* getPtrVideo(int index);
    int getCantidad();

    //Otros m�todos
    void leerArchivo(string _nombre);
    void reporteInventario();
    void reporteCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void reportePeliculas();
    void reporteSeries();
};


#endif // Polimorfismo_h
