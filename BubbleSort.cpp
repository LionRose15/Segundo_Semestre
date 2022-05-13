// BubbleSort.cpp
// Isra Morán P.

#define size 5
#include <iostream>
using namespace std;

void Mostrar(int*);
int Buscar(const int[], int);

int main(int argc, char** argv) 
{

	int Valor = 0;
	int Arreglo[size] = { 8, 3, 9, 1, 4 };
	int W, X = size, Y, Temporal;

	Mostrar(Arreglo);

	do 
	{

		W = 0;

		for (X = 1; X < Y; X++) 
		{ 

			if (*(Arreglo + X - 1) > *(Arreglo + X)) 
			{

				Temporal = *(Arreglo + X - 1);
				*(Arreglo + X - 1) = *(Arreglo + X);
				*(Arreglo + X) = Temporal;
				W = X;
				
				Mostrar(Arreglo);
				
			}

		}

		W = X;

	} while (W != 0);

	cout << " Coloque un Valor para otrograle un indice:" << endl;
	cin >> Valor;
	cout << "Esta ubicado en el Arreglo [" << Buscar(Arreglo, Valor) << "] " << endl;
	
	return 0;

}

void Mostrar(int* a) 
{

	int Z;
	for (Z = 0; Z < size; Z++) printf("\t[%d]", *(a + Z));
	printf("\n");

}

int Buscar(const int Arreglo[size], int Valor)
{

	int Arriba = size - 1;
	int Abajo = 0;
	int Media;

	while (Abajo <= Arriba)
	{

		Media = (Arriba + Abajo) / 2;
		if (Arreglo [Media] == Valor)
			return Media;
		
		else

			if (Valor < Arreglo [Media])
				Arriba = Media - 1;

			else
				Abajo = Media + 1;

	}

	return -1;

}