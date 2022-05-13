// Cadenas de Strings.cpp
// Isra Morán P.

#include <iostream>
#include <string>

using namespace std;

int main() 
{


    string A(" Frase de Prueba ");
    string B;

    cout << "Frase de Ejemplo: 'Frase de Prueba' " << endl;
    cout << "Coloque la Palabra que desea buscar: ";
    cin >> B;

    size_t found = A.find(B);

    if (found != string::npos)
    {

        cout << "Se encontro en el lugar: " << found << endl;

    }

    return 0;

}