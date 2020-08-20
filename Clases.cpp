// Clases
// Libreria que se esta usando para los comandos eh imprimir texto en consola 
#include <iostream>

//Es para utilizar el cout y poder retornar informacion
using namespace std;

// Creamos la clase
    class Cat
        {
            // Aqui ponemos las variables publicas
            public:

            string Name;

            // Primer Gato
            Cat()
                {
                    Name = "Pina";
                }

            Cat(string Name2)
                {
                    Name = Name2;
                }

            //Agregando una accion a la clase (Metodos/funciones)
            void Meow()
            {
                cout << Name << " Dice Meow" << endl;
            }

        };

//Bloque en el que se ha estado ejecutando el codigo para verlo en consola
int main()
    {
        //Mandamos a llamar a la Clase
        Cat MiPrimerGato;
        Cat MiSegundoGato("Milaneso");

        //Mandamos a imprimir los nombres
        cout << MiPrimerGato.Name << endl;
        cout << MiSegundoGato.Name << endl;

        // Mandamos llamar el Metodo para imprimir un Meow
        MiPrimerGato.Meow();
        MiSegundoGato.Meow();

        return 0;
    }
