// Calcular Areas Figuras
#include <iostream>
#include <ctype.h> // isdigit : libreria para validar que sean digitos los datos proporcionados por el usuario

using namespace std;


int main()
{
    int iOpcionFigura = 0;
    //Variables para los calculos
    float Base = 0;
    float Altura = 0;
    float Pi = 3.14;
    float PiEsfera = (4*3.14);
    float Radio = 0;
    float Area = 0;


    // Introduccion para que el usuario seleccione una opcion
    cout << "Calcular Areas de Diferentes Figuras! \n" << endl;
    cout << "¿Que figura desea Calcular? \n" << endl;
    cout << " 1 - Rectangulo" << endl;
    cout << " 2 - Circulo" << endl;
    cout << " 3 - Esfera \n" << endl;

    //Se guarda el valor de la opcion seleccianada
    cout << "La opcion seleccionada es: ";
    cin >> iOpcionFigura;
    cout << "\n";

    //Validamos que la opcion proporcionada sea realmente un numero valido
    while( iOpcionFigura < 1 || iOpcionFigura > 3 || isdigit(iOpcionFigura)){
        // Se repite la instruccion hasta que proporcione algun valor valido
        cout << "Favor de proporcionar una Opcion Valida.\n" << endl;
        cout << "La opcion seleccionada es: ";
        cin >> iOpcionFigura;
        cout << "\n";

    };

    // Realizando Calculos
    switch(iOpcionFigura)
    {

        case 1:
            cout << "Favor de proporcionar la Base del Rectangulo: ";
            cin >> Base;
            cout << "\n";
            cout << "Favor de proporcionar la Altura del Rectangulo: ";
            cin >> Altura;
            cout << "\n";

            // Formula Rectangulo
            Area = (Base*Altura);

            cout << "El Area del Rectangulo es: ";
            cout << Area << endl;
        break;

        case 2:
            cout << "Favor de proporcionar el Radio de el Circulo: ";
            cin >> Radio;
            cout << "\n";

            // Formula Circulo
            Area = Pi * (Radio*Radio);

            cout << "El Area del Circulo es: ";
            cout << Area << endl;
        break;

        case 3:
            cout << "Favor de proporcionar el Radio de el Esfera: ";
            cin >> Radio;
            cout << "\n";

            // Formula Esfera
            Area = PiEsfera*(Radio*Radio);

            cout << "El Area de la Esfera es: ";
            cout << PiEsfera << endl;
        break;

        default:
            cout << "La Opcion seleccionada no es valida" << endl;
    }

    return 0;
}
