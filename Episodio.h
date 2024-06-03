//Tarea 2
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
////¿Qué aprendí en el desarrollo de esta clase?: Recorde las cosas que aprendi en la formación pasada y aprendi sobre concatenacion


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

    //Métodos
public:
    //Constructores
    Episodio();
    Episodio(string _titulo,int _temporada,int _calificacion);

    //Métodos modificadores
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);

    //Métodos de acceso
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    //Otros metodos
    string str();

};

#endif // Episodio_h
