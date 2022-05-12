// Sudoku.cpp 
// Isra Morán P.

#include <iostream>
using namespace std;

int Tamaño[9][9];
bool flag = false;

// Entrada o Inicio del proceso
void input() 
{
	
	char Respuesta;
	cout << "Introduzca el tamaño del Sudoku";

	for (int X = 0; X < 9; X++) 
	{

		for (int Y = 0; Y < 9; Y++) 
		{

			cin >> Respuesta;
			Tamaño[X][Y] = Respuesta - '0';

		}

	}

}

// Salida o Final del proceso 
void output() 
{

	for (int X = 0; X < 9; X++) 
	{

		for (int Y = 0; Y < 9; Y++) 
		{

			if (Tamaño[X][Y]) 
			{

				cout << Tamaño[X][Y];

			}

			else 
			{

				cout << " " << endl;

			}

			if (Y % 3 == 2) cout << "  " << endl;

		}

		if (X % 3 == 2) cout << endl;
		cout << endl;

	}

}

// Si se cumplen las condiciones se creará
bool check(int N, int Numero) 
{

	// Se crea la Fila  
	for (int X = 0; X < 9; X++) 
	{

		if (Tamaño[N / 9][X] == Numero) 
		{

			return false;

		}

	}

	// Se crea la Columna 
	for (int X = 0; X < 9; X++) 
	{

		if (Tamaño[X][N % 9] == Numero) 
		{

			return false;

		}

	}

	int W = N / 9 / 3 * 3;
	int X = N % 9 / 3 * 3;

	for (int Y = 0; Y < 3; Y++) 
	{

		for (int Z = 0; Z < 3; Z++) 
		{
			if (Tamaño[W + Y][X + Z] == Numero) 
			{

				return false;

			}

		}

	}

	return true;

}

void dfs(int N) 
{

	int X = N / 9, Y = N % 9;

	if (N > 80) 
	{

		flag = true;
		return;

	}

	if (Tamaño[X][Y]) 
	{

		dfs(N + 1);
		return;

	}

	for (int i = 1; i <= 9; i++) 
	{

		if (check(N, i)) 
		{

			Tamaño[X][Y] = i;
			dfs(N + 1);
 
			if (flag) 
			{

				return;

			}

			Tamaño[X][Y] = 0;

		}

	}

}

int main() 
{

	input();

	cout << endl << endl;

	dfs(0);

	output();

	return 0;

}