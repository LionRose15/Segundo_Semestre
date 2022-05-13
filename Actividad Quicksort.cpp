// Actividad Quicksort
// Isra Morán P. - Abraham Torres

#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

struct Libro
{

    public:

        int ISBN;
        string Nombre;
        int NPaginas;
        string Autor;

};

Libro Informacion[6];
void Leer();
void Imprimir();
void quicksort(int Start, int End);
int divide(int Start, int End);
void buscar();

int main()
{

    Libro Informacion[6];
    int Busqueda;

    Leer();
    quicksort(0, 6 - 1);
    Imprimir();
    _getch();
    system("CLS");
    buscar();


    return 0;

}

void Leer()
{

    cout << "Ingrese los datos de los libros: " << Endl;
    cout << Endl;
    for (int i = 0; i < 6; i++)

    {
        cout << "------Libro-----" << i + 1 << Endl;

        cout << "Nombre del Libro: ";
        cin >> Informacion[i].Nombre;

        cout << "ISBN del Libro: ";
        cin >> Informacion[i].ISBN;


        cout << "Numero de paginas del Libro: ";
        cin >> Informacion[i].NPaginas;

        cout << "Nombre del Autor del Libro: ";
        cin >> Informacion[i].Autor;

        cout << Endl;
        system("cls");

    }

}

void Imprimir()
{

    for (int X = 0; X < 6; X++)
    {

        cout << "\nNombre del Libro: " << Informacion[X].Nombre << Endl;

        cout << "ISBN del Libro: " << Informacion[X].ISBN << Endl;
        
        cout << "Numero de paginas del Libro: " << Informacion[X].NPaginas << Endl;

        cout << "Nombre del Autor del Libro: " << Informacion[X].Autor << Endl;
        cout << Endl;

    }

}

void quicksort(int Start, int End)
{ 

    int Pivote;

    if (Start < End) 
    {

        Pivote = divide(Start, End);

        quicksort(Start, Pivote - 1);
        quicksort(Pivote + 1, End);

    }

}

int divide(int Start, int End) 
{

    int Izquierda;
    int Derecha;
    int Pivote;
    
    
    
    
   Libro Temporal;


    Pivote = Informacion[Start].ISBN;
    Izquierda = Start;
    Derecha = End;

    while (Izquierda < Derecha) 
    {

        while (Informacion[Derecha].ISBN > Pivote) 
        {

            Derecha--;

        }

        while ((Izquierda < Derecha) && (Informacion[Izquierda].ISBN <= Pivote)) 
        {

            Izquierda++;

        }

        if (Izquierda < Derecha) 
        {

            Temporal = Informacion[Izquierda];
            Informacion[Izquierda] = Informacion[Derecha];
            Informacion[Derecha] = Temporal;

        }

    }

    Temporal = Informacion[Derecha];
    Informacion[Derecha] = Informacion[Start];
    Informacion[Start] = Temporal;

    return Derecha;

}


void buscar()
{
    int busq;
    int band = 0;

    cout << "Ingresa el ISBN del libro a buscar: ";
    cin >> busq;

    for (int i = 0; i < 6; i++)
    {
        if (Informacion[i].ISBN == busq)
        {
            band = 1;
            cout << "Libro encontrado." << Endl;
            cout << Endl;
            cout << Endl;

            cout << "\nNombre: " << Informacion[i].Nombre << Endl;
            cout << "Nombre del Autor: " << Informacion[i].Autor << Endl;
            cout << "ISBN: " << Informacion[i].ISBN << Endl;
            cout << "Numero de paginas: " << Informacion[i].NPaginas << Endl;
            cout << Endl;

        }

        if (band == 0)
        {
            cout << "Libro no se encuentra";

        }

    }

}