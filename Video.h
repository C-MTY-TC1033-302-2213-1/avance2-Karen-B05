//Tarea 2
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
//�Qu� aprend� en el desarrollo de esta clase?: Recorde las cosas que aprendi en la formaci�n pasada

#ifndef Video_h
#define Video_h

#include <stdio.h>
#include <string>

using namespace std;
class Video{
//Atributos de la clase
protected:
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacion;

    //M�todos
public:
    //Constructores
    Video();
    Video(string _iD,string _titulo,int _duracion,string _genero,double _calificacion);

    //M�todos modificadores
    void setId(string _iD);
    void setNombre(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);

    //M�todos de acceso
    string getId();
    string getNombre();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    //Otros metodos
    virtual string str();

};

#endif // Video_h
