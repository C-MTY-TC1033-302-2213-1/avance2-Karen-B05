//Actividad de Aprendizaje Presencial - Herencia
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 20-Mayo-2024


#include "Serie.h"
#include "Episodio.h"

//Métodos constructores: vacio y con parámetros
Serie::Serie(): Video(){
    //Solo vamos a inicializar cantidad
    cantidad = 0;
}

Serie::Serie(string _iD,string _titulo,int _duracion,string _genero,double _calificacion): Video(_iD,_titulo,_duracion,_genero,_calificacion){
}


//Métodos modificadores - setters
void Serie::setEpisodio(int posicion, Episodio episodio){
    //Primero validar que exista ese episodio
    if(posicion >= 0 && posicion < cantidad){
       episodios[posicion] = episodio;
    }
}

//Cambiar el valor del atributo cantidad con el nuevo valor recibido _cantidad
void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}


//Métodos de acceso - getters
Episodio Serie::getEpisodio(int posicion){
    //Crea un objeto del tipo Episodio y lo inicializa con el Contructor Default
    Episodio epi;

    //Validar que exista el episodio solicitado (posicion)
    if (posicion >= 0 && posicion < cantidad){
        return episodios[posicion];
    }

    //Si no existe se retorna un Episodio default
    return epi;
}

//Retorna el valor del atributo cantidad
int Serie::getCantidad(){
    return cantidad;
}


//Otros métodos
double Serie::calculaPromedio(){
    double acum = 0;

    for(int index = 0; index < cantidad; index++){
        acum = acum + episodios[index].getCalificacion();
    }

    //Validar que tenga episodios
    if (cantidad > 0){
        return acum / cantidad;
    }
    else{
        return 0;
    }
}

//Overriding del método str() de la clase Base
string Serie::str(){
    return iD + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion) + ' ' + to_string(cantidad) + '\n' + getEpisodio(0).str() + '\n' + getEpisodio(1).str() + '\n';
}

//Agrega un episodio solo si existe espacio
void Serie::agregaEpisodio(Episodio episodio){
    if (cantidad < 5){
        episodios[cantidad++] = episodio;
    }
}

void Serie::calculaDuracion(){
   for(int index = 0; index < cantidad; index++){
        duracion += episodios[index].getTemporada();
   }
}
