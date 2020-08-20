// Apuntadores 
#include <iostream>

using namespace std;

int main()
{
    int Direccion = 3509;

    //Este es el apuntador
    int SegundaDireccion = 1337;
    int* ApuntadorADir;
    int* ApuntadorADir2;

    //Pasamos el valor de la variable al apuntador
    ApuntadorADir = &Direccion;

    //Mostramos el valor
    cout << "-------------" << endl;
    cout << Direccion << endl;
    cout << *ApuntadorADir << endl;
    cout << SegundaDireccion << endl;
    cout << "-------------" << endl;

    *ApuntadorADir = 3;

    //Cambiando el valor del apuntador
    ApuntadorADir = &SegundaDireccion;
    ApuntadorADir2 = &Direccion;

    //Mostramos el valor
    cout << "-------------" << endl;
    cout << Direccion << endl;
    cout << *ApuntadorADir << endl;
    cout << *ApuntadorADir2 << endl;
    cout << "-------------" << endl;


    // Ejemplo 2 - Los apuntadores por asi decirlo toman el valor de otra varible
    // incluso puede llegar a modificarlo
    int milk_price = 10;
    int* new_price;

    new_price = &milk_price;
    *new_price = 15;

    cout << "-------------" << endl;
    cout << milk_price <<endl;
    cout << "-------------" << endl;


    return 0;
}
