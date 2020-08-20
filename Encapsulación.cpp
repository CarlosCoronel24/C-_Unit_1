// Encapsulación 
#include <iostream>

using namespace std;

// Creamos la clase
    class Dog
    {
        public:

            // Funcion que asigna valor a las variables
            Dog(string Name, string BarkType)
            {
                mName = Name;
                mBark = BarkType;
            }

            // Agreando metodo para que retorne el valor del nombre en pantalla y se pueda modificar
            string GetName()
            {
                return mName;
            }
            string GetBark()
            {
                return mBark;
            }

            // Funcionalidad para cambiar el nombre del perro
            void SetName(string NewName)
            {
                mName = NewName;
            }

        private:
            string mName;
            string mBark; // ladrido
    };

int main()
    {
        Dog PerroUno("Cacho","Berk");
        cout << PerroUno.GetName();
        cout << " " + PerroUno.GetBark() + "!" << endl;
        // Como esta encapsulado del dato no permite modificarlo
        //PerroUno.Mname = "Poopy";

        // Pero si utilizamos la funcionalidad para cambiar el nombre del perro si nos permite
        PerroUno.SetName("Popy");
        // Retornamos el valos de nombre modificado
        cout << PerroUno.GetName();
        cout << " " + PerroUno.GetBark() + "!" << endl;

        // Agregando un segundo perro
        Dog PerroDos("Morena","Guau");
        cout << PerroDos.GetName();
        cout << " " + PerroDos.GetBark() + "!" << endl;

        return 0;
    }