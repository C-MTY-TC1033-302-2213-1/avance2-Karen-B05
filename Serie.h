//Actividad de Aprendizaje Presencial - Herencia
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
//�Qu� aprend� en el desarrollo de esta clase?: Aprendi sobre herencia y concatenacion

#ifndef Serie_h
#define Serie_h

#include <string>
//Para la Herencia
#include "Video.h"
//Para la Composici�n
#include "Episodio.h"

using namespace std;
class Serie: public Video{
private:
    Episodio episodios[5];
    int cantidad;

public:
    //M�todos constructores: vacio y con par�metros
    Serie();
    Serie(string _iD,string _titulo,int _duracion,string _genero,double _calificacion);

    //M�todos modificadores - setters
    void setEpisodio(int posicion, Episodio episodio);
    void setCantidad(int _cantidad);

    //M�todos de acceso - getters
    Episodio getEpisodio(int posicion);
    int getCantidad();

    //Otros m�todos
    double calculaPromedio();
    string str();
    void agregaEpisodio(Episodio episodio);
    void calculaDuracion();
};

#endif // Serie_h
