// Lectura de Archivos
#include <iostream>
#include <fstream> //Agregando libreria para manejar lectura y escritura de archivos externos

using namespace std;

int main()
{
    // Creamos el archivo
    // ofstream: Salida de datos (outputstream)
    ofstream MiArchivo("Bitacora.txt");
    string NombreJugador = "";

    //Condicional para saber si esta abierto el archivo y escriba algo
    if(MiArchivo.is_open())
    {
        /*
        // Escribir lo siguiente en el archivo
        MiArchivo << "Hola a Todos!" << endl;

        // ciclo for para contar numeros
        for(int i = 0; i <= 10; i++)
        {

            MiArchivo << "El numero es: ";
            MiArchivo << i << endl;
        }*/

        // Segundo flujo para ingresar nombre de algun personaje
        cout << "¿Hola Jugador, Cual es tu nombre?" << endl;
        cin  >> NombreJugador;
        MiArchivo << NombreJugador;


    }else
    {
            cout << "No logro abrir el archivo (Bitacora.txt), Favor de revisar el antivirus." << endl;
    }

    // Indicamos al programa que ya no vamos a necesitar el archivo
    MiArchivo.close();


    // inputstream: Entrada de datos (lestura de datos)
    ifstream MiArchivoLectura("Bitacora.txt");
    // guardamos la informacion leida del archivo en una variable
    string linea;
    string NombreDelJugador = "";
    int Renglon = 0;


    //Abre el archivo para poder leerlo
    if(MiArchivoLectura.is_open())
    {
        //obtiene la linea del archivo que le proporcionamos y lo muestra en consola
        while( getline(MiArchivoLectura,linea))
            {
                Renglon = Renglon + 1;

                if(Renglon == 1){
                 NombreDelJugador = linea;
                }
            }
    }
    else
    {
        cout << "No logro abrir el archivo (Bitacora.txt), Favor de revisar el antivirus." << endl;
    }

    cout << "El nombre del jugador es: ";
    cout << NombreDelJugador << endl;



    return 0;
}
