// Polimorfismo
#include <iostream>

using namespace std;

// Creamos una clase Mago
class Mage
{
    public:
        //Metodo para el poder y la vida del Mago
        Mage(int BasePower, int BaseHP, string BaseNombre)
        {
            Power = BasePower;
            hp = BaseHP;
            Nombre = BaseNombre;
        }
        float Damage()
        {
            return Power;
        }
        //metodo para recibir daño lo que hace es que acepta un valor
        void GetDamage(int Value, string NombreMago)
        {
            hp -= Value;
            cout << "La vida de " + NombreMago + " es :" << hp << endl;
        }
        void SpellGreet()
        {
            cout << "Hello Im " + Nombre + " the mage!." << endl;
        }

    //Protegemos la variable para que no sea modificada
    protected:
        int Power, hp; // declarando las variables
        string Nombre;
};

// Polimorfismo para que herede de la clase Mago y poder crear otras clases
class IceMage : public Mage // Funcionalidad para que herede de la Clase Mage
{
    public: // Declaramos como publicas por que se ponen como privadas por default
     IceMage( int BasePower, int BaseHP, string BaseNombre) : Mage(BasePower,BaseHP,BaseNombre) // Funcionalidad para que herede de Mage
     {
         Power = BasePower + 1;
         hp = BaseHP;
         Nombre = BaseNombre;
     }
};

// Polimorfismo para que herede de la clase Mago y poder crear otras clases
class FireMage : public Mage // Funcionalidad para que herede de la Clase Mage
{
    public: // Declaramos como publicas por que se ponen como privadas por default
     FireMage( int BasePower, int BaseHP, string BaseNombre) : Mage(BasePower,BaseHP,BaseNombre) // Funcionalidad para que herede de Mage
     {
         Power = BasePower;
         hp = BaseHP + 1;
         Nombre = BaseNombre;
     }
};

int main(){

    // Llamando al construtor Mage con los dos parametros (BasePower,BaseHp)
    Mage Harry(1,20,"Harry");
    // llamando el metodo para saludar
    Harry.SpellGreet();

    // Llamando al construtor Mage con los dos parametros (BasePower,BaseHp)
    Mage Valdomero(3,15,"Valdomero");
    // llamando el metodo para saludar
    Valdomero.SpellGreet();

    cout << "\n" << endl;// Saldo de linea
    cout << "Apartir de aqui aplicamos el polimosfismo" << endl;
    cout << "\n" << endl;
    cout << "Polimosfismo: Es la capacidad de que las Clases Hijas \n";
    cout << "              se puedan comportar como las Clases Padres." << endl;
    cout << "\n" << endl;

    // Creamos un apuntado
    Mage* CurrentMage;

    FireMage Gandalf(10,10,"Gandalf");
    IceMage Dumbledore(10,10,"Dumbledore");

    CurrentMage = &Gandalf;// Cambiamos de Mago con el apuntador
    CurrentMage->GetDamage(5,"Gandalf");// Llamamos al metodo para que reciba el daño

    CurrentMage = &Dumbledore;
    CurrentMage->GetDamage(3,"Dumbledore");

    return 0;
}