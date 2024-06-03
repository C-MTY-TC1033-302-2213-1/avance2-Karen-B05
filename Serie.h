//Actividad de Aprendizaje Presencial - Herencia
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
//¿Qué aprendí en el desarrollo de esta clase?: Aprendi sobre herencia y concatenacion

#ifndef Serie_h
#define Serie_h

#include <string>
//Para la Herencia
#include "Video.h"
//Para la Composición
#include "Episodio.h"

using namespace std;
class Serie: public Video{
private:
    Episodio episodios[5];
    int cantidad;

public:
    //Métodos constructores: vacio y con parámetros
    Serie();
    Serie(string _iD,string _titulo,int _duracion,string _genero,double _calificacion);

    //Métodos modificadores - setters
    void setEpisodio(int posicion, Episodio episodio);
    void setCantidad(int _cantidad);

    //Métodos de acceso - getters
    Episodio getEpisodio(int posicion);
    int getCantidad();

    //Otros métodos
    double calculaPromedio();
    string str();
    void agregaEpisodio(Episodio episodio);
    void calculaDuracion();
};

#endif // Serie_h
