//Tarea 2
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024
//¿Qué aprendí en el desarrollo de esta clase?: Recorde las cosas que aprendi en la formación pasada

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

    //Métodos
public:
    //Constructores
    Video();
    Video(string _iD,string _titulo,int _duracion,string _genero,double _calificacion);

    //Métodos modificadores
    void setId(string _iD);
    void setNombre(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);

    //Métodos de acceso
    string getId();
    string getNombre();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    //Otros metodos
    virtual string str();

};

#endif // Video_h
