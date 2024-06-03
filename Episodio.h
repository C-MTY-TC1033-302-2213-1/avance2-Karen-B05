//Tarea 2
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
////�Qu� aprend� en el desarrollo de esta clase?: Recorde las cosas que aprendi en la formaci�n pasada y aprendi sobre concatenacion


#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <string>

using namespace std;
class Episodio{
//Atributos de la clase
protected:
    string titulo;
    int temporada;
    int calificacion;

    //M�todos
public:
    //Constructores
    Episodio();
    Episodio(string _titulo,int _temporada,int _calificacion);

    //M�todos modificadores
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);

    //M�todos de acceso
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    //Otros metodos
    string str();

};

#endif // Episodio_h
