//Tarea3 - Polimorfismo
//Nombre: Karen Barrera
//Matricula: A00840405
//Carrera: ITC
//Fecha: 26-Mayo-2024


#include "Polimorfismo.h"

using namespace std;

//Métodos constructores: vacio
Polimorfismo::Polimorfismo(){
    for(int index = 0; index < MAX_VIDEOS; index ++){
        arrPtrVideos[index] = nullptr;
    }

    //Cantidad de videos
    cantidad = 0;
}

//Métodos modificadores - setters
void Polimorfismo::setPtrVideo(int index, Video *video){
    //Validar index >= 0 && index < cantidad
    if (index >= 0 && index < cantidad){
        //Cambiar el apuntador
        arrPtrVideos[index] = video;
    }
}

//Cambia el valor del atributo cantidad
//Cantidad debe ser entre 0 .. MAX_VIDEOS - 1, de lo contrario NO se modifica el valor del cantidad
void Polimorfismo::setCantidad(int _cantidad){
    //Validar el valor de _cantidad
    if (_cantidad >= 0 && _cantidad <= MAX_VIDEOS){
        cantidad = _cantidad;
    }
}


//Métodos de acceso - getters
Video* Polimorfismo::getPtrVideo(int index){
    //Validar que exista el index
    if (index >= 0 && index < cantidad){
        return arrPtrVideos[index];
    }

    //Si no existe
    return nullptr;
}

int Polimorfismo::getCantidad(){
    return cantidad;
}


//Otros métodos
void Polimorfismo::reporteInventario(){
    //Declaración de contadores
    int contPeliculas, contSeries;

    //Inicializar los contadores
    contPeliculas = 0;
    contSeries = 0;

    //Recorrer todo el arreglo de ptr usando un for
    for (int index = 0; index < cantidad; index++){
        cout << arrPtrVideos[index]->str() << endl;

        // * indirección (ptr) genera el objeto
        if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            contPeliculas++;
        }
        else if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            contSeries++;
        }
    }
    //Fuera del for - Desplegar los totales
    cout << "Peliculas = " << contPeliculas << endl;
    cout << "Series = " << contSeries <<endl;
}

void Polimorfismo::reporteCalificacion(double _calificacion){
	//Contador total
	int total;

    //Inicializar contador
	total = 0;

	for (int index = 0; index < cantidad; index++){
		//Verificar si tiene la calificación == _calificacion
		//Si es un apuntador se usa la notación ->
		if(arrPtrVideos[index]->getCalificacion() == _calificacion){
			cout << arrPtrVideos[index]->str() << endl;
			total++;
		}
	}

	//Desplegar el total fuera del for
	cout << "Total = " << total << endl;
}

void Polimorfismo::reporteGenero(string _genero){
    //Contador total
	int total;

    //Inicializar contador
	total = 0;

	for (int index = 0; index < cantidad; index++){
		//Si es un apuntador se usa la notación ->
		if(arrPtrVideos[index]->getGenero() == _genero){
			cout << arrPtrVideos[index]->str() << endl;
			total++;
		}
	}

	//Desplegar el total fuera del for
	cout << "Total = " << total << endl;
}

void Polimorfismo::reportePeliculas(){
    //Declaración de contadores
    int total;

    //Inicializar los contadores
    total = 0;

    //Recorrer todo el arreglo de ptr usando un for
    for (int index = 0; index < cantidad; index++){
        // * indirección (ptr) genera el objeto
        if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            cout << arrPtrVideos[index]->str() << endl;
            total++;
        }
    }
    if (total > 0){
        cout << "Total Peliculas = " << total << endl;
    }
    else{
        cout << "No peliculas" << endl;
    }
}

void Polimorfismo::reporteSeries(){
    //Declaración de contadores
    int total;

    //Inicializar los contadores
    total = 0;

    //Recorrer todo el arreglo de ptr usando un for
    for (int index = 0; index < cantidad; index++){
        // * indirección (ptr) genera el objeto
        if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            cout << arrPtrVideos[index]->str() << endl;
            total++;
        }
    }
    if (total > 0){
        cout << "Total Series = " << total << endl;
    }
    else{
        cout << "No series" << endl;
    }
}

//Para leer el archivo
void Polimorfismo::leerArchivo(string nombre){
    //Declaraciones
    Serie *arrPtrSeries[50];
    Pelicula *arrPtrPeliculas[50];
    Episodio episodio;
    fstream entrada;
    //Almacenadores
    string row[7];
    string line, word;
    //Contadores
    int cantidadPeliculas = 0;
    int cantidadSeries = 0;
    int iR = 0, index;
    double promedio;

    entrada.open(nombre, ios::in); //Se abre el archivo

    while (getline(entrada, line)){
        stringstream s(line);
        iR = 0;

        while (getline(s, word, ',')){
            row[iR++] = word;
        }

        //Determinar si es pelicula, serie o episodio
        if (row[0] == "P"){
            arrPtrPeliculas[cantidadPeliculas] = new Pelicula(row[1],row[2], stoi(row[3]),row[4], stod(row[5]), stoi(row[6]));
            //cout << "Pelicula" << arrPtrPeliculas[cantidadPeliculas] -> str() << endl;
            cantidadPeliculas++;
        }
        else if (row[0] == "S"){
            arrPtrSeries[cantidadSeries] = new Serie(row[1],row[2], stoi(row[3]),row[4], stod(row[5]));
            //cout << "Serie" << arrPtrSeries[cantidadSeries] -> str() << endl;
            cantidadSeries++;
        }
        else if (row[0] == "E"){
            index = stoi(row[1]) - 500;
            arrPtrSeries[index] -> agregaEpisodio(*(new Episodio(row[2],stoi(row[3]),stoi(row[4]))));
            //cout << "Episodio" << arrPtrSeries[index] -> str() << endl;
        }
    }

    for(int index = 0; index < cantidadSeries; index++){
        promedio = arrPtrSeries[index] -> calculaPromedio(); //Calcula la calificación de la serie
        arrPtrSeries[index] -> setCalificacion(promedio); //Cambiar la calificación
        arrPtrSeries[index] -> calculaDuracion(); //Calcula la duraciónd de la serie
        arrPtrVideos[cantidad++] = arrPtrSeries[index];
    }

    for(int index = 0; index < cantidadPeliculas; index++){
        arrPtrVideos[cantidad++] = arrPtrPeliculas[index];
    }

    for(int index = 0; index < cantidad; index++){
        //cout << index << " " << arrPtrVideos[index]->str() << endl;
    }

    entrada.close(); //Se cierra el archivo
}
